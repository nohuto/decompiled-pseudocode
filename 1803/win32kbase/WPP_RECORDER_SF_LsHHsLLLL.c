/*
 * XREFs of WPP_RECORDER_SF_LsHHsLLLL @ 0x1C011FB9C
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsHHsLLLL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+28h] [rbp-99h]

  v10 = a10;
  v11 = a7;
  v12 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a10 + v14) );
    }
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
    }
    v16 = a7;
    if ( !a7 )
      v16 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
      283LL,
      &a6,
      4LL,
      v16);
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v10 + v17) );
  }
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
  }
  LOWORD(v19) = 283;
  return WppAutoLogTrace(a1, 4LL, 11LL, &WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids, v19, &a6);
}
