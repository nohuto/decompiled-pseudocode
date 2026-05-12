/*
 * XREFs of StorpTelemetryMiniportEventUnit @ 0x1C0022D88
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C0022D08 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryMiniportEventUnit(const struct _TlgProvider_t *a1, __int64 a2)
{
  __int64 v2; // rax
  const unsigned __int16 **p_ProviderMetadataPtr; // rbx
  __int64 v4; // rcx
  int *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rdi
  void *v9; // rcx
  void *v10; // rdx
  void *v11; // r8
  _BYTE *v12; // rax
  char v13; // al
  __int16 v14; // ax
  __int16 v15; // r10
  __int16 v16; // r10
  __int16 v17; // r10
  __int64 v18; // rsi
  const CHAR *v19; // r11
  unsigned __int16 v20; // r14
  const CHAR *v21; // r15
  const CHAR *v22; // r12
  const CHAR *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // r9
  void *v27; // r10
  void *v28; // rdx
  LPCGUID v29; // r8
  LPCGUID v30; // r9
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
  LPCSTR psz; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  LPCSTR v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  LPCSTR v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h] BYREF
  LPCSTR v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  LPCSTR v52; // [rsp+B8h] [rbp-50h]
  struct _TlgProvider_t hProvider; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  const unsigned __int16 **v56; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+8h]
  __int128 *v58; // [rsp+118h] [rbp+10h]
  int v59; // [rsp+120h] [rbp+18h]
  int v60; // [rsp+124h] [rbp+1Ch]
  void *v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+130h] [rbp+28h]
  int v63; // [rsp+134h] [rbp+2Ch]
  void *v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+38h]
  int v66; // [rsp+144h] [rbp+3Ch]
  void *v67; // [rsp+148h] [rbp+40h]
  int v68; // [rsp+150h] [rbp+48h]
  int v69; // [rsp+154h] [rbp+4Ch]
  __int16 *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  __int16 *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  __int16 *v74; // [rsp+178h] [rbp+70h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  int *v76; // [rsp+188h] [rbp+80h]
  __int64 v77; // [rsp+190h] [rbp+88h]
  int *v78; // [rsp+198h] [rbp+90h]
  __int64 v79; // [rsp+1A0h] [rbp+98h]
  int *v80; // [rsp+1A8h] [rbp+A0h]
  __int64 v81; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v83; // [rsp+1C8h] [rbp+C0h]
  __int64 v84; // [rsp+1D0h] [rbp+C8h]
  int *v85; // [rsp+1D8h] [rbp+D0h]
  __int64 v86; // [rsp+1E0h] [rbp+D8h]
  __int64 *v87; // [rsp+1E8h] [rbp+E0h]
  __int64 v88; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v89; // [rsp+1F8h] [rbp+F0h]
  __int64 v90; // [rsp+200h] [rbp+F8h]
  __int64 v91; // [rsp+208h] [rbp+100h]
  _DWORD v92[2]; // [rsp+210h] [rbp+108h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+218h] [rbp+110h] BYREF
  __int64 *v94; // [rsp+228h] [rbp+120h]
  __int64 v95; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+238h] [rbp+130h] BYREF
  __int64 *v97; // [rsp+248h] [rbp+140h]
  __int64 v98; // [rsp+250h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+258h] [rbp+150h] BYREF
  __int64 *v100; // [rsp+268h] [rbp+160h]
  __int64 v101; // [rsp+270h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+298h] [rbp+190h] BYREF
  __int64 *v106; // [rsp+2A8h] [rbp+1A0h]
  __int64 v107; // [rsp+2B0h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v111; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+308h] [rbp+200h]
  __int64 v116; // [rsp+310h] [rbp+208h]
  __int128 v117; // [rsp+318h] [rbp+210h] BYREF
  char v118; // [rsp+328h] [rbp+220h]

  LOBYTE(v2) = 0;
  p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
  v117 = 0uLL;
  v118 = 0;
  hProvider.ProviderMetadataPtr = 0LL;
  hProvider.KeywordAny = 0LL;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 152);
    p_ProviderMetadataPtr = (const unsigned __int16 **)(a2 + 1976);
    if ( v2 )
      v117 = *(_OWORD *)(v2 + 90);
  }
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn(a1, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v8 = v4 + 5256;
      v9 = &unk_1C0054E5C;
      v10 = v6 + 20;
      if ( v6 )
      {
        v11 = (char *)v6 + 169;
      }
      else
      {
        v10 = &unk_1C0054E5C;
        v11 = &unk_1C0054E5C;
      }
      if ( v6 && (v12 = (_BYTE *)v6[13], v9 = (char *)v6 + 442, v12) )
        v13 = *v12 & 0x1F;
      else
        v13 = 31;
      LOBYTE(v32) = v13;
      v14 = -1;
      if ( v7 )
        v15 = *(_WORD *)(v7 + 2);
      else
        v15 = -1;
      v33 = v15;
      if ( v7 )
        v16 = *(unsigned __int8 *)(v7 + 8);
      else
        v16 = -1;
      v34 = v16;
      if ( v7 )
        v17 = *(unsigned __int8 *)(v7 + 9);
      else
        v17 = -1;
      LOWORD(v35) = v17;
      if ( v7 )
        v14 = *(unsigned __int8 *)(v7 + 10);
      v18 = *((_QWORD *)v5 + 7);
      v19 = (const CHAR *)(v5 + 2);
      v20 = *((_WORD *)v5 + 24);
      v21 = (const CHAR *)(v5 + 16);
      LOWORD(v36) = v14;
      v22 = (const CHAR *)(v5 + 26);
      v23 = (const CHAR *)(v5 + 36);
      v37 = *v5;
      v38 = v5[1];
      v39 = v5[10];
      LODWORD(v40) = v5[11];
      v41 = *((_QWORD *)v5 + 12);
      v42 = *((_QWORD *)v5 + 17);
      v43 = *((_QWORD *)v5 + 22);
      psz = (LPCSTR)(v5 + 46);
      v45 = *((_QWORD *)v5 + 27);
      v46 = (LPCSTR)(v5 + 56);
      v47 = *((_QWORD *)v5 + 32);
      v48 = (LPCSTR)(v5 + 66);
      v49 = *((_QWORD *)v5 + 37);
      v50 = (LPCSTR)(v5 + 76);
      v51 = *((_QWORD *)v5 + 42);
      v52 = (LPCSTR)(v5 + 86);
      v24 = *((_QWORD *)v5 + 47);
      v54 = v8;
      v56 = p_ProviderMetadataPtr;
      *(_QWORD *)&hProvider.LevelPlus1 = v24;
      v25 = -1LL;
      v55 = 16LL;
      v57 = 16LL;
      do
        ++v25;
      while ( *((_BYTE *)&v117 + v25) );
      v60 = 0;
      v59 = v25 + 1;
      v58 = &v117;
      v26 = &unk_1C0054E5E;
      v27 = &unk_1C0054E5E;
      LODWORD(v25) = 0;
      if ( v10 )
      {
        v27 = v10;
        v25 = -1LL;
        do
          ++v25;
        while ( *((_BYTE *)v10 + v25) );
      }
      v61 = v27;
      v62 = v25 + 1;
      LODWORD(v25) = 0;
      v63 = 0;
      v28 = &unk_1C0054E5E;
      if ( v11 )
      {
        v28 = v11;
        v25 = -1LL;
        do
          ++v25;
        while ( *((_BYTE *)v11 + v25) );
      }
      v64 = v28;
      v65 = v25 + 1;
      LODWORD(v25) = 0;
      v66 = 0;
      if ( v9 )
      {
        v26 = v9;
        v25 = -1LL;
        do
          ++v25;
        while ( *((_BYTE *)v9 + v25) );
      }
      v67 = v26;
      v68 = v25 + 1;
      v69 = 0;
      v70 = &v32;
      v71 = 1LL;
      v72 = &v33;
      v74 = &v34;
      v76 = &v35;
      v78 = &v36;
      v80 = &v37;
      v73 = 2LL;
      v75 = 2LL;
      v77 = 2LL;
      v79 = 2LL;
      v81 = 4LL;
      TlgCreateSz(&pDesc, v19);
      v84 = 4LL;
      v85 = &v39;
      v83 = &v38;
      v87 = &v40;
      v86 = 4LL;
      v89 = v92;
      v92[0] = v20;
      v88 = 4LL;
      v90 = 2LL;
      v91 = v18;
      v92[1] = 0;
      TlgCreateSz(&v93, v21);
      v95 = 8LL;
      v94 = &v41;
      TlgCreateSz(&v96, v22);
      v98 = 8LL;
      v97 = &v42;
      TlgCreateSz(&v99, v23);
      v100 = &v43;
      v101 = 8LL;
      TlgCreateSz(&v102, psz);
      v103 = &v45;
      v104 = 8LL;
      TlgCreateSz(&v105, v46);
      v106 = &v47;
      v107 = 8LL;
      TlgCreateSz(&v108, v48);
      v109 = &v49;
      v110 = 8LL;
      TlgCreateSz(&v111, v50);
      v112 = &v51;
      v113 = 8LL;
      TlgCreateSz(&v114, v52);
      v116 = 8LL;
      p_hProvider = &hProvider;
      LOBYTE(v2) = TlgWrite(&hProvider, &unk_1C0058E3B, v29, v30, 0x24u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
    }
  }
  return v2;
}
