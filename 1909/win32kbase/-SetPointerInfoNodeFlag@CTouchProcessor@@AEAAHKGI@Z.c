/*
 * XREFs of ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0171B24
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C016C130 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C016C280 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0171BD0 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 * Callees:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164518 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0164750 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01734BC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::SetPointerInfoNodeFlag(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int16 v5; // r14
  unsigned int v6; // ebx
  struct CPointerInputFrame *result; // rax
  unsigned int v9; // ebx
  struct CPointerInputFrame *v10; // rsi
  struct CPointerInfoNode *NodeInFrame; // rax

  v5 = a3;
  v6 = a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( a4 != 0x200000 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v6, a3);
  v9 = 0;
  v10 = result;
  if ( result )
  {
    NodeInFrame = CTouchProcessor::FindNodeInFrame((CTouchProcessor *)this, result, v5, 0LL);
    if ( NodeInFrame )
    {
      *((_DWORD *)NodeInFrame + 47) |= a4;
      v9 = 1;
    }
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v10);
    return (struct CPointerInputFrame *)v9;
  }
  return result;
}
