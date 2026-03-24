/*
 * XREFs of WPP_RECORDER_SF_qqsd @ 0x1C0005FE8
 * Callers:
 *     MouseClassPower @ 0x1C0002E00 (MouseClassPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001760 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqsd(
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
  int v13; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids,
      89LL,
      &a6,
      8LL,
      &a7);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
  }
  LOWORD(v13) = 89;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_d9f5ac7d7c0335f6aac6fbb5c55b59fb_Traceguids, v13, &a6, 8LL, &a7);
}
