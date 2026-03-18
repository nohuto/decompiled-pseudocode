/*
 * XREFs of ApiSetIsMouseDeviceOnIgnoreList @ 0x1C003D804
 * Callers:
 *     UpdateMouseConnectionState @ 0x1C003D704 (UpdateMouseConnectionState.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsMouseDeviceOnIgnoreList(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xEAu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsIsMouseDeviceOnIgnoreListSupported() >= 0 )
    v2 = IsMouseDeviceOnIgnoreList(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xEBu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v2;
}
