/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B2CD4
 * Callers:
 *     AddHmodDependency @ 0x1C00B27D0 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B2814 (GetHmodTableIndex.c)
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 *     RemoveHmodDependency @ 0x1C00B2D28 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C0126BAC (xxxDoSysExpunge.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
        tagDomLock **a1)
{
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_CLIENTLIB::getDLT();
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
