/*
 * XREFs of ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01772C0
 * Callers:
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C00A3D20 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C00A3EF0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuard(CInpLockGuard *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  LONG v5; // r8d

  if ( !(unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((_DWORD *)this + 10) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( glMitInGuard <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  --glMitInGuard;
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 1), 0, v5, 0);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
