/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C013E818
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C012A3F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
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
      0xEAu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionImmActivateAndUnloadThreadsLayoutSupported();
  if ( (int)result >= 0 )
    result = EditionImmActivateAndUnloadThreadsLayout(a1, a2, 0LL, a4, a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0xEBu,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
