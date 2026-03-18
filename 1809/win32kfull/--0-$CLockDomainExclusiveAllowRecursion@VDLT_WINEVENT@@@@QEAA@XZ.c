/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C01C3464
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  struct _KTHREAD **v4; // rcx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  *(_QWORD *)a1 = DomainLockRef;
  v4 = (struct _KTHREAD **)DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DomainLockRef);
    v4 = *(struct _KTHREAD ***)a1;
  }
  if ( v4[1] == KeGetCurrentThread() )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagObjLock::LockExclusive((tagObjLock *)v4);
  return a1;
}
