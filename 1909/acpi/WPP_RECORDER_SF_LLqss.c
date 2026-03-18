/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C00174D8
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0014C50 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C00159C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C004B970 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C004BBB0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v16; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a10 + v18) );
    }
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_BYTE *)(a9 + v19) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      a4,
      &a6,
      4LL,
      &a7);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v10 + v16) );
  }
  if ( v12 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v12 + v11) );
  }
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, 6LL, &WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids, v20, &a6);
}
