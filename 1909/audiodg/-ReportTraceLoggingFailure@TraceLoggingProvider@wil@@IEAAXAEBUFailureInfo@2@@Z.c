/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14002B598
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x14002ACB0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x140014224 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1400143CC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002BFF8 (_TlgCreateSz.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // eax
  const CHAR *v3; // rdx
  __int64 v4; // r10
  const CHAR *v5; // rdx
  int *v6; // r10
  int v7; // ecx
  const WCHAR *v8; // rdx
  __int64 v9; // r10
  int v10; // ecx
  const CHAR *v11; // rdx
  __int64 v12; // r10
  int v13; // ecx
  const CHAR *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r10
  int v17; // ecx
  const CHAR *v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r10
  int v21; // ecx
  const CHAR *v22; // rdx
  LPCGUID v23; // r9
  TraceLoggingHProvider v24; // r11
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  int *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+C0h] [rbp-40h] BYREF
  int *v45; // [rsp+D0h] [rbp-30h]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+E0h] [rbp-20h] BYREF
  int *v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+100h] [rbp+0h] BYREF
  int *v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+130h] [rbp+30h] BYREF
  int *v58; // [rsp+140h] [rbp+40h]
  int v59; // [rsp+148h] [rbp+48h]
  int v60; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+160h] [rbp+60h] BYREF
  int *v63; // [rsp+170h] [rbp+70h]
  int v64; // [rsp+178h] [rbp+78h]
  int v65; // [rsp+17Ch] [rbp+7Ch]
  int *v66; // [rsp+180h] [rbp+80h]
  int v67; // [rsp+188h] [rbp+88h]
  int v68; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+190h] [rbp+90h] BYREF

  if ( **((_DWORD **)this + 1) > 2u )
  {
    v36 = 0;
    v39 = 0;
    v34 = &v32;
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v25 = v2;
    v37 = &v25;
    v32 = 0x1000000LL;
    v35 = 8;
    v38 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v43 = 0;
    v41 = v4 + 56;
    v42 = 4;
    TlgCreateSz(&v44, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v47 = 0;
    v26 = v7;
    v45 = &v26;
    v46 = 4;
    TlgCreateWsz(&v48, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(const CHAR **)(v9 + 64);
    v51 = 0;
    v27 = v10;
    v49 = &v27;
    v50 = 4;
    TlgCreateSz(&v52, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v55 = 0;
    v28 = v13;
    v53 = &v28;
    v54 = 4;
    TlgCreateSz(&v56, v14);
    TlgCreateWsz(&v57, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v18 = *(const CHAR **)(v16 + 104);
    v60 = 0;
    v29 = v17;
    v58 = &v29;
    v59 = 4;
    TlgCreateSz(&v61, v18);
    TlgCreateWsz(&v62, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v65 = 0;
    v68 = 0;
    v22 = *(const CHAR **)(v20 + 40);
    v63 = &v30;
    v31 = *(_DWORD *)(v20 + 60);
    v30 = v21;
    v66 = &v31;
    v64 = 4;
    v67 = 4;
    TlgCreateSz(&v69, v22);
    TlgWrite(v24, &unk_14006F842, 0LL, v23, 0x14u, &pData);
  }
}
