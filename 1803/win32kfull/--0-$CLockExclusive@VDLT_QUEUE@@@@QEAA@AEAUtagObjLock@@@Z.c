/*
 * XREFs of ??0?$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C001C5A8
 * Callers:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CLockExclusive<DLT_QUEUE>::CLockExclusive<DLT_QUEUE>(tagObjLock **a1, tagObjLock *a2)
{
  unsigned int DLT; // eax
  __int64 v5; // rcx

  DLT = DLT_QUEUE::getDLT();
  *a1 = (tagObjLock *)GetDomainLockRef(DLT);
  a1[1] = a2;
  if ( a2 == (tagObjLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  tagObjLock::LockShared(*a1);
  tagObjLock::LockExclusive(a1[1]);
  return a1;
}
