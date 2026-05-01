/*
 * XREFs of ?OnErrorReported@TabViewManagerTraceLogging@@MEAAX_NAEBUFailureInfo@wil@@@Z @ 0x1802332B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::OnErrorReported(
        TabViewManagerTraceLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  TraceLoggingHProvider *v4; // rax
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  int v7; // r11d
  int v8; // ecx
  const WCHAR *v9; // rdx
  int v10; // r11d
  int v11; // ecx
  const CHAR *v12; // rdx
  int v13; // r11d
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // r11d
  int v17; // ecx
  const CHAR *v18; // rdx
  int v19; // r11d
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
  char *v35; // [rsp+A0h] [rbp-60h]
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

  v4 = (TraceLoggingHProvider *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                  (__int64)this,
                                  (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 2u )
  {
    if ( TlgKeywordOn(v4[1], 0x200000000000uLL) )
    {
      v5 = (const CHAR *)*((_QWORD *)a3 + 6);
      v30 = 0;
      v33 = 0;
      v28 = &v26;
      v21 = *((_DWORD *)a3 + 1);
      v31 = &v21;
      v26 = 0x1000000LL;
      v29 = 8;
      v32 = 4;
      TlgCreateSz(&pDesc, v5);
      v6 = (const CHAR *)*((_QWORD *)a3 + 15);
      v37 = 0;
      v35 = (char *)a3 + 56;
      v36 = v7;
      TlgCreateSz(&v38, v6);
      v8 = *(_DWORD *)a3;
      v9 = (const WCHAR *)*((_QWORD *)a3 + 2);
      v41 = 0;
      v22 = v8;
      v39 = &v22;
      v40 = v10;
      TlgCreateWsz(&v42, v9);
      v11 = *((_DWORD *)a3 + 6);
      v12 = (const CHAR *)*((_QWORD *)a3 + 8);
      v45 = 0;
      v23 = v11;
      v43 = &v23;
      v44 = v13;
      TlgCreateSz(&v46, v12);
      v14 = *((_DWORD *)a3 + 18);
      v15 = (const CHAR *)*((_QWORD *)a3 + 10);
      v49 = 0;
      v24 = v14;
      v47 = &v24;
      v48 = v16;
      TlgCreateSz(&v50, v15);
      TlgCreateWsz(&v51, *((LPCWSTR *)a3 + 11));
      v17 = *((_DWORD *)a3 + 24);
      v18 = (const CHAR *)*((_QWORD *)a3 + 13);
      v54 = 0;
      v25 = v17;
      v52 = &v25;
      v53 = v19;
      TlgCreateSz(&v55, v18);
      TlgCreateWsz(&v56, *((LPCWSTR *)a3 + 14));
      TlgWrite(v20, &unk_1804B61C1, 0LL, 0LL, 0x11u, &pData);
    }
  }
}
