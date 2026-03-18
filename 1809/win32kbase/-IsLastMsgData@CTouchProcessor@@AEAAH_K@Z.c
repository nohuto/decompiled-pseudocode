/*
 * XREFs of ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C013EFD8
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0063060 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsLastMsgData(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
    return 0LL;
  if ( *v4 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( v4[1] != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_WORD *)v4 - 128) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return *((_DWORD *)v4 - 63) == 3;
}
