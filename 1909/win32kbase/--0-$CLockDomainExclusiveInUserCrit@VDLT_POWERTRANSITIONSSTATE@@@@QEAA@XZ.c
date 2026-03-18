/*
 * XREFs of ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0104734
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE **__fastcall CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(
        PERESOURCE **a1,
        __int64 a2,
        __int64 a3)
{
  PERESOURCE *DomainLockRef; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL, a2, a3);
  *a1 = DomainLockRef;
  if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(&gDomainDummyLock, v5, v6);
    DomainLockRef = *a1;
  }
  tagDomLock::LockExclusive(DomainLockRef);
  return a1;
}
