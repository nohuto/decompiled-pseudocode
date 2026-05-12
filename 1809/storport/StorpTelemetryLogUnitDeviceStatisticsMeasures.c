/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004F504
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0010994 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0011B90 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall StorpTelemetryLogUnitDeviceStatisticsMeasures(const struct _TlgProvider_t *a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int16 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // r10
  unsigned __int16 v21; // r15
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int16 v27; // si
  __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // r10
  LPCGUID v31; // r8
  __int16 v33; // [rsp+38h] [rbp-D0h] BYREF
  char v34; // [rsp+3Ah] [rbp-CEh] BYREF
  char v35; // [rsp+3Bh] [rbp-CDh] BYREF
  __int16 v36; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v37; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v38; // [rsp+44h] [rbp-C4h]
  unsigned __int16 v39; // [rsp+46h] [rbp-C2h]
  int v40; // [rsp+48h] [rbp-C0h]
  int v41; // [rsp+4Ch] [rbp-BCh] BYREF
  int v42; // [rsp+50h] [rbp-B8h] BYREF
  int v43; // [rsp+54h] [rbp-B4h] BYREF
  int v44; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+5Ch] [rbp-ACh] BYREF
  int v46; // [rsp+60h] [rbp-A8h] BYREF
  int v47; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  LPCWSTR pwsz; // [rsp+70h] [rbp-98h]
  LPCSTR psz; // [rsp+78h] [rbp-90h]
  LPCSTR v51; // [rsp+80h] [rbp-88h]
  struct _TlgProvider_t hProvider; // [rsp+88h] [rbp-80h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  __int64 v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  __int16 *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  char *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  char *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+128h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+148h] [rbp+40h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+158h] [rbp+50h]
  __int64 v69; // [rsp+160h] [rbp+58h]
  __int16 *v70; // [rsp+168h] [rbp+60h]
  __int64 v71; // [rsp+170h] [rbp+68h]
  _DWORD *v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  __int64 v74; // [rsp+188h] [rbp+80h]
  _DWORD v75[2]; // [rsp+190h] [rbp+88h] BYREF
  int *v76; // [rsp+198h] [rbp+90h]
  __int64 v77; // [rsp+1A0h] [rbp+98h]
  int *v78; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v82; // [rsp+1C8h] [rbp+C0h]
  __int64 v83; // [rsp+1D0h] [rbp+C8h]
  __int64 v84; // [rsp+1D8h] [rbp+D0h]
  _DWORD v85[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v86; // [rsp+1E8h] [rbp+E0h]
  __int64 v87; // [rsp+1F0h] [rbp+E8h]
  unsigned __int64 KeywordAny; // [rsp+1F8h] [rbp+F0h]
  _DWORD v89[2]; // [rsp+200h] [rbp+F8h] BYREF
  _DWORD *v90; // [rsp+208h] [rbp+100h]
  __int64 v91; // [rsp+210h] [rbp+108h]
  __int64 v92; // [rsp+218h] [rbp+110h]
  _DWORD v93[2]; // [rsp+220h] [rbp+118h] BYREF
  int *v94; // [rsp+228h] [rbp+120h]
  __int64 v95; // [rsp+230h] [rbp+128h]
  int *v96; // [rsp+238h] [rbp+130h]
  __int64 v97; // [rsp+240h] [rbp+138h]
  _DWORD *v98; // [rsp+248h] [rbp+140h]
  __int64 v99; // [rsp+250h] [rbp+148h]
  __int64 v100; // [rsp+258h] [rbp+150h]
  _DWORD v101[2]; // [rsp+260h] [rbp+158h] BYREF
  char *v102; // [rsp+268h] [rbp+160h]
  __int64 v103; // [rsp+270h] [rbp+168h]
  _DWORD *v104; // [rsp+278h] [rbp+170h]
  __int64 v105; // [rsp+280h] [rbp+178h]
  __int64 v106; // [rsp+288h] [rbp+180h]
  _DWORD v107[2]; // [rsp+290h] [rbp+188h] BYREF
  int *v108; // [rsp+298h] [rbp+190h]
  __int64 v109; // [rsp+2A0h] [rbp+198h]
  int *v110; // [rsp+2A8h] [rbp+1A0h]
  __int64 v111; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v112; // [rsp+2B8h] [rbp+1B0h]
  __int64 v113; // [rsp+2C0h] [rbp+1B8h]
  _DWORD *v114; // [rsp+2C8h] [rbp+1C0h]
  __int64 v115; // [rsp+2D0h] [rbp+1C8h]
  __int64 v116; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v117[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int16 *v118; // [rsp+2E8h] [rbp+1E0h]
  __int64 v119; // [rsp+2F0h] [rbp+1E8h]
  _UNKNOWN *retaddr; // [rsp+330h] [rbp+228h] BYREF

  v1 = &retaddr;
  if ( (unsigned int)dword_1C0061058 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn(a1, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v5 = *(_QWORD *)(v2 + 24);
      v6 = v4 + 1976;
      v7 = *(_QWORD **)(v3 + 8);
      v8 = v5 + 5256;
      v41 = *(_DWORD *)(v5 + 56);
      v33 = *(_WORD *)(v4 + 96);
      v34 = *(_BYTE *)(v4 + 98);
      pwsz = *(LPCWSTR *)(v5 + 4864);
      psz = (LPCSTR)(v4 + 160);
      v51 = (LPCSTR)(v4 + 169);
      *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
      LOWORD(v5) = **(_WORD **)v3;
      v38 = *(_WORD *)(v3 + 64);
      v37 = v5;
      v9 = v7[1];
      if ( v9 >= 0 || (v9 & 0x4000000000000000LL) == 0 )
        LODWORD(v9) = -1;
      v42 = v9;
      v10 = v7[2];
      if ( v10 >= 0 || (v10 & 0x4000000000000000LL) == 0 )
        LODWORD(v10) = -1;
      v43 = v10;
      v11 = v7[9];
      if ( v11 < 0 && (v11 & 0x4000000000000000LL) != 0 )
        v12 = (unsigned __int16)v11;
      else
        v12 = -1LL;
      v13 = *(_QWORD *)(v3 + 32);
      v14 = *(_QWORD *)(v3 + 16);
      v39 = *(_WORD *)(v3 + 66);
      hProvider.KeywordAny = *(_QWORD *)(v3 + 24);
      v40 = *(_DWORD *)(v3 + 68);
      hProvider.ProviderMetadataPtr = (const unsigned __int16 *)v12;
      v15 = *(_QWORD *)(v13 + 8);
      if ( v15 >= 0 || (v15 & 0x4000000000000000LL) == 0 )
        LODWORD(v15) = -1;
      v44 = v15;
      v16 = *(_QWORD *)(v13 + 16);
      if ( v16 >= 0 || (v16 & 0x4000000000000000LL) == 0 )
        LODWORD(v16) = -1;
      v17 = *(_QWORD *)(v3 + 40);
      v18 = *(_WORD *)(v3 + 72);
      v45 = v16;
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 >= 0 || (v19 & 0x4000000000000000LL) == 0 )
        LOBYTE(v19) = -1;
      v20 = *(_QWORD **)(v3 + 48);
      v21 = *(_WORD *)(v3 + 74);
      v35 = v19;
      v22 = v20[1];
      if ( v22 >= 0 || (v23 = (unsigned __int8)v22, (v22 & 0x4000000000000000LL) == 0) )
        v23 = -1;
      v46 = v23;
      v24 = v20[2];
      if ( v24 >= 0 || (v24 & 0x4000000000000000LL) == 0 )
        LODWORD(v24) = -1;
      v47 = v24;
      v25 = v20[3];
      if ( v25 >= 0 || (v25 & 0x4000000000000000LL) == 0 )
        LODWORD(v25) = -1;
      v26 = *(_QWORD *)(v3 + 56);
      v27 = *(_WORD *)(v3 + 76);
      LODWORD(v48) = v25;
      v28 = *(_QWORD *)(v26 + 8);
      if ( v28 >= 0 || (v28 & 0x4000000000000000LL) == 0 )
        LOBYTE(v28) = -1;
      LOBYTE(v36) = v28;
      v53 = v8;
      v57 = &v41;
      v59 = &v33;
      v61 = (char *)&v33 + 1;
      v63 = &v34;
      v54 = 16LL;
      v55 = v6;
      v56 = 16LL;
      v58 = 4LL;
      v60 = 1LL;
      v62 = 1LL;
      v64 = 1LL;
      TlgCreateWsz(&pDesc, pwsz);
      TlgCreateSz(&v66, psz);
      TlgCreateSz(&v67, v51);
      v69 = 8LL;
      v71 = 2LL;
      v70 = &v37;
      p_hProvider = &hProvider;
      v72 = v75;
      v75[0] = v38;
      v76 = &v42;
      v78 = &v43;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      v82 = v85;
      v85[0] = v39;
      v86 = v89;
      KeywordAny = hProvider.KeywordAny;
      v89[0] = (unsigned __int16)v40;
      v90 = v93;
      v93[0] = HIWORD(v40);
      v94 = &v44;
      v96 = &v45;
      v98 = v101;
      v73 = 2LL;
      v74 = v29;
      v75[1] = 0;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 8LL;
      v83 = 2LL;
      v84 = v14;
      v85[1] = 0;
      v87 = 2LL;
      v89[1] = 0;
      v91 = 2LL;
      v92 = v13;
      v93[1] = 0;
      v95 = 4LL;
      v97 = 4LL;
      v99 = 2LL;
      v100 = v17;
      v101[0] = v18;
      v102 = &v35;
      v104 = v107;
      v107[0] = v21;
      v108 = &v46;
      v110 = &v47;
      v112 = &v48;
      v114 = v117;
      v117[0] = v27;
      v118 = &v36;
      v101[1] = 0;
      v103 = 1LL;
      v105 = 2LL;
      v106 = v30;
      v107[1] = 0;
      v109 = 4LL;
      v111 = 4LL;
      v113 = 4LL;
      v115 = 2LL;
      v116 = v26;
      v117[1] = 0;
      v119 = 1LL;
      LOBYTE(v1) = TlgWrite(&hProvider, &unk_1C0059C21, v31, 0LL, 0x25u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
    }
  }
  return (char)v1;
}
