/*
 * XREFs of WPP_RECORDER_SF_sdqD @ 0x1C005C8D0
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0005C90 (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C4BC (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sdqD(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
      a4,
      v12,
      v11,
      va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids, v14, v6);
}
