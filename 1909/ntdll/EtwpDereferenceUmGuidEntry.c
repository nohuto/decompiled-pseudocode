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

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(__int64 BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(BaseAddress + 52), 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(BaseAddress);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)BaseAddress);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(BaseAddress + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(BaseAddress + 40));
    v3 = *(void **)(BaseAddress + 168);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
  }
  return result;
}
