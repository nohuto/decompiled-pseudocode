/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C0051C8C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C002E520 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-48h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(a8 + v11) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      60LL,
      &a6,
      4LL,
      &a7);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v13) = 60;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_16ea8f8368aa31d784935a69de07acde_Traceguids, v13, &a6);
}
