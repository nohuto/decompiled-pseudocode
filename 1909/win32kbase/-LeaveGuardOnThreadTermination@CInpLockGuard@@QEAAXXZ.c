/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C00A3D20
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C009CC50 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C00A3EF0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01772C0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(CInpLockGuard *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == *((struct _KTHREAD **)this + 3) )
    CInpLockGuard::LeaveGuard(this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
