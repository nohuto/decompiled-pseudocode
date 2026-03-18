/*
 * XREFs of EtwRegisterEventCallback @ 0x1408FA390
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C5400 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C5448 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwRegisterEventCallback(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v9; // rdi
  _QWORD *PoolWithTag; // rax

  v6 = 0;
  v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( !a2 || a2 != qword_140572A38 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = EtwpAcquireLoggerContextByLoggerId(v7, a1, 0);
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x43777445u);
    if ( PoolWithTag )
    {
      PoolWithTag[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 159, (signed __int64)PoolWithTag, 0LL) )
      {
        v6 = -1073741811;
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      v6 = -1073741670;
    }
    EtwpReleaseLoggerContext(v9, 0);
  }
  else
  {
    v6 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
