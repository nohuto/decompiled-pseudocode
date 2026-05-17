/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180050D6C
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1, a2);
    RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, v4, v5, v6);
    RtlRbRemoveNode((__int64)&EtwpGuidEntryTable, a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 168);
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
