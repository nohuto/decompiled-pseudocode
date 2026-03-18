/*
 * XREFs of ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B58E8
 * Callers:
 *     NtUserSetWinEventHook @ 0x1C00B5340 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v6 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v6);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
