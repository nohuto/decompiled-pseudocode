/*
 * XREFs of ApiSetEditionKeyEventLLHook @ 0x1C00359AC
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
  unsigned int v16; // ebx
  int v18; // [rsp+20h] [rbp-58h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Au,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v16 = 0;
  if ( (int)IsEditionKeyEventLLHookSupported() >= 0 )
  {
    LOBYTE(v18) = a5;
    v16 = EditionKeyEventLLHook(a1, a2, a3, a4, v18, a6, a7, a8, a9, a10, a11, a12);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Bu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v16;
}
