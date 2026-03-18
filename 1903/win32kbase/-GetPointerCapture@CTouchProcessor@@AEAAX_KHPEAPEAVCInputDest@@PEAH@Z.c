/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016987C
 * Callers:
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C016A688 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C016B620 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016CC38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016E320 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C016E470 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C017146C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 * Callees:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01699BC (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        struct CInputDest **a4,
        int *a5)
{
  int v6; // ebp
  __int64 v9; // rax

  v6 = a3;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            (CTouchProcessor *)this,
            (struct CPointerCaptureInfo *)(v9 + 32 + (v6 != 0 ? 0x90 : 0)),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
}
