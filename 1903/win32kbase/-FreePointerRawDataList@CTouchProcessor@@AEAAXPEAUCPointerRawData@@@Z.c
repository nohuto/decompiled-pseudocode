/*
 * XREFs of ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01675B8
 * Callers:
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01646B8 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0166D8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerRawDataList(struct _KTHREAD **this, struct CPointerRawData *a2, __int64 a3)
{
  struct CPointerRawData *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx

  v3 = a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  while ( v3 )
  {
    v4 = (__int64)v3;
    v3 = (struct CPointerRawData *)*((_QWORD *)v3 + 3);
    v5 = *(_QWORD *)(v4 + 16);
    if ( !v5 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
      v5 = *(_QWORD *)(v4 + 16);
    }
    Win32FreePool(v5);
    Win32FreePool(v4);
  }
}
