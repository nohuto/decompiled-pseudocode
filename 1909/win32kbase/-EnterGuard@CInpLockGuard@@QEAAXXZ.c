/*
 * XREFs of ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0177270
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C00A3EF0 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::EnterGuard(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( !(unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  *((_DWORD *)this + 10) = 1;
  this[3] = (PERESOURCE)KeGetCurrentThread();
  ++glMitInGuard;
}
