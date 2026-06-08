/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C001E6C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // eax
  unsigned int v1; // ebx
  int v3; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C00115E8)();
  v1 = v0;
  if ( v0 < 0 )
  {
    v3 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
      v3);
  }
  return v1;
}
