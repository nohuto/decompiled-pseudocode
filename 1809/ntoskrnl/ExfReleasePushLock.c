/*
 * XREFs of ExfReleasePushLock @ 0x1400913C0
 * Callers:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407106A4 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14089B948 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x14089BA5C (PdcNotificationClientAcknowledge.c)
 *     PdcNotificationClientRegister @ 0x14089BBA4 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089BD48 (PdcNotificationClientUnregister.c)
 *     PdcpNotificationClientCallback @ 0x14089BEB0 (PdcpNotificationClientCallback.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D8520 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D94A4 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400914B0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
