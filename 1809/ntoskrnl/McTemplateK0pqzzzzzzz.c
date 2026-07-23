/*
 * XREFs of McTemplateK0pqzzzzzzz @ 0x140288E84
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqzzzzzzz(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  const wchar_t *v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  const wchar_t *v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  const wchar_t *v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  const wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r8d
  const wchar_t *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  const wchar_t *v23; // rcx
  int v24; // edx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-99h] BYREF
  va_list v27; // [rsp+40h] [rbp-89h]
  __int64 v28; // [rsp+48h] [rbp-81h]
  va_list v29; // [rsp+50h] [rbp-79h]
  __int64 v30; // [rsp+58h] [rbp-71h]
  const wchar_t *v31; // [rsp+60h] [rbp-69h]
  int v32; // [rsp+68h] [rbp-61h]
  int v33; // [rsp+6Ch] [rbp-5Dh]
  const wchar_t *v34; // [rsp+70h] [rbp-59h]
  int v35; // [rsp+78h] [rbp-51h]
  int v36; // [rsp+7Ch] [rbp-4Dh]
  const wchar_t *v37; // [rsp+80h] [rbp-49h]
  int v38; // [rsp+88h] [rbp-41h]
  int v39; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v40; // [rsp+90h] [rbp-39h]
  int v41; // [rsp+98h] [rbp-31h]
  int v42; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v43; // [rsp+A0h] [rbp-29h]
  int v44; // [rsp+A8h] [rbp-21h]
  int v45; // [rsp+ACh] [rbp-1Dh]
  const wchar_t *v46; // [rsp+B0h] [rbp-19h]
  int v47; // [rsp+B8h] [rbp-11h]
  int v48; // [rsp+BCh] [rbp-Dh]
  const wchar_t *v49; // [rsp+C0h] [rbp-9h]
  int v50; // [rsp+C8h] [rbp-1h]
  int v51; // [rsp+CCh] [rbp+3h]
  __int64 v52; // [rsp+108h] [rbp+3Fh] BYREF
  va_list va; // [rsp+108h] [rbp+3Fh]
  __int64 v54; // [rsp+110h] [rbp+47h] BYREF
  va_list va1; // [rsp+110h] [rbp+47h]
  const wchar_t *v56; // [rsp+118h] [rbp+4Fh]
  const wchar_t *v57; // [rsp+120h] [rbp+57h]
  const wchar_t *v58; // [rsp+128h] [rbp+5Fh]
  const wchar_t *v59; // [rsp+130h] [rbp+67h]
  const wchar_t *v60; // [rsp+138h] [rbp+6Fh]
  const wchar_t *v61; // [rsp+140h] [rbp+77h]
  const wchar_t *v62; // [rsp+148h] [rbp+7Fh]
  va_list va2; // [rsp+150h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v52 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v54 = va_arg(va2, _QWORD);
  v56 = va_arg(va2, const wchar_t *);
  v57 = va_arg(va2, const wchar_t *);
  v58 = va_arg(va2, const wchar_t *);
  v59 = va_arg(va2, const wchar_t *);
  v60 = va_arg(va2, const wchar_t *);
  v61 = va_arg(va2, const wchar_t *);
  v62 = va_arg(va2, const wchar_t *);
  v3 = v56;
  va_copy(v27, va);
  v28 = 8LL;
  va_copy(v29, va1);
  v5 = -1LL;
  v30 = 4LL;
  if ( v56 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v56[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v32 = v7;
  v33 = 0;
  if ( !v56 )
    v3 = L"NULL";
  v31 = v3;
  v8 = v57;
  if ( v57 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v57[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v35 = v10;
  v36 = 0;
  if ( !v57 )
    v8 = L"NULL";
  v34 = v8;
  v11 = v58;
  if ( v58 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v58[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  v38 = v13;
  v39 = 0;
  if ( !v58 )
    v11 = L"NULL";
  v37 = v11;
  v14 = v59;
  if ( v59 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v59[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v41 = v16;
  v42 = 0;
  if ( !v59 )
    v14 = L"NULL";
  v40 = v14;
  v17 = v60;
  if ( v60 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v60[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v44 = v19;
  v45 = 0;
  if ( !v60 )
    v17 = L"NULL";
  v43 = v17;
  v20 = v61;
  if ( v61 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v61[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v47 = v22;
  v48 = 0;
  if ( !v61 )
    v20 = L"NULL";
  v46 = v20;
  v23 = v62;
  if ( v62 )
  {
    do
      ++v5;
    while ( v62[v5] );
    v24 = 2 * v5 + 2;
  }
  else
  {
    v24 = 10;
  }
  v50 = v24;
  v51 = 0;
  if ( !v62 )
    v23 = L"NULL";
  v49 = v23;
  return McGenEventWrite(
           (PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context,
           &KMPnPEvt_DevQuery_QueryStart,
           a3,
           0xAu,
           &EventData);
}
