/*
 * XREFs of ?OnErrorReported@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@UEAAX_NAEBUFailureInfo@wil@@@Z @ 0x18001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x18001F98C (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerLogging::OnErrorReported(
        ContentDeliveryManager::Background::ContentDeliveryManagerLogging *this,
        __int64 a2,
        const struct wil::FailureInfo *a3)
{
  const struct _TlgProvider_t *v4; // r10
  const unsigned __int16 *v5; // rcx
  const unsigned __int16 *v6; // r8
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // rdx
  const WCHAR *v11; // rcx
  const WCHAR *v12; // r9
  const WCHAR *v13; // rdx
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const WCHAR *v18; // rcx
  const WCHAR *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  const WCHAR *v22; // rcx
  const unsigned __int16 *v23; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  char *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  const unsigned __int16 *v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  int *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  const WCHAR *v47; // [rsp+E8h] [rbp-20h]
  int v48; // [rsp+F0h] [rbp-18h]
  int v49; // [rsp+F4h] [rbp-14h]
  int *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v52; // [rsp+108h] [rbp+0h]
  int v53; // [rsp+110h] [rbp+8h]
  int v54; // [rsp+114h] [rbp+Ch]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  const unsigned __int16 *v57; // [rsp+128h] [rbp+20h]
  int v58; // [rsp+130h] [rbp+28h]
  int v59; // [rsp+134h] [rbp+2Ch]
  const WCHAR *v60; // [rsp+138h] [rbp+30h]
  int v61; // [rsp+140h] [rbp+38h]
  int v62; // [rsp+144h] [rbp+3Ch]
  int *v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  const unsigned __int16 *v65; // [rsp+158h] [rbp+50h]
  int v66; // [rsp+160h] [rbp+58h]
  int v67; // [rsp+164h] [rbp+5Ch]
  const WCHAR *v68; // [rsp+168h] [rbp+60h]
  int v69; // [rsp+170h] [rbp+68h]
  int v70; // [rsp+174h] [rbp+6Ch]
  int *v71; // [rsp+178h] [rbp+70h]
  __int64 v72; // [rsp+180h] [rbp+78h]
  __int64 *v73; // [rsp+188h] [rbp+80h]
  __int64 v74; // [rsp+190h] [rbp+88h]
  const unsigned __int16 *v75; // [rsp+198h] [rbp+90h]
  int v76; // [rsp+1A0h] [rbp+98h]
  int v77; // [rsp+1A4h] [rbp+9Ch]

  v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
    v33 = &v31;
    v6 = &word_1800FD1E0;
    v24 = *((_DWORD *)a3 + 1);
    v31 = 0x1000000LL;
    v35 = &v24;
    LODWORD(v7) = 0;
    v34 = 8LL;
    v8 = &word_1800FD1E0;
    v36 = 4LL;
    if ( v5 )
    {
      v8 = v5;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v5 + v7) );
    }
    v9 = (const unsigned __int16 *)*((_QWORD *)a3 + 15);
    v38 = v7 + 1;
    v40 = (char *)a3 + 56;
    LODWORD(v7) = 0;
    v37 = v8;
    v10 = &word_1800FD1E0;
    v39 = 0;
    v41 = 4LL;
    if ( v9 )
    {
      v10 = v9;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v9 + v7) );
    }
    v11 = (const WCHAR *)*((_QWORD *)a3 + 2);
    v12 = &Src;
    v42 = v10;
    v43 = v7 + 1;
    v13 = &Src;
    v25 = *(_DWORD *)a3;
    v45 = &v25;
    LODWORD(v7) = 0;
    v44 = 0;
    v46 = 4LL;
    if ( v11 )
    {
      v13 = v11;
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a3 + 8);
    v48 = 2 * v7 + 2;
    v26 = *((_DWORD *)a3 + 6);
    v50 = &v26;
    LODWORD(v7) = 0;
    v47 = v13;
    v15 = &word_1800FD1E0;
    v49 = 0;
    v51 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v14 + v7) );
    }
    v16 = (const unsigned __int16 *)*((_QWORD *)a3 + 10);
    v53 = v7 + 1;
    v27 = *((_DWORD *)a3 + 18);
    v55 = &v27;
    LODWORD(v7) = 0;
    v52 = v15;
    v17 = &word_1800FD1E0;
    v54 = 0;
    v56 = 4LL;
    if ( v16 )
    {
      v17 = v16;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v16 + v7) );
    }
    v18 = (const WCHAR *)*((_QWORD *)a3 + 11);
    v58 = v7 + 1;
    LODWORD(v7) = 0;
    v57 = v17;
    v19 = &Src;
    v59 = 0;
    if ( v18 )
    {
      v19 = v18;
      v7 = -1LL;
      do
        ++v7;
      while ( v18[v7] );
    }
    v20 = (const unsigned __int16 *)*((_QWORD *)a3 + 13);
    v61 = 2 * v7 + 2;
    v28 = *((_DWORD *)a3 + 24);
    v63 = &v28;
    LODWORD(v7) = 0;
    v60 = v19;
    v21 = &word_1800FD1E0;
    v62 = 0;
    v64 = 4LL;
    if ( v20 )
    {
      v21 = v20;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v20 + v7) );
    }
    v22 = (const WCHAR *)*((_QWORD *)a3 + 14);
    v66 = v7 + 1;
    LODWORD(v7) = 0;
    v65 = v21;
    v67 = 0;
    if ( v22 )
    {
      v12 = v22;
      v7 = -1LL;
      do
        ++v7;
      while ( v22[v7] );
    }
    v23 = (const unsigned __int16 *)*((_QWORD *)a3 + 5);
    v69 = 2 * v7 + 2;
    v29 = *((_DWORD *)a3 + 2);
    v71 = &v29;
    LODWORD(v30) = *((_DWORD *)a3 + 15);
    v73 = &v30;
    LODWORD(v7) = 0;
    v68 = v12;
    v70 = 0;
    v72 = 4LL;
    v74 = 4LL;
    if ( v23 )
    {
      v6 = v23;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v23 + v7) );
    }
    v75 = v6;
    v76 = v7 + 1;
    v77 = 0;
    TlgWrite(v4, &unk_18016AF8E, 0LL, 0LL, 0x14u, &pData);
  }
}
