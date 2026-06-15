/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140032278
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x140031E40 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140019440 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140019808 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1400329B8 (_TlgCreateSz.c)
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
  LPCGUID v21; // r9
  TraceLoggingHProvider v22; // r10
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A0h] [rbp-60h] BYREF
  int *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp-40h] BYREF
  int *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  int *v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F8h] [rbp-8h]
  int v47; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+110h] [rbp+10h] BYREF
  int *v50; // [rsp+120h] [rbp+20h]
  int v51; // [rsp+128h] [rbp+28h]
  int v52; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+140h] [rbp+40h] BYREF

  if ( *(_DWORD *)this[1] > 5u )
  {
    if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
    {
      v3 = *(_DWORD *)(v2 + 4);
      v4 = *(const CHAR **)(v2 + 48);
      v31 = 0;
      v23 = v3;
      v29 = &v23;
      v30 = 4;
      TlgCreateSz(&pDesc, v4);
      v6 = *(const CHAR **)(v5 + 120);
      v35 = 0;
      v33 = v5 + 56;
      v34 = 4;
      TlgCreateSz(&v36, v6);
      v8 = *v7;
      v9 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v39 = 0;
      v24 = v8;
      v37 = &v24;
      v38 = 4;
      TlgCreateWsz(&v40, v9);
      v11 = *(_DWORD *)(v10 + 24);
      v12 = *(const CHAR **)(v10 + 64);
      v43 = 0;
      v25 = v11;
      v41 = &v25;
      v42 = 4;
      TlgCreateSz(&v44, v12);
      v14 = *(_DWORD *)(v13 + 72);
      v15 = *(const CHAR **)(v13 + 80);
      v47 = 0;
      v26 = v14;
      v45 = &v26;
      v46 = 4;
      TlgCreateSz(&v48, v15);
      TlgCreateWsz(&v49, *(LPCWSTR *)(v16 + 88));
      v18 = *(_DWORD *)(v17 + 96);
      v19 = *(const CHAR **)(v17 + 104);
      v52 = 0;
      v27 = v18;
      v50 = &v27;
      v51 = 4;
      TlgCreateSz(&v53, v19);
      TlgCreateWsz(&v54, *(LPCWSTR *)(v20 + 112));
      TlgWrite(v22, &unk_140071C91, 0LL, v21, 0x10u, &pData);
    }
  }
}
