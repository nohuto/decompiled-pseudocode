/*
 * XREFs of ApiSetEditionHandleRawInput @ 0x1C0036B58
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionHandleRawInput(
        unsigned int a1,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x116u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v14 = 0;
  if ( (int)IsEditionHandleRawInputSupported() >= 0 )
  {
    LOBYTE(v16) = a4;
    LOBYTE(v15) = a3;
    v14 = EditionHandleRawInput(a1, a2, v15, v16, a5, a6, a7, a8, a9, a10);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x117u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v14;
}
