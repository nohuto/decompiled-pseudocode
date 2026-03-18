/*
 * XREFs of ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C0138FB4
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C0138DE8 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerCaptureData(
        struct _KTHREAD **this,
        struct CPointerCaptureData *a2,
        __int64 a3)
{
  __int64 v4; // rax
  struct CPointerCaptureData **v5; // rcx

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 10) && *((_DWORD *)a2 + 31) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 56) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 58) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 60) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 106) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(_QWORD *)a2;
  if ( *(struct CPointerCaptureData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CPointerCaptureData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct CPointerCaptureData *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  Win32FreePool((__int64)a2);
}
