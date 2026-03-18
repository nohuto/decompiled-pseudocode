/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1801E93F4
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1801E93C0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18014D554 (_TlgCreateWsz.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        TraceLoggingHProvider *this,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // r11
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
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp-60h] BYREF
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+C0h] [rbp-40h] BYREF
  int *v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  int v42; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+E0h] [rbp-20h] BYREF
  int *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF

  if ( *(_DWORD *)this[1] > 5u )
  {
    if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = *(const CHAR **)(v2 + 48);
      v30 = 0;
      v22 = v3;
      v28 = &v22;
      v29 = 4;
      TlgCreateSz(&pDesc, v4);
      v6 = *(const CHAR **)(v5 + 120);
      v34 = 0;
      v32 = v5 + 56;
      v33 = 4;
      TlgCreateSz(&v35, v6);
      v8 = *v7;
      v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v38 = 0;
      v23 = v8;
      v36 = &v23;
      v37 = 4;
      TlgCreateWsz(&v39, v9);
      v11 = *(_DWORD *)(v10 + 24);
      v12 = *(const CHAR **)(v10 + 64);
      v42 = 0;
      v24 = v11;
      v40 = &v24;
      v41 = 4;
      TlgCreateSz(&v43, v12);
      v14 = *(_DWORD *)(v13 + 72);
      v15 = *(const CHAR **)(v13 + 80);
      v46 = 0;
      v25 = v14;
      v44 = &v25;
      v45 = 4;
      TlgCreateSz(&v47, v15);
      TlgCreateWsz(&v48, *(LPCWSTR *)(v16 + 88));
      v18 = *(_DWORD *)(v17 + 96);
      v19 = *(const CHAR **)(v17 + 104);
      v51 = 0;
      v26 = v18;
      v49 = &v26;
      v50 = 4;
      TlgCreateSz(&v52, v19);
      TlgCreateWsz(&v53, *(LPCWSTR *)(v20 + 112));
      TlgWrite(v21, &unk_1802B6799, 0LL, 0LL, 0x10u, &pData);
    }
  }
}
