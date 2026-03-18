/*
 * XREFs of ExfReleasePushLock @ 0x14009E3B0
 * Callers:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074721C (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x1408D9274 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x1408D9398 (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x1408D96E0 (PdcpNotificationClientCallback.c)
 *     PdcReleaseRwLockExclusive @ 0x1408D99E0 (PdcReleaseRwLockExclusive.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409144F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140914BCC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140915434 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A19598 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x14009E490 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
