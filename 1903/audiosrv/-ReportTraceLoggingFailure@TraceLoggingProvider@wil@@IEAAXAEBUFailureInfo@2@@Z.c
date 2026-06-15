/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800BD6CC
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180044A40 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18003BAD8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
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
  int v10; // edx
  const CHAR *v11; // rdx
  __int64 v12; // r10
  int v13; // ecx
  const CHAR *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r10
  int v17; // edx
  const CHAR *v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r10
  int v21; // r9d
  const CHAR *v22; // rdx
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  TraceLoggingHProvider v25; // r11
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  int *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp-40h] BYREF
  int *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+E0h] [rbp-20h] BYREF
  int *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  int *v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  int *v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  int v61; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+160h] [rbp+60h] BYREF
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  int *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+190h] [rbp+90h] BYREF

  if ( **((_DWORD **)this + 1) > 2u )
  {
    v37 = 0;
    v40 = 0;
    v35 = &v33;
    v2 = *((_DWORD *)a2 + 1);
    v3 = (const CHAR *)*((_QWORD *)a2 + 6);
    v26 = v2;
    v38 = &v26;
    v33 = 0x1000000LL;
    v36 = 8;
    v39 = 4;
    TlgCreateSz(&pDesc, v3);
    v5 = *(const CHAR **)(v4 + 120);
    v44 = 0;
    v42 = v4 + 56;
    v43 = 4;
    TlgCreateSz(&v45, v5);
    v7 = *v6;
    v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
    v48 = 0;
    v27 = v7;
    v46 = &v27;
    v47 = 4;
    TlgCreateWsz(&v49, v8);
    v10 = *(_DWORD *)(v9 + 24);
    v52 = 0;
    v28 = v10;
    v11 = *(const CHAR **)(v9 + 64);
    v50 = &v28;
    v51 = 4;
    TlgCreateSz(&v53, v11);
    v13 = *(_DWORD *)(v12 + 72);
    v14 = *(const CHAR **)(v12 + 80);
    v56 = 0;
    v29 = v13;
    v54 = &v29;
    v55 = 4;
    TlgCreateSz(&v57, v14);
    TlgCreateWsz(&v58, *(LPCWSTR *)(v15 + 88));
    v17 = *(_DWORD *)(v16 + 96);
    v61 = 0;
    v30 = v17;
    v18 = *(const CHAR **)(v16 + 104);
    v59 = &v30;
    v60 = 4;
    TlgCreateSz(&v62, v18);
    TlgCreateWsz(&v63, *(LPCWSTR *)(v19 + 112));
    v21 = *(_DWORD *)(v20 + 8);
    v22 = *(const CHAR **)(v20 + 40);
    v64 = &v31;
    v32 = *(_DWORD *)(v20 + 60);
    v66 = &v32;
    v31 = v21;
    v65 = 4LL;
    v67 = 4LL;
    TlgCreateSz(&v68, v22);
    TlgWrite(v25, &unk_1801774FA, v23, v24, 0x14u, &pData);
  }
}
