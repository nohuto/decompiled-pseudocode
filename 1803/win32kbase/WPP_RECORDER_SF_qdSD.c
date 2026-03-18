/*
 * XREFs of WPP_RECORDER_SF_qdSD @ 0x1C00F7230
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C00F6718 (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdSD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-68h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a8 + 2 * v11) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
      11LL,
      &a6,
      8LL,
      &a7);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
  }
  LOWORD(v13) = 11;
  return WppAutoLogTrace(a1, 3LL, 21LL, &WPP_6f93d23ab5493b07c801fc1105033033_Traceguids, v13, &a6);
}
