/*
 * XREFs of ?ivRootDeliverTouchInput@CBaseInput@@MEAAJPEAX@Z @ 0x1C0156000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CBaseInput::ivRootDeliverTouchInput(CBaseInput *this, void *a2)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x10u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x11u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return 0LL;
}
