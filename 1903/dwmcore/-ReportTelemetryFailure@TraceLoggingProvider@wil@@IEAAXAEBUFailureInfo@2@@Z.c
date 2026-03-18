/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18022DB14
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18022DAE0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        TraceLoggingHProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r11
  const CHAR *v3; // rdx
  __int64 v4; // r11
  const CHAR *v5; // rdx
  int *v6; // r11
  int v7; // ecx
  const WCHAR *v8; // rdx
  __int64 v9; // r11
  int v10; // ecx
  const CHAR *v11; // rdx
  __int64 v12; // r11
  int v13; // ecx
  const CHAR *v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r11
  int v17; // ecx
  const CHAR *v18; // rdx
  __int64 v19; // r11
  TraceLoggingHProvider v20; // r10
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  int *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B0h] [rbp-50h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+D0h] [rbp-30h] BYREF
  int *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  int *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+120h] [rbp+20h] BYREF
  int *v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+150h] [rbp+50h] BYREF

  if ( *(_DWORD *)this[1] > 2u )
  {
    if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
    {
      v3 = *(const CHAR **)(v2 + 48);
      v30 = 0;
      v33 = 0;
      v28 = &v26;
      v21 = *(_DWORD *)(v2 + 4);
      v31 = &v21;
      v26 = 0x1000000LL;
      v29 = 8;
      v32 = 4;
      TlgCreateSz(&pDesc, v3);
      v5 = *(const CHAR **)(v4 + 120);
      v37 = 0;
      v35 = v4 + 56;
      v36 = 4;
      TlgCreateSz(&v38, v5);
      v7 = *v6;
      v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v41 = 0;
      v22 = v7;
      v39 = &v22;
      v40 = 4;
      TlgCreateWsz(&v42, v8);
      v10 = *(_DWORD *)(v9 + 24);
      v11 = *(const CHAR **)(v9 + 64);
      v45 = 0;
      v23 = v10;
      v43 = &v23;
      v44 = 4;
      TlgCreateSz(&v46, v11);
      v13 = *(_DWORD *)(v12 + 72);
      v14 = *(const CHAR **)(v12 + 80);
      v49 = 0;
      v24 = v13;
      v47 = &v24;
      v48 = 4;
      TlgCreateSz(&v50, v14);
      TlgCreateWsz(&v51, *(LPCWSTR *)(v15 + 88));
      v17 = *(_DWORD *)(v16 + 96);
      v18 = *(const CHAR **)(v16 + 104);
      v54 = 0;
      v25 = v17;
      v52 = &v25;
      v53 = 4;
      TlgCreateSz(&v55, v18);
      TlgCreateWsz(&v56, *(LPCWSTR *)(v19 + 112));
      TlgWrite(v20, &unk_1802DDD32, 0LL, 0LL, 0x11u, &pData);
    }
  }
}
