/*
 * XREFs of ExfReleasePushLock @ 0x140091480
 * Callers:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14070F424 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14089A708 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x14089A81C (PdcNotificationClientAcknowledge.c)
 *     PdcNotificationClientRegister @ 0x14089A964 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AB08 (PdcNotificationClientUnregister.c)
 *     PdcpNotificationClientCallback @ 0x14089AC70 (PdcpNotificationClientCallback.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D7280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1408D796C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D8204 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x1409D4C50 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140091570 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
