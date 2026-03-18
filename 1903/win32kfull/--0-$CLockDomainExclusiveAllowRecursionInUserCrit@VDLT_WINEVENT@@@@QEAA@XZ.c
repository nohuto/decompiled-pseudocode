/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C000AB90
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(
        __int64 a1)
{
  unsigned int DLT; // eax
  PERESOURCE *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (PERESOURCE *)GetDomainLockRef(DLT);
  *(_QWORD *)a1 = DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == (PERESOURCE *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    DomainLockRef = *(PERESOURCE **)a1;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagDomLock::LockExclusive(*(tagDomLock **)a1);
  return a1;
}
