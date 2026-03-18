/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0082F74
 * Callers:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0082E28 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0082E88 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C0098CC8 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall CitpInteractionSummaryStopTracking(struct _CIT_INTERACTION_SUMMARY *a1, int a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // r11
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY **v5; // rax
  _DWORD *v6; // r12
  _DWORD *v7; // r13
  struct _CIT_AUDIO_STATS **v8; // rdi
  __int64 v9; // rsi
  PVOID v10; // rax
  struct _CIT_IMPACT_CONTEXT *v11; // rdi
  char *v12; // r15
  char *v13; // rsi
  char *v14; // r14
  ULONGLONG v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  int v18; // eax
  int v19; // eax
  __int64 v20; // r10
  const WCHAR *v21; // r13
  const WCHAR *v22; // r12
  const WCHAR *v23; // rbx
  __int64 v24; // rax
  const WCHAR *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  int v28; // eax
  int v29; // eax
  _BYTE v30[3]; // [rsp+38h] [rbp-D0h] BYREF
  char v31; // [rsp+3Bh] [rbp-CDh] BYREF
  __int16 v32; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v33; // [rsp+3Eh] [rbp-CAh] BYREF
  int v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C8h] [rbp-40h] BYREF
  ULONGLONG v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  __int64 *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  char *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  _BYTE *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  _BYTE *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  __int64 v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  __int64 *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  __int16 *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  __int64 *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  __int64 v67; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h] BYREF
  int *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  char *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  char *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  __int16 *v75; // [rsp+1B8h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  __int64 *v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  char *v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h] BYREF
  char *v81; // [rsp+1E8h] [rbp+E0h]
  __int64 v82; // [rsp+1F0h] [rbp+E8h]
  char *v83; // [rsp+1F8h] [rbp+F0h]
  __int64 v84; // [rsp+200h] [rbp+F8h]
  char *v85; // [rsp+208h] [rbp+100h]
  __int64 v86; // [rsp+210h] [rbp+108h]
  char *v87; // [rsp+218h] [rbp+110h]
  __int64 v88; // [rsp+220h] [rbp+118h]
  char *v89; // [rsp+228h] [rbp+120h]
  __int64 v90; // [rsp+230h] [rbp+128h]
  _BYTE *v91; // [rsp+238h] [rbp+130h]
  __int64 v92; // [rsp+240h] [rbp+138h]
  __int16 *v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  int *v95; // [rsp+258h] [rbp+150h]
  __int64 v96; // [rsp+260h] [rbp+158h]
  char *v97; // [rsp+268h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+168h]
  unsigned int *v99; // [rsp+278h] [rbp+170h]
  __int64 v100; // [rsp+280h] [rbp+178h]
  __int64 *v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  _BYTE *v103; // [rsp+298h] [rbp+190h]
  __int64 v104; // [rsp+2A0h] [rbp+198h]
  __int16 *v105; // [rsp+2A8h] [rbp+1A0h]
  __int64 v106; // [rsp+2B0h] [rbp+1A8h]
  int *v107; // [rsp+2B8h] [rbp+1B0h]
  __int64 v108; // [rsp+2C0h] [rbp+1B8h]
  char *v109; // [rsp+2C8h] [rbp+1C0h]
  __int64 v110; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v111; // [rsp+2D8h] [rbp+1D0h]
  __int64 v112; // [rsp+2E0h] [rbp+1D8h]
  __int64 *v113; // [rsp+2E8h] [rbp+1E0h]
  __int64 v114; // [rsp+2F0h] [rbp+1E8h]
  char *v115; // [rsp+2F8h] [rbp+1F0h]
  __int64 v116; // [rsp+300h] [rbp+1F8h]
  __int64 v117; // [rsp+308h] [rbp+200h]
  __int64 v118; // [rsp+310h] [rbp+208h]
  int *v119; // [rsp+318h] [rbp+210h]
  __int64 v120; // [rsp+320h] [rbp+218h]
  int *v121; // [rsp+328h] [rbp+220h]
  __int64 v122; // [rsp+330h] [rbp+228h]
  _QWORD *v123; // [rsp+338h] [rbp+230h]
  __int64 v124; // [rsp+340h] [rbp+238h]
  __int64 *v125; // [rsp+348h] [rbp+240h]
  __int64 v126; // [rsp+350h] [rbp+248h]
  char *v127; // [rsp+358h] [rbp+250h]
  __int64 v128; // [rsp+360h] [rbp+258h]
  __int64 *v129; // [rsp+368h] [rbp+260h]
  __int64 v130; // [rsp+370h] [rbp+268h]
  int *v131; // [rsp+378h] [rbp+270h]
  __int64 v132; // [rsp+380h] [rbp+278h]
  int *v133; // [rsp+388h] [rbp+280h]
  __int64 v134; // [rsp+390h] [rbp+288h]
  __int64 *v135; // [rsp+398h] [rbp+290h]
  __int64 v136; // [rsp+3A0h] [rbp+298h]
  __int64 *v137; // [rsp+3A8h] [rbp+2A0h]
  __int64 v138; // [rsp+3B0h] [rbp+2A8h]
  char *v139; // [rsp+3B8h] [rbp+2B0h]
  __int64 v140; // [rsp+3C0h] [rbp+2B8h]
  _QWORD *v141; // [rsp+3C8h] [rbp+2C0h]
  __int64 v142; // [rsp+3D0h] [rbp+2C8h]

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 104);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 112);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v40;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v40[0] = (char *)v2 + 104;
  v40[1] = (char *)v2 + 112;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((qword_1C02157F4 & 0x10) == 0
     || *((_WORD *)v2 + 51) != 4
     || *((_WORD *)v2 + 48)
     && *((_WORD *)v2 + 49)
     && ((*((_BYTE *)v2 + 88) & 1) != 0 || (v10 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v10 != g_pepDwm))
    && ((qword_1C02157F4 & 0x20) == 0
     || (*((_WORD *)v2 + 51) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 51) & 8) == 0
     || *((_WORD *)v2 + 47) >= 3u
     || *((_WORD *)v2 + 48) && *((_WORD *)v2 + 49)) )
  {
    v11 = qword_1C0215810;
    v12 = (char *)v2 + 50;
    v13 = (char *)v2 + 32;
    LODWORD(v38) = a2 - *((_DWORD *)v2 + 20);
    v14 = (char *)qword_1C0215810 + 800;
    v41 = *((_QWORD *)qword_1C0215810 + 103);
    v37 = a2 - *((_DWORD *)qword_1C0215810 + 208);
    ++*((_QWORD *)qword_1C0215810 + 100);
    if ( (*((_BYTE *)v2 + 88) & 1) != 0 )
    {
      v20 = *((_QWORD *)v2 + 3);
      v21 = &pwsz;
      v22 = &pwsz;
      v23 = &pwsz;
      if ( *(_QWORD *)(v20 + 40) )
      {
        v24 = *(_QWORD *)(v20 + 48);
        if ( *(_DWORD *)(v20 + 72) == 1 )
        {
          v21 = *(const WCHAR **)(v20 + 40);
          if ( v24 )
            v22 = *(const WCHAR **)(v20 + 48);
        }
        else if ( v24 )
        {
          v23 = *(const WCHAR **)(v20 + 48);
        }
      }
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        TlgCreateWsz(&pDesc, v25);
        TlgCreateWsz(&v44, v21);
        TlgCreateWsz(&v45, v22);
        TlgCreateWsz(&v46, v23);
        v48 = 4LL;
        v49 = (__int64 *)(v26 + 64);
        v47 = v26 + 68;
        v51 = &v31;
        v50 = 4LL;
        v53 = v30;
        v55 = &v30[1];
        v57 = (int *)(v27 + 64);
        v59 = v27 + 64;
        v61 = &v41;
        v63 = (__int16 *)&v37;
        v65 = (__int64 *)(v27 + 124);
        v67 = v27 + 120;
        v34 = *(unsigned __int16 *)(v27 + 90);
        v69 = &v34;
        v71 = (char *)(v27 + 132);
        v73 = (char *)(v27 + 140);
        v32 = *(_WORD *)(v27 + 128);
        v75 = &v32;
        v77 = &v80;
        v79 = *(char **)(v27 + 144);
        v80 = *(unsigned __int16 *)(v27 + 152);
        v83 = v13 + 2;
        v85 = v13 + 4;
        v31 = 1;
        v52 = 1LL;
        *(_WORD *)v30 = 257;
        v54 = 1LL;
        v56 = 1LL;
        v58 = 16LL;
        v60 = 16LL;
        v62 = 8LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 2LL;
        v78 = 2LL;
        v81 = v13;
        v82 = 2LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v87 = v13 + 8;
        v90 = 2LL;
        v89 = v13 + 10;
        v91 = v13 + 14;
        v93 = (__int16 *)(v13 + 6);
        v97 = v12 + 2;
        v99 = (unsigned int *)(v12 + 4);
        v101 = (__int64 *)(v12 + 6);
        v30[2] = v12[10];
        v103 = &v30[2];
        v33 = *((_WORD *)v12 + 4);
        v105 = &v33;
        v107 = &dword_1C02157E8;
        v109 = (char *)&qword_1C02157F4 + 4;
        v111 = &dword_1C02157FC;
        v113 = &qword_1C02157F4;
        v115 = (char *)v11 + 836;
        v117 = v27 + 92;
        v119 = (int *)(v13 + 12);
        v121 = (int *)(v27 + 84);
        v123 = (_QWORD *)(v27 + 96);
        v125 = (__int64 *)(v27 + 98);
        v127 = (char *)(v27 + 100);
        v129 = (__int64 *)(v27 + 94);
        v28 = *(_DWORD *)(v27 + 104) & 0xFFFFFF;
        v92 = 2LL;
        v35 = v28;
        v131 = &v35;
        v29 = *(_DWORD *)(v27 + 112) & 0xFFFFFF;
        v94 = 2LL;
        v36 = v29;
        v133 = &v36;
        v95 = (int *)v12;
        v96 = 2LL;
        v98 = 2LL;
        v100 = 2LL;
        v102 = 2LL;
        v104 = 1LL;
        v106 = 2LL;
        v108 = 4LL;
        v110 = 4LL;
        v112 = 4LL;
        v114 = 4LL;
        v116 = 4LL;
        v118 = 2LL;
        v120 = 2LL;
        v122 = 4LL;
        v124 = 2LL;
        v126 = 2LL;
        v128 = 2LL;
        v130 = 2LL;
        v132 = 4LL;
        v39 = *(_QWORD *)(v27 + 16);
        v135 = &v39;
        v137 = &v38;
        v141 = v40;
        v134 = 4LL;
        v136 = 8LL;
        v138 = 4LL;
        v139 = v14;
        v140 = 8LL;
        v40[0] = 0x2000000LL;
        v142 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E71F9, 0LL, 0LL, 0x36u, &pData);
      }
    }
    else if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        pDesc.Ptr = v15;
        v44.Ptr = (ULONGLONG)&v30[2];
        v45.Ptr = (ULONGLONG)&v30[1];
        v49 = &v41;
        v51 = (char *)&v37;
        v53 = (_BYTE *)(v17 + 124);
        v55 = (_BYTE *)(v17 + 120);
        v36 = *(unsigned __int16 *)(v17 + 90);
        v57 = &v36;
        v59 = v17 + 132;
        v61 = (__int64 *)(v17 + 140);
        v33 = *(_WORD *)(v17 + 128);
        v63 = &v33;
        v65 = &v68;
        v67 = *(_QWORD *)(v17 + 144);
        LODWORD(v68) = *(unsigned __int16 *)(v17 + 152);
        v71 = v13 + 2;
        v73 = v13 + 4;
        v75 = (__int16 *)(v13 + 8);
        v77 = (__int64 *)(v13 + 10);
        v79 = v13 + 14;
        v81 = v13 + 6;
        v85 = v12 + 2;
        v87 = v12 + 4;
        v89 = v12 + 6;
        *(_QWORD *)&pDesc.Size = 16LL;
        *(_QWORD *)&v44.Size = 1LL;
        *(_WORD *)&v30[1] = 257;
        *(_QWORD *)&v45.Size = 1LL;
        v46.Ptr = v15;
        *(_QWORD *)&v46.Size = 16LL;
        v47 = v15;
        v48 = 16LL;
        v50 = 8LL;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 2LL;
        v66 = 2LL;
        HIDWORD(v68) = v16;
        v69 = (int *)v13;
        v70 = 2LL;
        v72 = 2LL;
        v74 = 2LL;
        v76 = 2LL;
        v78 = 2LL;
        v80 = 2LL;
        v82 = 2LL;
        v83 = v12;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v90 = 2LL;
        v30[0] = v12[10];
        v91 = v30;
        v32 = *((_WORD *)v12 + 4);
        v93 = &v32;
        v95 = &dword_1C02157E8;
        v97 = (char *)&qword_1C02157F4 + 4;
        v99 = &dword_1C02157FC;
        v101 = &qword_1C02157F4;
        v103 = (char *)v11 + 836;
        v105 = (__int16 *)(v17 + 92);
        v107 = (int *)(v13 + 12);
        v109 = (char *)(v17 + 84);
        v111 = (unsigned int *)(v17 + 96);
        v113 = (__int64 *)(v17 + 98);
        v115 = (char *)(v17 + 100);
        v117 = v17 + 94;
        v18 = *v6 & 0xFFFFFF;
        v92 = 1LL;
        v35 = v18;
        v119 = &v35;
        v19 = *v7 & 0xFFFFFF;
        v94 = 2LL;
        v34 = v19;
        v121 = &v34;
        v40[0] = *(_QWORD *)(v17 + 16);
        v123 = v40;
        v125 = &v38;
        v129 = &v39;
        v96 = 4LL;
        v98 = 4LL;
        v100 = 4LL;
        v102 = 4LL;
        v104 = 4LL;
        v106 = 2LL;
        v108 = 2LL;
        v110 = 4LL;
        v112 = 2LL;
        v114 = 2LL;
        v116 = 2LL;
        v118 = 2LL;
        v120 = 4LL;
        v122 = 4LL;
        v124 = 8LL;
        v126 = 4LL;
        v127 = v14;
        v128 = 8LL;
        v39 = 0x2000000LL;
        v130 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E7658, 0LL, 0LL, 0x30u, &pData);
      }
    }
  }
}
