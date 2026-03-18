/*
 * XREFs of ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0059258
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0059050 (NtUserGetAsyncKeyState.c)
 *     xxxProcessKeyEvent @ 0x1C0130400 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
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
      0x104u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionIsGpqForegroundInaccessibleSupported() >= 0 )
    IsGpqForegroundInaccessible = EditionIsGpqForegroundInaccessible(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x105u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return IsGpqForegroundInaccessible;
}
