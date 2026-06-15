/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180048FB8
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180048F90 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18003FD98 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r10
  int v3; // eax
  const CHAR *v4; // rdx
  __int64 v5; // r11
  const CHAR *v6; // rdx
  int *v7; // r11
  int v8; // ecx
  const WCHAR *v9; // rdx
  __int64 v10; // r11
  int v11; // edx
  const CHAR *v12; // rdx
  __int64 v13; // r11
  int v14; // ecx
  const CHAR *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r11
  int v18; // r9d
  const CHAR *v19; // rdx
  __int64 v20; // r11
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  TraceLoggingHProvider v23; // r10
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  int *v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D0h] [rbp-30h] BYREF
  int *v46; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+F0h] [rbp-10h] BYREF
  int *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+120h] [rbp+20h] BYREF
  int *v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+150h] [rbp+50h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v33 = 0;
    v36 = 0;
    v31 = &v29;
    v3 = *((_DWORD *)a2 + 1);
    v4 = (const CHAR *)*((_QWORD *)a2 + 6);
    v24 = v3;
    v34 = &v24;
    v29 = 0x1000000LL;
    v32 = 8;
    v35 = 4;
    TlgCreateSz(&pDesc, v4);
    v6 = *(const CHAR **)(v5 + 120);
    v40 = 0;
    v38 = v5 + 56;
    v39 = 4;
    TlgCreateSz(&v41, v6);
    v8 = *v7;
    v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
    v44 = 0;
    v25 = v8;
    v42 = &v25;
    v43 = 4;
    TlgCreateWsz(&v45, v9);
    v11 = *(_DWORD *)(v10 + 24);
    v48 = 0;
    v26 = v11;
    v12 = *(const CHAR **)(v10 + 64);
    v46 = &v26;
    v47 = 4;
    TlgCreateSz(&v49, v12);
    v14 = *(_DWORD *)(v13 + 72);
    v15 = *(const CHAR **)(v13 + 80);
    v52 = 0;
    v27 = v14;
    v50 = &v27;
    v51 = 4;
    TlgCreateSz(&v53, v15);
    TlgCreateWsz(&v54, *(LPCWSTR *)(v16 + 88));
    v18 = *(_DWORD *)(v17 + 96);
    v19 = *(const CHAR **)(v17 + 104);
    v57 = 0;
    v55 = &v28;
    v28 = v18;
    v56 = 4;
    TlgCreateSz(&v58, v19);
    TlgCreateWsz(&v59, *(LPCWSTR *)(v20 + 112));
    TlgWrite(v23, &unk_1801763C7, v21, v22, 0x11u, &pData);
  }
}
