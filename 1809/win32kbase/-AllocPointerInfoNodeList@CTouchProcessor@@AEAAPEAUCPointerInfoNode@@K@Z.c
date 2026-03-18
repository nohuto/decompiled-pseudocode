/*
 * XREFs of ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C0133B04
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx

  v3 = (unsigned int)a2;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (_DWORD)v3 && (unsigned __int64)(576 * v3) <= 0xFFFFFFFF && 576 * (_DWORD)v3 )
    return (struct CPointerInfoNode *)Win32AllocPoolZInit((unsigned int)(576 * v3), 0x65707355u);
  else
    return 0LL;
}
