/*
 * XREFs of WPP_RECORDER_SF_dds @ 0x1C000B434
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C002F8F0 (ValidatePerfDomainSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002FED4 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002FFCC (ValidatePepPerformanceSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const char *a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rdx
  const char *v13; // rcx
  int v15; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    v13 = "NULL";
    if ( a8 )
      v13 = a8;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      v13);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_885f9b737e553b3972faa1b865470758_Traceguids, v15, &a6);
}
