/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00D88F8
 * Callers:
 *     xxxDoSysExpunge @ 0x1C00D7298 (xxxDoSysExpunge.c)
 *     RemoveHmodDependency @ 0x1C00D8460 (RemoveHmodDependency.c)
 *     AddHmodDependency @ 0x1C00D84E4 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00D8520 (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
