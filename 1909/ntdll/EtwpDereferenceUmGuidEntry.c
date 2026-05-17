/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180006330
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18000AD08 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 * Callees:
 *     EtwpAcquireGuidEntryExclusive @ 0x1800062DC (EtwpAcquireGuidEntryExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive(a1 + 40);
    v3 = *(_QWORD *)(a1 + 168);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
