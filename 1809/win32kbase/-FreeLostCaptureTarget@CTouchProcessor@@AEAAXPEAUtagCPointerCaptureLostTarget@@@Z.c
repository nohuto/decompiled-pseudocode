/*
 * XREFs of ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C0138D8C
 * Callers:
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0140034 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0142BC8 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeLostCaptureTarget(
        struct _KTHREAD **this,
        struct tagCPointerCaptureLostTarget ***a2,
        __int64 a3)
{
  struct tagCPointerCaptureLostTarget **v4; // rax
  struct tagCPointerCaptureLostTarget **v5; // rcx

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *a2;
  if ( (*a2)[1] != (struct tagCPointerCaptureLostTarget *)a2
    || (v5 = a2[1], *v5 != (struct tagCPointerCaptureLostTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct tagCPointerCaptureLostTarget *)v4;
  v4[1] = (struct tagCPointerCaptureLostTarget *)v5;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  Win32FreePool((__int64)a2);
}
