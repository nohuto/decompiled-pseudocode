/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C0040728
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  unsigned int v9; // r14d
  unsigned int v11; // edi
  int v12; // edx
  int v14; // [rsp+20h] [rbp-38h]

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      420,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v11 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 )
  {
    LOBYTE(v14) = a5;
    v11 = EditionHandleAltTabCancel(a1, v9, a3, a4, v14, a6, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      421,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v11;
}
