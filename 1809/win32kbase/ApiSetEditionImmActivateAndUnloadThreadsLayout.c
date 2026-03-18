/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C0161F40
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00659EC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xF2u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionImmActivateAndUnloadThreadsLayoutSupported();
  if ( (int)result >= 0 )
    result = EditionImmActivateAndUnloadThreadsLayout(a1, a2, 0LL, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xF3u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
