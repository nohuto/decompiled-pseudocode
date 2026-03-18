/*
 * XREFs of ApiSetEditionPersistUserSPI @ 0x1C019AED8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00761C0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPersistUserSPI(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int v7; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      442,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v6 = 0;
  if ( (int)IsEditionPersistUserSPISupported() >= 0 )
    v6 = EditionPersistUserSPI(a1, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      443,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v6;
}
