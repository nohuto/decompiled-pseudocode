/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B61D8
 * Callers:
 *     RemoveHmodDependency @ 0x1C00B5CCC (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C00B5D58 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B5D9C (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C00B7EE4 (xxxDoSysExpunge.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CLockDomainExclusive<DLT_CLIENTLIB>::CLockDomainExclusive<DLT_CLIENTLIB>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_CLIENTLIB::getDLT();
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
