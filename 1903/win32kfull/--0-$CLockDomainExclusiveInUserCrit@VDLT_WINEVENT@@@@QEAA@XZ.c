/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B5894
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00B5340 (NtUserSetWinEventHook.c)
 *     FreeThreadsWinEvents @ 0x1C00B5750 (FreeThreadsWinEvents.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return a1;
}
