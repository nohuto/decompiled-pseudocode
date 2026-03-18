/*
 * XREFs of ApiSetIsProcessForeground @ 0x1C0140EDC
 * Callers:
 *     rimObsIsRegisteredObserverAllowed @ 0x1C01049B8 (rimObsIsRegisteredObserverAllowed.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetIsProcessForeground(unsigned int a1)
{
  unsigned int v2; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x20u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v2 = 0;
  if ( (int)IsIsProcessForegroundSupported() >= 0 )
    v2 = IsProcessForeground(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x21u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v2;
}
