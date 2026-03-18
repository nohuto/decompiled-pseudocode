/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0164844
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0118B60 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00E7BF0 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00E7C20 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 */

void __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx

  if ( *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart((struct _MCGEN_TRACE_CONTEXT *)a1);
    if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported() >= 0 )
      PostPointerDeviceOutOfRangeMessage(a1, 0LL, 0LL);
    EtwTracePointerDeviceOutOfRangeMessageStop(v2);
  }
}
