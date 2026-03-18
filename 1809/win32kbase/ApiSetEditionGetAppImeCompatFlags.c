/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C0161BF8
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C014F318 (NlsKbdSendIMEProc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
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
      0x104u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionGetAppImeCompatFlagsSupported() >= 0 )
    AppImeCompatFlags = EditionGetAppImeCompatFlags(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x105u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return AppImeCompatFlags;
}
