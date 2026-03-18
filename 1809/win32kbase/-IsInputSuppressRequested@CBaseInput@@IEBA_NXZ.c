/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0149A94
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D30 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockShared@tagObjLock@@QEAAXXZ @ 0x1C0062F20 (-LockShared@tagObjLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v4; // r8
  bool v5; // di

  DomainLockRef = GetDomainLockRef(9);
  if ( DomainLockRef == &gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v4);
  tagObjLock::LockShared((tagObjLock *)DomainLockRef);
  v5 = dword_1C01CE270 == 1;
  tagObjLock::UnLock((tagObjLock *)DomainLockRef);
  return v5;
}
