/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C008D054
 * Callers:
 *     xxxKeyEventEx @ 0x1C0183FE0 (xxxKeyEventEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        char a5,
        __int16 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  unsigned __int16 v14; // bp
  unsigned int v16; // ebx
  __int16 v17; // dx
  int v19; // [rsp+20h] [rbp-58h]

  v14 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      416,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v16 = 0;
  if ( (int)IsEditionKeyEventLLHookSupported() >= 0 )
  {
    LOBYTE(v19) = a5;
    v16 = EditionKeyEventLLHook(a1, v14, a3, a4, v19, a6, a7, a8, a9, a10, a11, a12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      10,
      417,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v16;
}
