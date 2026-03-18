/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18022C5AC
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18022C3D0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180031784 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180158BD8 (_TlgCreateWsz.c)
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
  TraceLoggingHProvider v23; // r11
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  int v35; // [rsp+8Ch] [rbp-74h]
  int *v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+C0h] [rbp-40h] BYREF
  int *v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+E0h] [rbp-20h] BYREF
  int *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+100h] [rbp+0h] BYREF
  int *v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+118h] [rbp+18h]
  int v54; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF
  int *v57; // [rsp+140h] [rbp+40h]
  int v58; // [rsp+148h] [rbp+48h]
  int v59; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+160h] [rbp+60h] BYREF
  int *v62; // [rsp+170h] [rbp+70h]
  int v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+17Ch] [rbp+7Ch]
  int *v65; // [rsp+180h] [rbp+80h]
  int v66; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+190h] [rbp+90h] BYREF

  if ( **((_DWORD **)this + 1) > 2u )
  {
    v35 = 0;
    v38 = 0;
    v33 = &v31;
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v24 = v2;
    v36 = &v24;
    v31 = 0x1000000LL;
    v34 = 8;
    v37 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v42 = 0;
    v40 = v4 + 56;
    v41 = 4;
    TlgCreateSz(&v43, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v46 = 0;
    v25 = v7;
    v44 = &v25;
    v45 = 4;
    TlgCreateWsz(&v47, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v11 = *(const CHAR **)(v9 + 64);
    v50 = 0;
    v26 = v10;
    v48 = &v26;
    v49 = 4;
    TlgCreateSz(&v51, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v54 = 0;
    v27 = v13;
    v52 = &v27;
    v53 = 4;
    TlgCreateSz(&v55, v14);
    TlgCreateWsz(&v56, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v18 = *(const CHAR **)(v16 + 104);
    v59 = 0;
    v28 = v17;
    v57 = &v28;
    v58 = 4;
    TlgCreateSz(&v60, v18);
    TlgCreateWsz(&v61, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v64 = 0;
    v67 = 0;
    v22 = *(const CHAR **)(v20 + 40);
    v62 = &v29;
    v30 = *(_DWORD *)(v20 + 60);
    v29 = v21;
    v65 = &v30;
    v63 = 4;
    v66 = 4;
    TlgCreateSz(&v68, v22);
    TlgWrite(v23, &unk_1802DBFA5, 0LL, 0LL, 0x14u, &pData);
  }
}
