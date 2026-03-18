/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x1C0020270
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C0028D34 (ACPIIsPowerRequestBlocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        int a10,
        char a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  const char *v24; // rcx
  int v25; // [rsp+20h] [rbp-B8h]

  v13 = -1LL;
  v14 = a13;
  v16 = a12;
  v17 = (__int64)a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_BYTE *)(a13 + v21) );
    }
    if ( a12 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(v22 + a12) );
    }
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
    }
    v24 = a7;
    if ( !a7 )
      v24 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      48LL,
      &a6,
      8LL,
      v24);
  }
  if ( v14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v14 + v18) );
  }
  if ( v16 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v19 + v16) );
  }
  if ( v17 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v17 + v13) );
  }
  LOWORD(v25) = 48;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids, v25, &a6);
}
