/*
 * XREFs of ApiSetEditionIsSAS @ 0x1C00A24D0
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00832C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsSAS(char a1, __int64 a2)
{
  unsigned int IsSAS; // ebx
  __int64 v5; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x102u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  IsSAS = 0;
  if ( (int)IsEditionIsSASSupported() >= 0 )
  {
    LOBYTE(v5) = a1;
    IsSAS = EditionIsSAS(v5, a2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x103u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return IsSAS;
}
