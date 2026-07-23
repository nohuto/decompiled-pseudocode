/*
 * XREFs of TppAllocAlpcCompletion @ 0x180078C54
 * Callers:
 *     TpAllocAlpcCompletion @ 0x180078B30 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x180078C30 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TpAdjustBindingCount @ 0x180031B40 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TppCleanupGroupAddMember @ 0x180062E50 (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x18009DFE0 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  _PEB_LDR_DATA *v16; // rcx
  _BYTE *v17; // rbx
  _DWORD *v18; // rsi
  __int64 v19; // rsi
  int v21; // [rsp+30h] [rbp-48h]
  _QWORD PortInformation[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *BaseAddress; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v14 = TppCleanupGroupMemberInitialize((__int64)(Heap + 9), a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v21 = v14;
    if ( v14 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      v11[34] = a2;
      v16 = (_PEB_LDR_DATA *)v11[27];
      v11[7] = TppAlpcpExecuteCallback;
      v17 = (char *)v11 + 68;
      v18 = v11 + 8;
      if ( v16 )
      {
        TppGetCurrentThreadNumaNode((__int64)v16, (_DWORD *)v11 + 16, (unsigned __int8 *)v11 + 68);
      }
      else
      {
        *v18 = 0;
        *v17 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v18;
      *((_BYTE *)v11 + 12) = *v17;
      v19 = v11[27];
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v19 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember((__int64)v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
