/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C00FC300
 * Callers:
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-58h]

  v8 = a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(a8 + 2 * v12) );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a4,
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
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 3LL, 21LL, &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids, v14, &a6);
}
