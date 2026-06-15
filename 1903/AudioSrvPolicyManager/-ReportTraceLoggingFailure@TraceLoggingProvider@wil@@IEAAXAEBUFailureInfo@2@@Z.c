/*
 * XREFs of ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800045A8
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800042C0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  const struct _TlgProvider_t *v2; // r11
  const unsigned __int16 *v3; // rcx
  const GUID *v4; // r9
  __int64 v5; // rax
  const unsigned __int16 *v6; // r8
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // r10
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // r8
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // r8
  const GUID *v18; // rcx
  const GUID *v19; // r8
  const unsigned __int16 *v20; // rcx
  const GUID *v21; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  int *v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  char *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  const unsigned __int16 *v40; // [rsp+C8h] [rbp-40h]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+F0h] [rbp-18h]
  int v47; // [rsp+F4h] [rbp-14h]
  int *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+114h] [rbp+Ch]
  int *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  const unsigned __int16 *v55; // [rsp+128h] [rbp+20h]
  int v56; // [rsp+130h] [rbp+28h]
  int v57; // [rsp+134h] [rbp+2Ch]
  const unsigned __int16 *v58; // [rsp+138h] [rbp+30h]
  int v59; // [rsp+140h] [rbp+38h]
  int v60; // [rsp+144h] [rbp+3Ch]
  int *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  const GUID *v63; // [rsp+158h] [rbp+50h]
  int v64; // [rsp+160h] [rbp+58h]
  int v65; // [rsp+164h] [rbp+5Ch]
  const unsigned __int16 *v66; // [rsp+168h] [rbp+60h]
  int v67; // [rsp+170h] [rbp+68h]
  int v68; // [rsp+174h] [rbp+6Ch]
  int *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  __int64 *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]
  const GUID *v73; // [rsp+198h] [rbp+90h]
  int v74; // [rsp+1A0h] [rbp+98h]
  int v75; // [rsp+1A4h] [rbp+9Ch]

  v2 = (const struct _TlgProvider_t *)*((_QWORD *)this + 1);
  if ( *(_DWORD *)v2 > 2u )
  {
    v3 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v31 = &v29;
    v4 = (const GUID *)&word_18003CB68;
    v22 = *((_DWORD *)a2 + 1);
    v29 = 0x1000000LL;
    v33 = &v22;
    LODWORD(v5) = 0;
    v32 = 8LL;
    v6 = &word_18003CB68;
    v34 = 4LL;
    if ( v3 )
    {
      v6 = v3;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v3 + v5) );
    }
    v7 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v36 = v5 + 1;
    v38 = (char *)a2 + 56;
    LODWORD(v5) = 0;
    v35 = v6;
    v8 = &word_18003CB68;
    v37 = 0;
    v39 = 4LL;
    if ( v7 )
    {
      v8 = v7;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v7 + v5) );
    }
    v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 2);
    v10 = &word_18003D1D0;
    v40 = v8;
    v41 = v5 + 1;
    v11 = &word_18003D1D0;
    v23 = *(_DWORD *)a2;
    v43 = &v23;
    LODWORD(v5) = 0;
    v42 = 0;
    v44 = 4LL;
    if ( v9 )
    {
      v11 = v9;
      v5 = -1LL;
      do
        ++v5;
      while ( v9[v5] );
    }
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v46 = 2 * v5 + 2;
    v24 = *((_DWORD *)a2 + 6);
    v48 = &v24;
    LODWORD(v5) = 0;
    v45 = v11;
    v13 = &word_18003CB68;
    v47 = 0;
    v49 = 4LL;
    if ( v12 )
    {
      v13 = v12;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v12 + v5) );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v51 = v5 + 1;
    v25 = *((_DWORD *)a2 + 18);
    v53 = &v25;
    LODWORD(v5) = 0;
    v50 = v13;
    v15 = &word_18003CB68;
    v52 = 0;
    v54 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)v14 + v5) );
    }
    v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
    v56 = v5 + 1;
    LODWORD(v5) = 0;
    v55 = v15;
    v17 = &word_18003D1D0;
    v57 = 0;
    if ( v16 )
    {
      v17 = v16;
      v5 = -1LL;
      do
        ++v5;
      while ( v16[v5] );
    }
    v18 = (const GUID *)*((_QWORD *)a2 + 13);
    v59 = 2 * v5 + 2;
    v26 = *((_DWORD *)a2 + 24);
    v61 = &v26;
    LODWORD(v5) = 0;
    v58 = v17;
    v19 = (const GUID *)&word_18003CB68;
    v60 = 0;
    v62 = 4LL;
    if ( v18 )
    {
      v19 = v18;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)&v18->Data1 + v5) );
    }
    v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 14);
    v64 = v5 + 1;
    LODWORD(v5) = 0;
    v63 = v19;
    v65 = 0;
    if ( v20 )
    {
      v10 = v20;
      v5 = -1LL;
      do
        ++v5;
      while ( v20[v5] );
    }
    v21 = (const GUID *)*((_QWORD *)a2 + 5);
    v67 = 2 * v5 + 2;
    v27 = *((_DWORD *)a2 + 2);
    v69 = &v27;
    LODWORD(v28) = *((_DWORD *)a2 + 15);
    v71 = &v28;
    LODWORD(v5) = 0;
    v66 = v10;
    v68 = 0;
    v70 = 4LL;
    v72 = 4LL;
    if ( v21 )
    {
      v4 = v21;
      v5 = -1LL;
      do
        ++v5;
      while ( *((_BYTE *)&v21->Data1 + v5) );
    }
    v73 = v4;
    v74 = v5 + 1;
    v75 = 0;
    TlgWrite(v2, &unk_180042AC4, v19, v4, 0x14u, &pData);
  }
}
