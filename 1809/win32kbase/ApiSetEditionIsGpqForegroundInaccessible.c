/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0036CF8
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     NtUserGetAsyncKeyState @ 0x1C0038940 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundInaccessible(unsigned int a1, __int64 a2)
{
  unsigned int IsGpqForegroundInaccessible; // ebx

  IsGpqForegroundInaccessible = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x10Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionIsGpqForegroundInaccessibleSupported() >= 0 )
    IsGpqForegroundInaccessible = EditionIsGpqForegroundInaccessible(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x10Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return IsGpqForegroundInaccessible;
}
