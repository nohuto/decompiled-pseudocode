/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D7A80
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     NtUserUnhookWinEvent @ 0x1C00D7580 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00D7620 (NtUserSetWinEventHook.c)
 *     FreeThreadsWinEvents @ 0x1C00D79C0 (FreeThreadsWinEvents.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
