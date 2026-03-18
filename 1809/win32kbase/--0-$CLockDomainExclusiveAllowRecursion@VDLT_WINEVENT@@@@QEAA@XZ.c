/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursion@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C005EB90
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C005EB40 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursion<DLT_WINEVENT>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 *DomainLockRef; // rcx
  __int64 v4; // r8

  DomainLockRef = GetDomainLockRef(5);
  *(_QWORD *)a1 = DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == &gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DomainLockRef, v2, v4);
    DomainLockRef = *(__int64 **)a1;
  }
  if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  return a1;
}
