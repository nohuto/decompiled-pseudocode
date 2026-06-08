/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C0024CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C001A598)();
  if ( v0 < 0 )
  {
    v2 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
      v2);
  }
  return (unsigned int)v0;
}
