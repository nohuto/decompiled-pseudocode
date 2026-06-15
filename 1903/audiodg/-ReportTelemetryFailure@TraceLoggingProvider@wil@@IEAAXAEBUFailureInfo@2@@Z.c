/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x14002B4B0
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x14002AD70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14001415C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x14002C0B8 (_TlgCreateSz.c)
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
  LPCGUID v20; // r9
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

  if ( *(_DWORD *)this[1] > 2u )
  {
    if ( TlgKeywordOn(this[1], 0x200000000000uLL) )
    {
      v3 = *(const CHAR **)(v2 + 48);
      v31 = 0;
      v34 = 0;
      v29 = &v27;
      v22 = *(_DWORD *)(v2 + 4);
      v32 = &v22;
      v27 = 0x1000000LL;
      v30 = 8;
      v33 = 4;
      TlgCreateSz(&pDesc, v3);
      v5 = *(const CHAR **)(v4 + 120);
      v38 = 0;
      v36 = v4 + 56;
      v37 = 4;
      TlgCreateSz(&v39, v5);
      v7 = *v6;
      v8 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v42 = 0;
      v23 = v7;
      v40 = &v23;
      v41 = 4;
      TlgCreateWsz(&v43, v8);
      v10 = *(_DWORD *)(v9 + 24);
      v11 = *(const CHAR **)(v9 + 64);
      v46 = 0;
      v24 = v10;
      v44 = &v24;
      v45 = 4;
      TlgCreateSz(&v47, v11);
      v13 = *(_DWORD *)(v12 + 72);
      v14 = *(const CHAR **)(v12 + 80);
      v50 = 0;
      v25 = v13;
      v48 = &v25;
      v49 = 4;
      TlgCreateSz(&v51, v14);
      TlgCreateWsz(&v52, *(LPCWSTR *)(v15 + 88));
      v17 = *(_DWORD *)(v16 + 96);
      v18 = *(const CHAR **)(v16 + 104);
      v55 = 0;
      v26 = v17;
      v53 = &v26;
      v54 = 4;
      TlgCreateSz(&v56, v18);
      TlgCreateWsz(&v57, *(LPCWSTR *)(v19 + 112));
      TlgWrite(v21, &unk_14006F749, 0LL, v20, 0x11u, &pData);
    }
  }
}
