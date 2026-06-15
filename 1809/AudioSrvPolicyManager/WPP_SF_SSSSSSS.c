/*
 * XREFs of WPP_SF_SSSSSSS @ 0x18001B1E8
 * Callers:
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F520 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_SSSSSSS(
        TRACEHANDLE a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r14
  const wchar_t *v24; // r11
  const wchar_t *v25; // r10
  const wchar_t *v26; // r9
  const wchar_t *v27; // rcx
  const wchar_t *v28; // rax
  const wchar_t *v29; // r8
  const wchar_t *v30; // rdx
  __int64 v33; // [rsp+F0h] [rbp+18h]
  __int64 v34; // [rsp+118h] [rbp+40h]
  __int64 v35; // [rsp+120h] [rbp+48h]
  __int64 v36; // [rsp+128h] [rbp+50h]

  v12 = -1LL;
  v13 = 10LL;
  if ( a10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a10[v14] );
    v33 = 2 * v14 + 2;
  }
  else
  {
    v33 = 10LL;
  }
  if ( a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a9[v16] );
    v36 = 2 * v16 + 2;
  }
  else
  {
    v36 = 10LL;
  }
  if ( a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a8[v18] );
    v35 = 2 * v18 + 2;
  }
  else
  {
    v35 = 10LL;
  }
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v34 = 2 * v19 + 2;
  }
  else
  {
    v34 = 10LL;
  }
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10LL;
  }
  if ( a5 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a5[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10LL;
  }
  if ( a4 )
  {
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  v24 = L"NULL";
  v25 = L"NULL";
  v26 = L"NULL";
  if ( a10 )
    v25 = a10;
  v27 = L"NULL";
  v28 = L"NULL";
  if ( a9 )
    v26 = a9;
  v29 = L"NULL";
  if ( a8 )
    v29 = a8;
  v30 = L"NULL";
  if ( a7 )
    v30 = a7;
  if ( a6 )
    v27 = a6;
  if ( a5 )
    v28 = a5;
  if ( a4 )
    v24 = a4;
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids,
           0x2Au,
           v24,
           v13,
           v28,
           v23,
           v27,
           v21,
           v30,
           v34,
           v29,
           v35,
           v26,
           v36,
           v25,
           v33,
           0LL);
}
