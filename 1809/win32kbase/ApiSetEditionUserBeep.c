/*
 * XREFs of ApiSetEditionUserBeep @ 0x1C0163B08
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01524E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 ApiSetEditionUserBeep()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x110u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionUserBeepSupported() >= 0 )
    v0 = EditionUserBeep(440LL, 125LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x111u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v0;
}
