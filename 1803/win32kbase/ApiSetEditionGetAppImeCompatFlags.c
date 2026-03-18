/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C013E3CC
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012C06C (NlsKbdSendIMEProc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetAppImeCompatFlags(__int64 a1)
{
  unsigned int AppImeCompatFlags; // ebx

  AppImeCompatFlags = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xFCu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionGetAppImeCompatFlagsSupported() >= 0 )
    AppImeCompatFlags = EditionGetAppImeCompatFlags(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xFDu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return AppImeCompatFlags;
}
