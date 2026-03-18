/*
 * XREFs of ApiSetGetMiPInputTransform @ 0x1C019F1FC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C01189B0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetGetMiPInputTransform(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int MiPInputTransform; // ebx
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      238,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  MiPInputTransform = 0;
  if ( (int)IsGetMiPInputTransformSupported() >= 0 )
    MiPInputTransform = GetMiPInputTransform(a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      239,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return MiPInputTransform;
}
