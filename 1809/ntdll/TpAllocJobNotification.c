/*
 * XREFs of TpAllocJobNotification @ 0x180032300
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupAddMember @ 0x18002F138 (TppCleanupGroupAddMember.c)
 *     ZwSetInformationJobObject @ 0x1800A34F0 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocJobNotification(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _PEB_LDR_DATA *v9; // r14
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  _BYTE *v15; // rbp
  __int64 v16; // r15
  _QWORD JobObjectInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  v9 = Ldr;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v9->Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 0x128uLL);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  v11[31] = retaddr;
  v12 = TppCleanupGroupMemberInitialize((__int64)(v11 + 9), a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = v11[27];
  v11[19] = a3;
  v14 = v11 + 8;
  v11[34] = a2;
  v15 = (char *)v11 + 68;
  v11[7] = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (_DWORD *)v11 + 16, (unsigned __int8 *)v11 + 68);
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  v11[4] = 0LL;
  v11[6] = v11 + 5;
  v11[5] = v11 + 5;
  JobObjectInformation[0] = v11;
  *v11 = TppDirectTaskVFuncs;
  *((_DWORD *)v11 + 2) = *v14;
  *((_BYTE *)v11 + 12) = *v15;
  v16 = v11[27];
  JobObjectInformation[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy(v11 + 9);
    goto LABEL_21;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  v11[36] = 0LL;
  if ( a5 )
    v11[13] = *(_QWORD *)(a5 + 48);
  if ( v11[11] )
    TppCleanupGroupAddMember((__int64)(v11 + 9));
  *(_QWORD *)&v9->Length = v11;
  return 0LL;
}
