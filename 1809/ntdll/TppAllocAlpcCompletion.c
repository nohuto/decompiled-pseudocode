/*
 * XREFs of TppAllocAlpcCompletion @ 0x1800313F8
 * Callers:
 *     TpAllocAlpcCompletionEx @ 0x1800316E0 (TpAllocAlpcCompletionEx.c)
 *     TpAllocAlpcCompletion @ 0x180088B20 (TpAllocAlpcCompletion.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupAddMember @ 0x18002F138 (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(
        _PEB_LDR_DATA *Ldr,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  _PEB_LDR_DATA *v8; // r13
  unsigned int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  _PEB_LDR_DATA *v17; // rcx
  _DWORD *v18; // rbx
  _BYTE *v19; // r15
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+30h] [rbp-48h]
  _QWORD v26[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v28; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 296LL);
  v11 = Heap;
  v28 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 248) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v25 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 288) &= ~1u;
      *(_DWORD *)(v11 + 288) |= a6 != 0;
      *(_QWORD *)(v11 + 272) = a2;
      v17 = *(_PEB_LDR_DATA **)(v11 + 216);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      v18 = (_DWORD *)(v11 + 64);
      v19 = (_BYTE *)(v11 + 68);
      if ( v17 )
      {
        TppGetCurrentThreadNumaNode((__int64)v17, (_DWORD *)(v11 + 64), (unsigned __int8 *)(v11 + 68));
      }
      else
      {
        *v18 = 0;
        *v19 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = *v18;
      *(_BYTE *)(v11 + 12) = *v19;
      v20 = *(_QWORD *)(v11 + 216);
      if ( v20 )
      {
        v17 = NtCurrentPeb()->Ldr;
        if ( !v17->ShutdownInProgress )
        {
          v26[1] = *(_QWORD *)(v20 + 64);
          v11 = v28;
          v26[0] = v28;
          v14 = NtAlpcSetInformation(a2, 2LL, v26);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v20, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v28;
      }
      TppRaiseInvalidParameter(v17, v13, v15, v16);
      v14 = -1073741811;
LABEL_16:
      v25 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v25 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12, v21, v22, v23);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12, v21, (volatile signed __int32 *)v22, v23);
    }
  }
  else
  {
    v14 = -1073741801;
    v25 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v28);
    v11 = 0LL;
    v14 = v25;
  }
  if ( v14 >= 0 )
LABEL_28:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
