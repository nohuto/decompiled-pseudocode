/*
 * XREFs of ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D8F64
 * Callers:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B448 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00D8DA0 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

tagObjLock **__fastcall CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(tagObjLock **a1)
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v4; // rcx

  DLT = DLT_WINEVENT::getDLT();
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
