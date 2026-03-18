/*
 * XREFs of ApiSetEditionContactVisualization @ 0x1C019924C
 * Callers:
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0163D5C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionContactVisualization(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  int v9; // edx

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      264,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v8 = 0;
  if ( (int)IsEditionContactVisualizationSupported() >= 0 )
    v8 = EditionContactVisualization(a1, v6, 496LL, a4, a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      10,
      265,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v8;
}
