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

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PVOID BaseAddress, __int64 a2)
{
  LOGICAL result; // eax
  void *v4; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 13, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(BaseAddress, a2);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)BaseAddress);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *((_DWORD *)BaseAddress + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 5);
    v4 = (void *)*((_QWORD *)BaseAddress + 21);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
