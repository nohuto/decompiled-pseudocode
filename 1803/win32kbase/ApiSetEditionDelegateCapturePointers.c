/*
 * XREFs of ApiSetEditionDelegateCapturePointers @ 0x1C013DB44
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01102BC (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDelegateCapturePointers(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x94u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v3 = 0;
  if ( (int)IsEditionDelegateCapturePointersSupported() >= 0 )
    v3 = EditionDelegateCapturePointers(1LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x95u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v3;
}
