/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x1C001F6A0
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C001F608 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C000E4C8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportEventUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const unsigned __int16 **p_ProviderMetadataPtr; // rbx
  __int64 v4; // rdi
  int *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdi
  char v9; // al
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // cx
  __int16 v13; // cx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int16 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  _BYTE *v30; // rax
  __int16 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v33; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh] BYREF
  int v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+98h] [rbp-70h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-30h]
  int v50; // [rsp+E0h] [rbp-28h]
  int v51; // [rsp+E4h] [rbp-24h]
  const unsigned __int16 **v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  __int128 *v54; // [rsp+F8h] [rbp-10h]
  int v55; // [rsp+100h] [rbp-8h]
  int v56; // [rsp+104h] [rbp-4h]
  __int64 *v57; // [rsp+108h] [rbp+0h]
  int v58; // [rsp+110h] [rbp+8h]
  int v59; // [rsp+114h] [rbp+Ch]
  __int128 *v60; // [rsp+118h] [rbp+10h]
  int v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+124h] [rbp+1Ch]
  int *v63; // [rsp+128h] [rbp+20h]
  int v64; // [rsp+130h] [rbp+28h]
  int v65; // [rsp+134h] [rbp+2Ch]
  __int16 *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  __int16 *v68; // [rsp+148h] [rbp+40h]
  __int64 v69; // [rsp+150h] [rbp+48h]
  __int16 *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  int *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  int *v74; // [rsp+178h] [rbp+70h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  int *v76; // [rsp+188h] [rbp+80h]
  int v77; // [rsp+190h] [rbp+88h]
  int v78; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  int *v80; // [rsp+1A8h] [rbp+A0h]
  int v81; // [rsp+1B0h] [rbp+A8h]
  int v82; // [rsp+1B4h] [rbp+ACh]
  int *v83; // [rsp+1B8h] [rbp+B0h]
  int v84; // [rsp+1C0h] [rbp+B8h]
  int v85; // [rsp+1C4h] [rbp+BCh]
  __int64 *v86; // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]
  _DWORD *v88; // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E0h] [rbp+D8h]
  __int64 v90; // [rsp+1E8h] [rbp+E0h]
  _DWORD v91[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v93; // [rsp+208h] [rbp+100h]
  __int64 v94; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v96; // [rsp+228h] [rbp+120h]
  __int64 v97; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v99; // [rsp+248h] [rbp+140h]
  __int64 v100; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v102; // [rsp+268h] [rbp+160h]
  __int64 v103; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v105; // [rsp+288h] [rbp+180h]
  __int64 v106; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v108; // [rsp+2A8h] [rbp+1A0h]
  __int64 v109; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v111; // [rsp+2C8h] [rbp+1C0h]
  __int64 v112; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v113; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+2E8h] [rbp+1E0h]
  __int64 v115; // [rsp+2F0h] [rbp+1E8h]
  int v116; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v117; // [rsp+2FCh] [rbp+1F4h]
  __int64 v118; // [rsp+300h] [rbp+1F8h] BYREF
  char v119; // [rsp+308h] [rbp+200h]
  __int128 v120; // [rsp+310h] [rbp+208h] BYREF
  char v121; // [rsp+320h] [rbp+218h]
  __int128 v122; // [rsp+328h] [rbp+220h] BYREF
  char v123; // [rsp+338h] [rbp+230h]

  LOBYTE(v2) = 0;
  p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
  v120 = 0uLL;
  v121 = 0;
  v4 = a1;
  v118 = 0LL;
  v119 = 0;
  v122 = 0uLL;
  v123 = 0;
  v116 = 0;
  v117 = 0;
  hProvider.ProviderMetadataPtr = 0LL;
  hProvider.KeywordAny = 0LL;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 152);
    if ( v2 )
      v120 = *(_OWORD *)(v2 + 90);
    a1 = *(_QWORD *)(a2 + 104);
    if ( a1 )
    {
      p_ProviderMetadataPtr = (const unsigned __int16 **)(a2 + 1720);
      v118 = *(_QWORD *)(a1 + 8);
      v122 = *(_OWORD *)(a1 + 16);
      LODWORD(v2) = *(_DWORD *)(a1 + 32);
      v116 = v2;
    }
  }
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)a1, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v8 = v4 + 5128;
      if ( v7 && (v30 = *(_BYTE **)(v7 + 104)) != 0LL )
        v9 = *v30 & 0x1F;
      else
        v9 = 31;
      LOBYTE(v32) = v9;
      v10 = -1;
      if ( v6 )
        v11 = *(_WORD *)(v6 + 2);
      else
        v11 = -1;
      v33 = v11;
      if ( v6 )
        v12 = *(unsigned __int8 *)(v6 + 8);
      else
        v12 = -1;
      v34 = v12;
      if ( v6 )
        v13 = *(unsigned __int8 *)(v6 + 9);
      else
        v13 = -1;
      LOWORD(v35) = v13;
      if ( v6 )
        v10 = *(unsigned __int8 *)(v6 + 10);
      v51 = 0;
      LOWORD(v36) = v10;
      v37 = *v5;
      v38 = v5[1];
      v39 = v5[10];
      LODWORD(v40) = v5[11];
      v41 = *((_QWORD *)v5 + 12);
      v42 = *((_QWORD *)v5 + 17);
      v43 = *((_QWORD *)v5 + 22);
      v44 = *((_QWORD *)v5 + 27);
      v45 = *((_QWORD *)v5 + 32);
      v46 = *((_QWORD *)v5 + 37);
      v47 = *((_QWORD *)v5 + 42);
      *(_QWORD *)&hProvider.LevelPlus1 = *((_QWORD *)v5 + 47);
      v52 = p_ProviderMetadataPtr;
      v14 = -1LL;
      v50 = 16;
      v53 = 16LL;
      v15 = -1LL;
      v49 = v8;
      do
        ++v15;
      while ( *((_BYTE *)&v120 + v15) );
      v56 = 0;
      v54 = &v120;
      v55 = v15 + 1;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_BYTE *)&v118 + v16) );
      v59 = 0;
      v57 = &v118;
      v58 = v16 + 1;
      v17 = -1LL;
      do
        ++v17;
      while ( *((_BYTE *)&v122 + v17) );
      v62 = 0;
      v61 = v17 + 1;
      v60 = &v122;
      do
        ++v14;
      while ( *((_BYTE *)&v116 + v14) );
      v78 = 0;
      v63 = &v116;
      v64 = v14 + 1;
      v65 = 0;
      v66 = &v32;
      v67 = 1LL;
      v68 = &v33;
      v70 = &v34;
      v72 = &v35;
      v74 = &v36;
      v76 = &v37;
      v69 = 2LL;
      v71 = 2LL;
      v73 = 2LL;
      v75 = 2LL;
      v77 = 4;
      TlgCreateSz(&pDesc, (LPCSTR)v5 + 8);
      v82 = 0;
      v85 = 0;
      v83 = &v39;
      v81 = 4;
      v86 = &v40;
      v88 = v91;
      v84 = 4;
      v87 = 4LL;
      v80 = &v38;
      v91[0] = v19;
      v89 = 2LL;
      v90 = v20;
      v91[1] = 0;
      TlgCreateSz(&v92, (LPCSTR)(v18 + 64));
      v94 = 8LL;
      v93 = &v41;
      TlgCreateSz(&v95, (LPCSTR)(v21 + 104));
      v97 = 8LL;
      v96 = &v42;
      TlgCreateSz(&v98, (LPCSTR)(v22 + 144));
      v100 = 8LL;
      v99 = &v43;
      TlgCreateSz(&v101, (LPCSTR)(v23 + 184));
      v103 = 8LL;
      v102 = &v44;
      TlgCreateSz(&v104, (LPCSTR)(v24 + 224));
      v106 = 8LL;
      v105 = &v45;
      TlgCreateSz(&v107, (LPCSTR)(v25 + 264));
      v108 = &v46;
      v109 = 8LL;
      TlgCreateSz(&v110, (LPCSTR)(v26 + 304));
      v112 = 8LL;
      v111 = &v47;
      TlgCreateSz(&v113, (LPCSTR)(v27 + 344));
      v115 = 8LL;
      p_hProvider = &hProvider;
      LOBYTE(v2) = TlgWrite(&hProvider, &unk_1C005782F, v28, v29, 0x24u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    }
  }
  return v2;
}
