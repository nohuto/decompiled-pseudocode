/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006774
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180006740 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180020290 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  const struct _TlgProvider_t *v2; // r10
  const unsigned __int16 *v3; // rcx
  const unsigned __int16 *v4; // r9
  __int64 v5; // rax
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // r8
  const WCHAR *v9; // rcx
  const WCHAR *v10; // r11
  const WCHAR *v11; // r8
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // r8
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rcx
  const WCHAR *v19; // rcx
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  int *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  char *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  const WCHAR *v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E4h] [rbp-24h]
  int *v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  int v48; // [rsp+104h] [rbp-4h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v51; // [rsp+118h] [rbp+10h]
  int v52; // [rsp+120h] [rbp+18h]
  int v53; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v54; // [rsp+128h] [rbp+20h]
  int v55; // [rsp+130h] [rbp+28h]
  int v56; // [rsp+134h] [rbp+2Ch]
  __int64 *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v59; // [rsp+148h] [rbp+40h]
  int v60; // [rsp+150h] [rbp+48h]
  int v61; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v62; // [rsp+158h] [rbp+50h]
  int v63; // [rsp+160h] [rbp+58h]
  int v64; // [rsp+164h] [rbp+5Ch]

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u
    && (*((_QWORD *)v2 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200000000000LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v27 = &v25;
    v4 = &word_1800FD7D0;
    v20 = *((_DWORD *)a2 + 1);
    v25 = 0x1000000LL;
    v29 = &v20;
    LODWORD(v5) = 0;
    v28 = 8LL;
    v6 = &word_1800FD7D0;
    v30 = 4LL;
    if ( v3 )
    {
      v6 = v3;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v3 + v5) );
    }
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v32 = v5 + 1;
    v34 = (char *)a2 + 56;
    LODWORD(v5) = 0;
    v31 = v6;
    v8 = &word_1800FD7D0;
    v33 = 0;
    v35 = 4LL;
    if ( v7 )
    {
      v8 = v7;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v7 + v5) );
    }
    v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v10 = &Src;
    v36 = v8;
    v37 = v5 + 1;
    v11 = &Src;
    v21 = *(_DWORD *)a2;
    v39 = &v21;
    LODWORD(v5) = 0;
    v38 = 0;
    v40 = 4LL;
    if ( v9 )
    {
      v11 = v9;
      v5 = -1LL;
      do
        ++v5;
      while ( v9[v5] );
    }
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v42 = 2 * v5 + 2;
    v22 = *((_DWORD *)a2 + 6);
    v44 = &v22;
    LODWORD(v5) = 0;
    v41 = v11;
    v13 = &word_1800FD7D0;
    v43 = 0;
    v45 = 4LL;
    if ( v12 )
    {
      v13 = v12;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v12 + v5) );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v47 = v5 + 1;
    v23 = *((_DWORD *)a2 + 18);
    v49 = &v23;
    LODWORD(v5) = 0;
    v46 = v13;
    v15 = &word_1800FD7D0;
    v48 = 0;
    v50 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v14 + v5) );
    }
    v16 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v52 = v5 + 1;
    LODWORD(v5) = 0;
    v51 = v15;
    v17 = &Src;
    v53 = 0;
    if ( v16 )
    {
      v17 = v16;
      v5 = -1LL;
      do
        ++v5;
      while ( v16[v5] );
    }
    v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v55 = 2 * v5 + 2;
    LODWORD(v24) = *((_DWORD *)a2 + 24);
    v57 = &v24;
    LODWORD(v5) = 0;
    v54 = v17;
    v56 = 0;
    v58 = 4LL;
    if ( v18 )
    {
      v4 = v18;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v18 + v5) );
    }
    v19 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v60 = v5 + 1;
    LODWORD(v5) = 0;
    v59 = v4;
    v61 = 0;
    if ( v19 )
    {
      v10 = v19;
      v5 = -1LL;
      do
        ++v5;
      while ( v19[v5] );
    }
    v62 = v10;
    v63 = 2 * v5 + 2;
    v64 = 0;
    TlgWrite(v2, &unk_18016AFFE, 0LL, 0LL, 0x11u, &pData);
  }
}
