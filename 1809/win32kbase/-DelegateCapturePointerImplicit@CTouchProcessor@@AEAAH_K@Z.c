/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0137018
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0137390 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0136B10 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C0161418 (ApiSetEditionDelegateCapturePointers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v7; // rcx
  char v8; // di
  _OWORD v10[11]; // [rsp+40h] [rbp-258h] BYREF
  _WORD v11[2]; // [rsp+F0h] [rbp-1A8h] BYREF
  int v12; // [rsp+F4h] [rbp-1A4h]
  _BYTE v13[184]; // [rsp+F8h] [rbp-1A0h] BYREF
  _BYTE v14[192]; // [rsp+1B0h] [rbp-E8h] BYREF

  v4 = 0;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CTouchProcessor::DelegateCapture((__int64)this, v10, a2, a4, (__int64)v11);
  if ( !v11[0]
    || !v12
    || (v4 = 1, v8 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v14, (const struct tagINPUTDEST *)v13)) )
  {
    v8 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v14);
  if ( v8 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v7, v11);
}
