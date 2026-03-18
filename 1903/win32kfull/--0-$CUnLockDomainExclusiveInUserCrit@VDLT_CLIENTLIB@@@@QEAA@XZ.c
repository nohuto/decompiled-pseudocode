/*
 * XREFs of ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0126DE4
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C0126BAC (xxxDoSysExpunge.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagDomLock **__fastcall CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CUnLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(
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
  tagDomLock::UnLockExclusive(DomainLockRef);
  return a1;
}
