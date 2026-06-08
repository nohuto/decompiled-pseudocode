/*
 * XREFs of DisplayKernelIdleStates @ 0x1C0003AE0
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C00035A0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C000C950 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000CA84 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelIdleStates(__int64 a1, int a2, int a3)
{
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 95);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x60u,
                 (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x61u,
                 (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    for ( i = 0; i < *(_DWORD *)(a1 + 116); ++i )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = *(_DWORD *)(32LL * i + a1 + 120);
        result = WPP_RECORDER_SF_LLLLL(
                   WPP_GLOBAL_Control->DeviceExtension,
                   (v6 >> 1) & 1,
                   (v6 >> 2) & 1,
                   v6 >> 31,
                   v7,
                   i,
                   (v6 & 0x80000000) != 0,
                   v6 & 1,
                   (v6 & 2) != 0,
                   (v6 & 4) != 0);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x63u,
               (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  }
  return result;
}
