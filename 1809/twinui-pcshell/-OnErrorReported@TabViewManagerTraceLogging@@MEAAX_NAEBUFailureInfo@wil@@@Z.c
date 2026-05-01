/*
 * XREFs of ?OnErrorReported@TabViewManagerTraceLogging@@MEAAX_NAEBUFailureInfo@wil@@@Z @ 0x1801DFDC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::OnErrorReported(
        TabViewManagerTraceLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  _QWORD *v4; // rax
  int v5; // eax
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  int v8; // r11d
  int v9; // ecx
  const WCHAR *v10; // rdx
  int v11; // r11d
  int v12; // ecx
  const CHAR *v13; // rdx
  int v14; // r11d
  int v15; // ecx
  const CHAR *v16; // rdx
  int v17; // r11d
  int v18; // ecx
  const CHAR *v19; // rdx
  int v20; // r11d
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
  char *v32; // [rsp+90h] [rbp-70h]
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

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 2u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x200000000000uLL) )
    {
      v5 = *((_DWORD *)a3 + 1);
      v6 = (const CHAR *)*((_QWORD *)a3 + 6);
      v30 = 0;
      v22 = v5;
      v28 = &v22;
      v29 = 4;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)a3 + 15);
      v34 = 0;
      v32 = (char *)a3 + 56;
      v33 = v8;
      TlgCreateSz(&v35, v7);
      v9 = *(_DWORD *)a3;
      v10 = (const WCHAR *)*((_QWORD *)a3 + 2);
      v38 = 0;
      v23 = v9;
      v36 = &v23;
      v37 = v11;
      TlgCreateWsz(&v39, v10);
      v12 = *((_DWORD *)a3 + 6);
      v13 = (const CHAR *)*((_QWORD *)a3 + 8);
      v42 = 0;
      v24 = v12;
      v40 = &v24;
      v41 = v14;
      TlgCreateSz(&v43, v13);
      v15 = *((_DWORD *)a3 + 18);
      v16 = (const CHAR *)*((_QWORD *)a3 + 10);
      v46 = 0;
      v25 = v15;
      v44 = &v25;
      v45 = v17;
      TlgCreateSz(&v47, v16);
      TlgCreateWsz(&v48, *((LPCWSTR *)a3 + 11));
      v18 = *((_DWORD *)a3 + 24);
      v19 = (const CHAR *)*((_QWORD *)a3 + 13);
      v51 = 0;
      v26 = v18;
      v49 = &v26;
      v50 = v20;
      TlgCreateSz(&v52, v19);
      TlgCreateWsz(&v53, *((LPCWSTR *)a3 + 14));
      TlgWrite(v21, &unk_18045A43B, 0LL, 0LL, 0x10u, &pData);
    }
  }
}
