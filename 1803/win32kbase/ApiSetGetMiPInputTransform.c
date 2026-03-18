/*
 * XREFs of ApiSetGetMiPInputTransform @ 0x1C01407FC
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x1C00B6EE0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetGetMiPInputTransform(__int64 a1, __int64 a2)
{
  unsigned int MiPInputTransform; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x70u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  MiPInputTransform = 0;
  if ( (int)IsGetMiPInputTransformSupported() >= 0 )
    MiPInputTransform = GetMiPInputTransform(a1, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x71u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return MiPInputTransform;
}
