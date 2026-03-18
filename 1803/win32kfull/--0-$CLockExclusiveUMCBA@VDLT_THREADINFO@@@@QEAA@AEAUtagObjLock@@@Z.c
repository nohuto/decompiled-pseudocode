/*
 * XREFs of ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D772C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     NtUserUnhookWinEvent @ 0x1C00D7580 (NtUserUnhookWinEvent.c)
 *     NtUserSetWinEventHook @ 0x1C00D7620 (NtUserSetWinEventHook.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
