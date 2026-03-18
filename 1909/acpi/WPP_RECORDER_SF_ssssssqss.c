/*
 * XREFs of WPP_RECORDER_SF_ssssssqss @ 0x1C0014EA4
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0097350 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ssssssqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        const char *a7,
        const char *a8,
        const char *a9,
        const char *a10,
        const char *a11,
        char a12,
        const char *a13,
        const char *a14)
{
  __int64 v14; // rbx
  const char *v15; // rdi
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  const char *v23; // rdi
  __int64 v25; // rbp
  __int64 v26; // rbp
  const char *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  const char *v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdi
  const char *v33; // rax
  __int64 v34; // r11
  __int64 v35; // r11
  const char *v36; // r13
  __int64 v37; // r10
  __int64 v38; // r10
  const char *v39; // r12
  __int64 v40; // r9
  __int64 v41; // r9
  const char *v42; // r15
  __int64 v43; // r8
  __int64 v44; // r8
  const char *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rdx
  const char *v48; // rcx
  int v49; // [rsp+20h] [rbp-E8h]
  const char *v50; // [rsp+C0h] [rbp-48h]
  const char *v52; // [rsp+130h] [rbp+28h]

  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a14 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a14[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a14;
    if ( !a14 )
      v27 = "NULL";
    v52 = v27;
    if ( a13 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a13[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = a13;
    if ( !a13 )
      v30 = "NULL";
    v50 = v30;
    if ( a11 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a11[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 5LL;
    }
    v33 = a11;
    if ( !a11 )
      v33 = "NULL";
    if ( a10 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( a10[v34] );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 5LL;
    }
    v36 = a10;
    if ( !a10 )
      v36 = "NULL";
    if ( a9 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( a9[v37] );
      v38 = v37 + 1;
    }
    else
    {
      v38 = 5LL;
    }
    v39 = a9;
    if ( !a9 )
      v39 = "NULL";
    if ( a8 )
    {
      v40 = -1LL;
      do
        ++v40;
      while ( a8[v40] );
      v41 = v40 + 1;
    }
    else
    {
      v41 = 5LL;
    }
    v42 = a8;
    if ( !a8 )
      v42 = "NULL";
    if ( a7 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( a7[v43] );
      v44 = v43 + 1;
    }
    else
    {
      v44 = 5LL;
    }
    v45 = a7;
    if ( !a7 )
      v45 = "NULL";
    if ( a6 )
    {
      v46 = -1LL;
      do
        ++v46;
      while ( a6[v46] );
      v47 = v46 + 1;
    }
    else
    {
      v47 = 5LL;
    }
    v48 = a6;
    if ( !a6 )
      v48 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids,
      22LL,
      v48,
      v47,
      v45,
      v44,
      v42,
      v41,
      v39,
      v38,
      v36,
      v35,
      v33,
      v32,
      &a12,
      8LL,
      v50,
      v29,
      v52,
      v26,
      0LL);
  }
  v15 = a14;
  if ( a14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a14[v16] );
  }
  if ( !a14 )
    v15 = "NULL";
  a14 = v15;
  if ( a13 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a13[v17] );
  }
  if ( a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a11[v18] );
  }
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
  }
  if ( a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a9[v20] );
  }
  if ( a8 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a8[v21] );
  }
  if ( a7 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a7[v22] );
  }
  v23 = a6;
  if ( a6 )
  {
    do
      ++v14;
    while ( a6[v14] );
  }
  if ( !a6 )
    v23 = "NULL";
  LOWORD(v49) = 22;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_5ea0bed1d6f13f26cf29dd07beb1e62d_Traceguids, v49, v23);
}
