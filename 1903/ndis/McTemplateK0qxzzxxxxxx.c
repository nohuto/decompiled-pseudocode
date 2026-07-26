/*
 * XREFs of McTemplateK0qxzzxxxxxx @ 0x1C00BDC20
 * Callers:
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD3C8 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C006170C (McGenEventWrite.c)
 */

ULONG __fastcall McTemplateK0qxzzxxxxxx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rax
  bool v20; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-B1h] BYREF
  int *v23; // [rsp+40h] [rbp-A1h]
  __int64 v24; // [rsp+48h] [rbp-99h]
  char *v25; // [rsp+50h] [rbp-91h]
  __int64 v26; // [rsp+58h] [rbp-89h]
  const wchar_t *v27; // [rsp+60h] [rbp-81h]
  int v28; // [rsp+68h] [rbp-79h]
  int v29; // [rsp+6Ch] [rbp-75h]
  const wchar_t *v30; // [rsp+70h] [rbp-71h]
  int v31; // [rsp+78h] [rbp-69h]
  int v32; // [rsp+7Ch] [rbp-65h]
  char *v33; // [rsp+80h] [rbp-61h]
  __int64 v34; // [rsp+88h] [rbp-59h]
  char *v35; // [rsp+90h] [rbp-51h]
  __int64 v36; // [rsp+98h] [rbp-49h]
  char *v37; // [rsp+A0h] [rbp-41h]
  __int64 v38; // [rsp+A8h] [rbp-39h]
  char *v39; // [rsp+B0h] [rbp-31h]
  __int64 v40; // [rsp+B8h] [rbp-29h]
  char *v41; // [rsp+C0h] [rbp-21h]
  __int64 v42; // [rsp+C8h] [rbp-19h]
  char *v43; // [rsp+D0h] [rbp-11h]
  __int64 v44; // [rsp+D8h] [rbp-9h]
  int v45; // [rsp+118h] [rbp+37h] BYREF

  v45 = a4;
  v24 = 4LL;
  v23 = &v45;
  v26 = 8LL;
  v25 = &a5;
  v13 = -1LL;
  v14 = a6;
  v16 = 10;
  if ( a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a6[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v28 = v18;
  v29 = 0;
  if ( !a6 )
    v14 = L"NULL";
  v27 = v14;
  v19 = a7;
  v20 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v13;
    while ( a7[v13] );
    v16 = 2 * v13 + 2;
    v20 = a7 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v31 = v16;
  v30 = v19;
  v32 = 0;
  v33 = &a8;
  v34 = 8LL;
  v35 = &a9;
  v36 = 8LL;
  v37 = &a10;
  v38 = 8LL;
  v39 = &a11;
  v41 = &a12;
  v43 = &a13;
  v40 = 8LL;
  v42 = 8LL;
  v44 = 8LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&NDIS_PROVIDER_ID_Context, &MiniportCsTraffic, a3, 0xBu, &EventData);
}
