/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C0020420
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E230 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001EDD0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C004A2A0 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C004A4C0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = a9;
  v15 = -1LL;
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
      &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
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
  if ( v11 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v11 + v15) );
  }
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, 6LL, &WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids, v20, &a6);
}
