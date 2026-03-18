/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C0098F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C002A4E0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v7; // r8
  char v8; // di

  if ( (int)IsDestroyEventHookSupported() >= 0 )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(9LL, v2, v3);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v7);
    if ( tagDomLock::IsLockedExclusive(DomainLockRef) )
    {
      v8 = 1;
    }
    else
    {
      tagDomLock::LockExclusive(DomainLockRef);
      v8 = 0;
    }
    DestroyEventHook(a1);
    if ( !v8 )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
}
