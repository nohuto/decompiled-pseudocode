/*
 * XREFs of DisplayKernelIdleStates @ 0x1C00091D4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001EB0 (RegisterKernelIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LLLLL @ 0x1C00083C0 (WPP_RECORDER_SF_LLLLL.c)
 *     WPP_RECORDER_SF_q @ 0x1C00084F4 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall DisplayKernelIdleStates(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned int i; // edi
  unsigned int v6; // r9d
  int v7; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_q((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Fu, v7);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              5u,
                              2u,
                              0x60u,
                              (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_(
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
        result = (_UNKNOWN **)WPP_RECORDER_SF_LLLLL(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                (v6 >> 1) & 1,
                                (v6 >> 2) & 1,
                                v6 >> 31,
                                v7);
      }
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            5u,
                            2u,
                            0x63u,
                            (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  }
  return result;
}
