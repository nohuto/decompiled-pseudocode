/*
 * XREFs of ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C016F7C8
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x1C015EA80 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C016F834 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReleasePointerCapture(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax

  v3 = a3;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = *(_QWORD *)(a2 + 40);
  if ( result )
  {
    CTouchProcessor::ReleasePointerCaptureInt(
      (CTouchProcessor *)this,
      (struct CPointerCaptureInfo *)(result + 32 + (v3 != 0 ? 0x90 : 0)));
    return 1LL;
  }
  return result;
}
