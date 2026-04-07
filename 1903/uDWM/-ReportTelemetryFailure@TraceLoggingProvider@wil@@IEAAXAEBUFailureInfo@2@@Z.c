/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180079EC4
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180079CB0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000AA7C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007A828 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007A860 (_TlgCreateWsz.c)
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
  int v11; // ecx
  const CHAR *v12; // rdx
  __int64 v13; // r11
  int v14; // ecx
  const CHAR *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r11
  int v18; // ecx
  const CHAR *v19; // rdx
  __int64 v20; // r11
  TraceLoggingHProvider v21; // r10
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  int *v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B0h] [rbp-50h] BYREF
  int *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D0h] [rbp-30h] BYREF
  int *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+F0h] [rbp-10h] BYREF
  int *v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF
  int *v53; // [rsp+130h] [rbp+30h]
  int v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+150h] [rbp+50h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v31 = 0;
    v34 = 0;
    v29 = &v27;
    v3 = *((_DWORD *)a2 + 1);
    v4 = (const CHAR *)*((_QWORD *)a2 + 6);
    v22 = v3;
    v32 = &v22;
    v27 = 0x1000000LL;
    v30 = 8;
    v33 = 4;
    TlgCreateSz(&pDesc, v4);
    v6 = *(const CHAR **)(v5 + 120);
    v38 = 0;
    v36 = v5 + 56;
    v37 = 4;
    TlgCreateSz(&v39, v6);
    v8 = *v7;
    v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
    v42 = 0;
    v23 = v8;
    v40 = &v23;
    v41 = 4;
    TlgCreateWsz(&v43, v9);
    v11 = *(_DWORD *)(v10 + 24);
    v12 = *(const CHAR **)(v10 + 64);
    v46 = 0;
    v24 = v11;
    v44 = &v24;
    v45 = 4;
    TlgCreateSz(&v47, v12);
    v14 = *(_DWORD *)(v13 + 72);
    v15 = *(const CHAR **)(v13 + 80);
    v50 = 0;
    v25 = v14;
    v48 = &v25;
    v49 = 4;
    TlgCreateSz(&v51, v15);
    TlgCreateWsz(&v52, *(LPCWSTR *)(v16 + 88));
    v18 = *(_DWORD *)(v17 + 96);
    v19 = *(const CHAR **)(v17 + 104);
    v55 = 0;
    v26 = v18;
    v53 = &v26;
    v54 = 4;
    TlgCreateSz(&v56, v19);
    TlgCreateWsz(&v57, *(LPCWSTR *)(v20 + 112));
    TlgWrite(v21, &unk_1800C7A33, 0LL, 0LL, 0x11u, &pData);
  }
}
