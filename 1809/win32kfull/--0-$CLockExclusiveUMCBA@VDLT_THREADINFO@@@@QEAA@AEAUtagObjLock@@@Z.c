/*
 * XREFs of ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B45FC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     NtUserSetWinEventHook @ 0x1C00B4050 (NtUserSetWinEventHook.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CLockExclusiveUMCBA<DLT_THREADINFO>::CLockExclusiveUMCBA<DLT_THREADINFO>(
        tagObjLock **a1,
        tagObjLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rcx
  unsigned int v6; // eax

  DLT = DLT_THREADINFO::getDLT();
  *a1 = (tagObjLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagObjLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  v6 = DLT_THREADINFO::getDLT();
  ptiSetDomainLockBit(v6);
  tagObjLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
