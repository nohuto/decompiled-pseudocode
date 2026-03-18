/*
 * XREFs of ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BC84
 * Callers:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(
        tagDomLock **a1,
        tagDomLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rcx

  DLT = DLT_QUEUE::getDLT();
  *a1 = (tagDomLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagDomLock *)gObjDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  tagDomLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
