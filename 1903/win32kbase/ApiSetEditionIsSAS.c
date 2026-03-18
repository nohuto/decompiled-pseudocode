/*
 * XREFs of ApiSetEditionIsSAS @ 0x1C00B31CC
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00960E0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(char a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int IsSAS; // ebx
  int v5; // edx
  __int64 v6; // rcx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      396,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  IsSAS = 0;
  if ( (int)IsEditionIsSASSupported() >= 0 )
  {
    LOBYTE(v6) = a1;
    IsSAS = EditionIsSAS(v6, v2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      397,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return IsSAS;
}
