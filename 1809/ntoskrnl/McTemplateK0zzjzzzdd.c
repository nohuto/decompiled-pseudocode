/*
 * XREFs of McTemplateK0zzjzzzdd @ 0x14015D354
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x1406F4938 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     McGenEventWrite @ 0x14015D7C0 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zzjzzzdd(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        char a11)
{
  __int64 v11; // rcx
  int v13; // edx
  __int64 v14; // rax
  int v15; // r8d
  const wchar_t *v16; // rax
  __int64 v17; // r8
  int v18; // r9d
  const wchar_t *v19; // rax
  __int64 v20; // r8
  int v21; // r9d
  const wchar_t *v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  const wchar_t *v25; // rax
  bool v26; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v29; // [rsp+40h] [rbp-71h]
  int v30; // [rsp+48h] [rbp-69h]
  int v31; // [rsp+4Ch] [rbp-65h]
  const wchar_t *v32; // [rsp+50h] [rbp-61h]
  int v33; // [rsp+58h] [rbp-59h]
  int v34; // [rsp+5Ch] [rbp-55h]
  __int64 v35; // [rsp+60h] [rbp-51h]
  __int64 v36; // [rsp+68h] [rbp-49h]
  const wchar_t *v37; // [rsp+70h] [rbp-41h]
  int v38; // [rsp+78h] [rbp-39h]
  int v39; // [rsp+7Ch] [rbp-35h]
  const wchar_t *v40; // [rsp+80h] [rbp-31h]
  int v41; // [rsp+88h] [rbp-29h]
  int v42; // [rsp+8Ch] [rbp-25h]
  const wchar_t *v43; // [rsp+90h] [rbp-21h]
  int v44; // [rsp+98h] [rbp-19h]
  int v45; // [rsp+9Ch] [rbp-15h]
  char *v46; // [rsp+A0h] [rbp-11h]
  __int64 v47; // [rsp+A8h] [rbp-9h]
  char *v48; // [rsp+B0h] [rbp-1h]
  __int64 v49; // [rsp+B8h] [rbp+7h]

  v11 = -1LL;
  v13 = 10;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v16 = a5;
  v30 = v15;
  v31 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v29 = a4;
  if ( a5 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a5[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v33 = v18;
  v34 = 0;
  if ( !a5 )
    v16 = L"NULL";
  v36 = 16LL;
  v32 = v16;
  v35 = a6;
  v19 = a7;
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v38 = v21;
  v39 = 0;
  if ( !a7 )
    v19 = L"NULL";
  v37 = v19;
  v22 = a8;
  if ( a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a8[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v41 = v24;
  v42 = 0;
  if ( !a8 )
    v22 = L"NULL";
  v40 = v22;
  v25 = a9;
  v26 = a9 == 0LL;
  if ( a9 )
  {
    do
      ++v11;
    while ( a9[v11] );
    v13 = 2 * v11 + 2;
    v26 = a9 == 0LL;
  }
  if ( v26 )
    v25 = L"NULL";
  v44 = v13;
  v43 = v25;
  v45 = 0;
  v46 = &a10;
  v47 = 4LL;
  v48 = &a11;
  v49 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context, a2, 0LL, 9u, &EventData);
}
