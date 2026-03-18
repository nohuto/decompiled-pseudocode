/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0163110
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C01634A0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0162CC4 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C01994F4 (ApiSetEditionDelegateCapturePointers.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // di
  _BYTE v14[128]; // [rsp+40h] [rbp-1B8h] BYREF
  _DWORD v15[36]; // [rsp+C0h] [rbp-138h] BYREF
  _BYTE v16[128]; // [rsp+150h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v15, 0, 0x88uLL);
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  CTouchProcessor::DelegateCapture((__int64)this, (__int64)v14, a2, v8, (__int64)v15);
  if ( !LOWORD(v15[0])
    || !v15[1]
    || (v4 = 1, v12 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v16, (const struct tagINPUTDEST *)&v15[2])) )
  {
    v12 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v16, v9, v11);
  if ( v12 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v10, v15);
}
