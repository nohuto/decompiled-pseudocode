/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x1C0162F08
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0145EF0 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x3Eu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionPostInertiaMessageSupported() >= 0 )
    v3 = EditionPostInertiaMessage(a1, a2, 572LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x3Fu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v3;
}
