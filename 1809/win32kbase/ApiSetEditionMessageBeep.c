/*
 * XREFs of ApiSetEditionMessageBeep @ 0x1C0162754
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0065320 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionMessageBeep()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x112u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionMessageBeepSupported() >= 0 )
    v0 = EditionMessageBeep(0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x113u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v0;
}
