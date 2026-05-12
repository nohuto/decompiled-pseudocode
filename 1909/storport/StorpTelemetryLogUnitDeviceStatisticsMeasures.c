/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004E93C
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002468 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C000E520 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsMeasures(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  _BYTE *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int16 v6; // ax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  char v16; // r8
  unsigned __int16 v17; // r13
  __int64 v18; // rax
  _QWORD *v19; // r11
  unsigned __int16 v20; // r12
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int16 v26; // r15
  __int64 v27; // rax
  LPCSTR v28; // r10
  __int64 v29; // r10
  __int64 v30; // r10
  __int64 v31; // r11
  LPCGUID v32; // r8
  char v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+31h] [rbp-CFh] BYREF
  char v35; // [rsp+32h] [rbp-CEh] BYREF
  char v36; // [rsp+33h] [rbp-CDh] BYREF
  char v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v40; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 v41; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v42; // [rsp+42h] [rbp-BEh]
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h]
  LPCWSTR pwsz; // [rsp+70h] [rbp-90h]
  struct _TlgProvider_t hProvider; // [rsp+78h] [rbp-88h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  _BYTE *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  char *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+150h] [rbp+50h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int16 *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  _DWORD *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  _QWORD *v76; // [rsp+190h] [rbp+90h]
  _DWORD v77[2]; // [rsp+198h] [rbp+98h] BYREF
  int *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  int *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  _DWORD *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 KeywordAny; // [rsp+1E0h] [rbp+E0h]
  _DWORD v87[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 KeywordAll; // [rsp+200h] [rbp+100h]
  _DWORD v91[2]; // [rsp+208h] [rbp+108h] BYREF
  _DWORD *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  __int64 v94; // [rsp+220h] [rbp+120h]
  _DWORD v95[2]; // [rsp+228h] [rbp+128h] BYREF
  int *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  int *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  _DWORD *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  __int64 v102; // [rsp+260h] [rbp+160h]
  _DWORD v103[2]; // [rsp+268h] [rbp+168h] BYREF
  char *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  _DWORD *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  __int64 v108; // [rsp+290h] [rbp+190h]
  _DWORD v109[2]; // [rsp+298h] [rbp+198h] BYREF
  int *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  int *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  _DWORD *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  __int64 v118; // [rsp+2E0h] [rbp+1E0h]
  _DWORD v119[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  char *v120; // [rsp+2F0h] [rbp+1F0h]
  __int64 v121; // [rsp+2F8h] [rbp+1F8h]

  if ( (unsigned int)dword_1C0062058 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v4 = *(_QWORD *)(v1 + 24);
    v5 = *(_QWORD **)(v3 + 296);
    v51 = v4 + 5128;
    v43 = *(_DWORD *)(v4 + 56);
    v33 = v2[96];
    v34 = v2[97];
    v35 = v2[98];
    pwsz = *(LPCWSTR *)(v4 + 4800);
    *(_QWORD *)&hProvider.LevelPlus1 = g_SystemUptime_s;
    v6 = *(_WORD *)(v3 + 352);
    v38 = **(_WORD **)(v3 + 288);
    v7 = -1;
    v39 = v6;
    v8 = v5[1];
    if ( v8 >= 0 || (v8 & 0x4000000000000000LL) == 0 )
      LODWORD(v8) = -1;
    v44 = v8;
    v9 = v5[2];
    if ( v9 >= 0 || (v9 & 0x4000000000000000LL) == 0 )
      LODWORD(v9) = -1;
    v45 = v9;
    v10 = v5[9];
    if ( v10 < 0 && (v10 & 0x4000000000000000LL) != 0 )
      v11 = (unsigned __int16)v10;
    else
      v11 = -1LL;
    v12 = *(_QWORD *)(v3 + 320);
    hProvider.KeywordAny = *(_QWORD *)(v3 + 304);
    v40 = *(_WORD *)(v3 + 354);
    hProvider.KeywordAll = *(_QWORD *)(v3 + 312);
    v41 = *(_WORD *)(v3 + 356);
    v42 = *(_WORD *)(v3 + 358);
    hProvider.ProviderMetadataPtr = (const unsigned __int16 *)v11;
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 >= 0 || (v13 & 0x4000000000000000LL) == 0 )
      LODWORD(v13) = -1;
    v46 = v13;
    v14 = *(_QWORD *)(v12 + 16);
    if ( v14 >= 0 || (v14 & 0x4000000000000000LL) == 0 )
      LODWORD(v14) = -1;
    v15 = *(_QWORD *)(v3 + 328);
    v16 = -1;
    v17 = *(_WORD *)(v3 + 360);
    v47 = v14;
    v18 = *(_QWORD *)(v15 + 8);
    if ( v18 >= 0 || (v18 & 0x4000000000000000LL) == 0 )
      LOBYTE(v18) = -1;
    v19 = *(_QWORD **)(v3 + 336);
    v20 = *(_WORD *)(v3 + 362);
    v36 = v18;
    v21 = v19[1];
    if ( v21 >= 0 || (v22 = (unsigned __int8)v21, (v21 & 0x4000000000000000LL) == 0) )
      v22 = -1;
    v48 = v22;
    v23 = v19[2];
    if ( v23 >= 0 || (v23 & 0x4000000000000000LL) == 0 )
      LODWORD(v23) = -1;
    v49 = v23;
    v24 = v19[3];
    if ( v24 < 0 && (v24 & 0x4000000000000000LL) != 0 )
      v7 = v19[3];
    v25 = *(_QWORD *)(v3 + 344);
    v26 = *(_WORD *)(v3 + 364);
    v50 = v7;
    v27 = *(_QWORD *)(v25 + 8);
    if ( v27 < 0 && (v27 & 0x4000000000000000LL) != 0 )
      v16 = *(_QWORD *)(v25 + 8);
    v54 = v51;
    v56 = v2 + 1976;
    v58 = &v43;
    v60 = &v33;
    v62 = &v34;
    v64 = &v35;
    v37 = v16;
    v55 = 16LL;
    v57 = 16LL;
    v59 = 4LL;
    v61 = 1LL;
    v63 = 1LL;
    v65 = 1LL;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSz(&v67, v28);
    TlgCreateSz(&v68, (LPCSTR)(v29 + 9));
    TlgCreateSz(&v69, (LPCSTR)(v30 + 26));
    v71 = 8LL;
    v73 = 2LL;
    v72 = &v38;
    p_hProvider = &hProvider;
    v74 = v77;
    v77[0] = v39;
    v78 = &v44;
    v80 = &v45;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    v84 = v87;
    KeywordAny = hProvider.KeywordAny;
    v87[0] = v40;
    v88 = v91;
    KeywordAll = hProvider.KeywordAll;
    v91[0] = v41;
    v92 = v95;
    v95[0] = v42;
    v96 = &v46;
    v75 = 2LL;
    v76 = v5;
    v77[1] = 0;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 8LL;
    v85 = 2LL;
    v87[1] = 0;
    v89 = 2LL;
    v91[1] = 0;
    v93 = 2LL;
    v94 = v12;
    v95[1] = 0;
    v97 = 4LL;
    v98 = &v47;
    v100 = v103;
    v103[0] = v17;
    v104 = &v36;
    v106 = v109;
    v109[0] = v20;
    v110 = &v48;
    v112 = &v49;
    v114 = &v50;
    v116 = v119;
    v119[0] = v26;
    v120 = &v37;
    v99 = 4LL;
    v101 = 2LL;
    v102 = v15;
    v103[1] = 0;
    v105 = 1LL;
    v107 = 2LL;
    v108 = v31;
    v109[1] = 0;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 4LL;
    v117 = 2LL;
    v118 = v25;
    v119[1] = 0;
    v121 = 1LL;
    TlgWrite(&hProvider, &unk_1C0059C70, v32, 0LL, 0x26u, (EVENT_DATA_DESCRIPTOR *)&hProvider.EnableCallback);
  }
}
