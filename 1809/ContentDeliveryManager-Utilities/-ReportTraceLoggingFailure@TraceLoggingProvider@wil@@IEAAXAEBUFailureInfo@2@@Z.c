/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180006714
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180006440 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18001FC40 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  const struct _TlgProvider_t *v2; // r11
  const unsigned __int16 *v3; // r9
  const unsigned __int16 *v4; // rcx
  __int64 v5; // rax
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // r8
  const WCHAR *v9; // rcx
  const WCHAR *v10; // r10
  const WCHAR *v11; // r8
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // r8
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // r8
  const WCHAR *v20; // rcx
  const unsigned __int16 *v21; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v32; // [rsp+88h] [rbp-80h]
  int v33; // [rsp+90h] [rbp-78h]
  int v34; // [rsp+94h] [rbp-74h]
  char *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  int *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  const WCHAR *v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  int *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v47; // [rsp+E8h] [rbp-20h]
  int v48; // [rsp+F0h] [rbp-18h]
  int v49; // [rsp+F4h] [rbp-14h]
  int *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v52; // [rsp+108h] [rbp+0h]
  int v53; // [rsp+110h] [rbp+8h]
  int v54; // [rsp+114h] [rbp+Ch]
  const WCHAR *v55; // [rsp+118h] [rbp+10h]
  int v56; // [rsp+120h] [rbp+18h]
  int v57; // [rsp+124h] [rbp+1Ch]
  int *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v60; // [rsp+138h] [rbp+30h]
  int v61; // [rsp+140h] [rbp+38h]
  int v62; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v63; // [rsp+148h] [rbp+40h]
  int v64; // [rsp+150h] [rbp+48h]
  int v65; // [rsp+154h] [rbp+4Ch]
  int *v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+160h] [rbp+58h]
  int *v68; // [rsp+168h] [rbp+60h]
  __int64 v69; // [rsp+170h] [rbp+68h]
  const unsigned __int16 *v70; // [rsp+178h] [rbp+70h]
  int v71; // [rsp+180h] [rbp+78h]
  int v72; // [rsp+184h] [rbp+7Ch]

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = &word_1800F8406;
    v4 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v22 = *((_DWORD *)a2 + 1);
    v31 = 4LL;
    v30 = &v22;
    LODWORD(v5) = 0;
    v6 = &word_1800F8406;
    if ( v4 )
    {
      v6 = v4;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v4 + v5) );
    }
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v33 = v5 + 1;
    v35 = (char *)a2 + 56;
    LODWORD(v5) = 0;
    v32 = v6;
    v8 = &word_1800F8406;
    v34 = 0;
    v36 = 4LL;
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
    v37 = v8;
    v38 = v5 + 1;
    v11 = &Src;
    v23 = *(_DWORD *)a2;
    v40 = &v23;
    LODWORD(v5) = 0;
    v39 = 0;
    v41 = 4LL;
    if ( v9 )
    {
      v11 = v9;
      v5 = -1LL;
      do
        ++v5;
      while ( v9[v5] );
    }
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v43 = 2 * v5 + 2;
    v24 = *((_DWORD *)a2 + 6);
    v45 = &v24;
    LODWORD(v5) = 0;
    v42 = v11;
    v13 = &word_1800F8406;
    v44 = 0;
    v46 = 4LL;
    if ( v12 )
    {
      v13 = v12;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v12 + v5) );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v48 = v5 + 1;
    v25 = *((_DWORD *)a2 + 18);
    v50 = &v25;
    LODWORD(v5) = 0;
    v47 = v13;
    v15 = &word_1800F8406;
    v49 = 0;
    v51 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v14 + v5) );
    }
    v16 = (const WCHAR *)*((_QWORD *)a2 + 11);
    v53 = v5 + 1;
    LODWORD(v5) = 0;
    v52 = v15;
    v17 = &Src;
    v54 = 0;
    if ( v16 )
    {
      v17 = v16;
      v5 = -1LL;
      do
        ++v5;
      while ( v16[v5] );
    }
    v18 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v56 = 2 * v5 + 2;
    v26 = *((_DWORD *)a2 + 24);
    v58 = &v26;
    LODWORD(v5) = 0;
    v55 = v17;
    v19 = &word_1800F8406;
    v57 = 0;
    v59 = 4LL;
    if ( v18 )
    {
      v19 = v18;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v18 + v5) );
    }
    v20 = (const WCHAR *)*((_QWORD *)a2 + 14);
    v61 = v5 + 1;
    LODWORD(v5) = 0;
    v60 = v19;
    v62 = 0;
    if ( v20 )
    {
      v10 = v20;
      v5 = -1LL;
      do
        ++v5;
      while ( v20[v5] );
    }
    v21 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v64 = 2 * v5 + 2;
    v27 = *((_DWORD *)a2 + 2);
    v66 = &v27;
    v28 = *((_DWORD *)a2 + 15);
    v68 = &v28;
    LODWORD(v5) = 0;
    v63 = v10;
    v65 = 0;
    v67 = 4LL;
    v69 = 4LL;
    if ( v21 )
    {
      v3 = v21;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v21 + v5) );
    }
    v70 = v3;
    v71 = v5 + 1;
    v72 = 0;
    TlgWrite(v2, &unk_180161B5D, 0LL, 0LL, 0x13u, &pData);
  }
}
