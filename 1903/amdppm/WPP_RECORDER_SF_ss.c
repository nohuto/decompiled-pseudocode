/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x1C0004860
 * Callers:
 *     AcpiParseCore @ 0x1C0025514 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        const char *a7)
{
  const char *v7; // rbp
  __int64 v8; // rbx
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  const char *v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-48h]

  v7 = "NULL";
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    if ( a6 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a6[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = "NULL";
    v15 = "NULL";
    if ( a7 )
      v14 = a7;
    if ( a6 )
      v15 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      68LL,
      v15,
      v13,
      v14,
      v11,
      0LL);
  }
  if ( a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a7[v16] );
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
  }
  if ( a6 )
    v7 = a6;
  LOWORD(v18) = 68;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids, v18, v7);
}
