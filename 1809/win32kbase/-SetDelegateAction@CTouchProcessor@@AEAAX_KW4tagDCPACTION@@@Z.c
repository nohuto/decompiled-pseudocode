/*
 * XREFs of ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0133490 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0137390 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C013F820 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C013F9E0 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01430F8 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _KTHREAD *__fastcall CTouchProcessor::SetDelegateAction(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  unsigned int v4; // esi
  __int64 v7; // rdx

  result = KeGetCurrentThread();
  v4 = a3;
  if ( *(struct _KTHREAD **)(a1 + 64) != result )
    result = (struct _KTHREAD *)MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
    return (struct _KTHREAD *)CTouchProcessor::SetDelegateActionInt(a1, v7, v4);
  return result;
}
