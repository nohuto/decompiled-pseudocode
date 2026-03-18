/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C0036308
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     VKFromVSC @ 0x1C00838B0 (VKFromVSC.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C0151FE4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionGetActiveHKL()
{
  __int64 ActiveHKL; // rbx

  ActiveHKL = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x106u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionGetActiveHKLSupported() >= 0 )
    ActiveHKL = EditionGetActiveHKL();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x107u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return ActiveHKL;
}
