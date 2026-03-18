/*
 * XREFs of ApiSetEditionClientRimDevCallback @ 0x1C013D820
 * Callers:
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionClientRimDevCallback(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x126u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionClientRimDevCallbackSupported();
  if ( (int)result >= 0 )
    result = EditionClientRimDevCallback(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x127u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
