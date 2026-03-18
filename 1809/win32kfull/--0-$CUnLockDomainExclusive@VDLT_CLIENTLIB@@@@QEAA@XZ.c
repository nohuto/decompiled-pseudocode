/*
 * XREFs of ??0?$CUnLockDomainExclusive@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00B8198
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C00B7EE4 (xxxDoSysExpunge.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CUnLockDomainExclusive<DLT_CLIENTLIB>::CUnLockDomainExclusive<DLT_CLIENTLIB>(tagObjLock **a1)
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
  tagObjLock::UnLock(DomainLockRef);
  return a1;
}
