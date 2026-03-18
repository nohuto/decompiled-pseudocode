/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C00729D0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this[1] = KeGetCurrentThread();
}
