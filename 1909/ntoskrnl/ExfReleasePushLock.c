/*
 * XREFs of ExfReleasePushLock @ 0x1400C61F0
 * Callers:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074911C (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x1408D8B74 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x1408D8C98 (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x1408D8FE0 (PdcpNotificationClientCallback.c)
 *     PdcReleaseRwLockExclusive @ 0x1408D92E0 (PdcReleaseRwLockExclusive.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140913F50 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140914E94 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400C62D0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
