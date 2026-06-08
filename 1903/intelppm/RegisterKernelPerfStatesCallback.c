/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x1C0025730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1C001B5A8)();
  if ( v0 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Fu,
      (__int64)&WPP_ef5cd4b0386b38340601fad61b1f2a0b_Traceguids,
      v2);
  }
  return (unsigned int)v0;
}
