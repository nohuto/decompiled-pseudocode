/*
 * XREFs of DisplayKernelPerfStates @ 0x1C0003050
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000CF5C (InitLegacyPccInternal.c)
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000CA84 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall DisplayKernelPerfStates(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    HIDWORD(v5) = HIDWORD(a1);
    result = WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, a2, a3, 90);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v5) = *(unsigned __int16 *)(a1 + 4);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Bu,
               (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
               v5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 16);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Cu,
               (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
               v5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 20);
    result = WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0x5Du,
               (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
               v5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             2u,
             0x5Eu,
             (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  return result;
}
