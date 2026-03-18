/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C014AD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)gRimLog, 4, 1, 16, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 17, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids);
  }
}
