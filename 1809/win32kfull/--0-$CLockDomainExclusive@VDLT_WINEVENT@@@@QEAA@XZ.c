/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     NtUserSetWinEventHook @ 0x1C00B4050 (NtUserSetWinEventHook.c)
 *     FreeThreadsWinEvents @ 0x1C00B4470 (FreeThreadsWinEvents.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CLockDomainExclusive<DLT_WINEVENT>::CLockDomainExclusive<DLT_WINEVENT>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (tagObjLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    DomainLockRef = *a1;
  }
  tagObjLock::LockExclusive(DomainLockRef);
  return a1;
}
