/*
 * XREFs of ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C003ACCC
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C003ABE0 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C003B2DC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C0088168 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
  struct _CIT_IMPACT_CONTEXT *v10; // rdi
  char *v11; // r15
  char *v12; // rsi
  char *v13; // r14
  ULONGLONG v14; // r9
  int v15; // r10d
  __int64 v16; // r11
  int v17; // eax
  int v18; // eax
  PVOID v19; // rax
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
  _QWORD v39[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C8h] [rbp-40h] BYREF
  ULONGLONG v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  _QWORD *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  char *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  _BYTE *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  _BYTE *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  int *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  _QWORD *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  __int16 *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int64 *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  __int64 v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h] BYREF
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  char *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  char *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  __int16 *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  __int64 *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  char *v78; // [rsp+1D8h] [rbp+D0h]
  __int64 v79; // [rsp+1E0h] [rbp+D8h] BYREF
  char *v80; // [rsp+1E8h] [rbp+E0h]
  __int64 v81; // [rsp+1F0h] [rbp+E8h]
  char *v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+200h] [rbp+F8h]
  char *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  char *v86; // [rsp+218h] [rbp+110h]
  __int64 v87; // [rsp+220h] [rbp+118h]
  _BYTE *v88; // [rsp+228h] [rbp+120h]
  __int64 v89; // [rsp+230h] [rbp+128h]
  __int16 *v90; // [rsp+238h] [rbp+130h]
  __int64 v91; // [rsp+240h] [rbp+138h]
  int *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  char *v94; // [rsp+258h] [rbp+150h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  unsigned int *v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  __int64 *v98; // [rsp+278h] [rbp+170h]
  __int64 v99; // [rsp+280h] [rbp+178h]
  _BYTE *v100; // [rsp+288h] [rbp+180h]
  __int64 v101; // [rsp+290h] [rbp+188h]
  __int16 *v102; // [rsp+298h] [rbp+190h]
  __int64 v103; // [rsp+2A0h] [rbp+198h]
  int *v104; // [rsp+2A8h] [rbp+1A0h]
  __int64 v105; // [rsp+2B0h] [rbp+1A8h]
  char *v106; // [rsp+2B8h] [rbp+1B0h]
  __int64 v107; // [rsp+2C0h] [rbp+1B8h]
  unsigned int *v108; // [rsp+2C8h] [rbp+1C0h]
  __int64 v109; // [rsp+2D0h] [rbp+1C8h]
  __int64 *v110; // [rsp+2D8h] [rbp+1D0h]
  __int64 v111; // [rsp+2E0h] [rbp+1D8h]
  char *v112; // [rsp+2E8h] [rbp+1E0h]
  __int64 v113; // [rsp+2F0h] [rbp+1E8h]
  __int64 v114; // [rsp+2F8h] [rbp+1F0h]
  __int64 v115; // [rsp+300h] [rbp+1F8h]
  int *v116; // [rsp+308h] [rbp+200h]
  __int64 v117; // [rsp+310h] [rbp+208h]
  int *v118; // [rsp+318h] [rbp+210h]
  __int64 v119; // [rsp+320h] [rbp+218h]
  _QWORD *v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+330h] [rbp+228h]
  __int64 *v122; // [rsp+338h] [rbp+230h]
  __int64 v123; // [rsp+340h] [rbp+238h]
  char *v124; // [rsp+348h] [rbp+240h]
  __int64 v125; // [rsp+350h] [rbp+248h]
  __int64 v126; // [rsp+358h] [rbp+250h]
  __int64 v127; // [rsp+360h] [rbp+258h]
  int *v128; // [rsp+368h] [rbp+260h]
  __int64 v129; // [rsp+370h] [rbp+268h]
  int *v130; // [rsp+378h] [rbp+270h]
  __int64 v131; // [rsp+380h] [rbp+278h]
  _QWORD *v132; // [rsp+388h] [rbp+280h]
  __int64 v133; // [rsp+390h] [rbp+288h]
  __int64 *v134; // [rsp+398h] [rbp+290h]
  __int64 v135; // [rsp+3A0h] [rbp+298h]
  char *v136; // [rsp+3A8h] [rbp+2A0h]
  __int64 v137; // [rsp+3B0h] [rbp+2A8h]

  v2 = a1;
  v4 = *(_QWORD *)a1;
  if ( *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 8) != v2
    || (v5 = (struct _CIT_INTERACTION_SUMMARY **)*((_QWORD *)v2 + 1), *v5 != v2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _CIT_INTERACTION_SUMMARY *)v4;
  v6 = (_DWORD *)((char *)v2 + 100);
  *(_QWORD *)(v4 + 8) = v5;
  v7 = (_DWORD *)((char *)v2 + 108);
  *((_QWORD *)v2 + 1) = v2;
  v8 = (struct _CIT_AUDIO_STATS **)v39;
  *(_QWORD *)v2 = v2;
  v9 = 2LL;
  v39[0] = (char *)v2 + 100;
  v39[1] = (char *)v2 + 108;
  do
  {
    if ( *((_BYTE *)*v8 + 3) )
      CitpAudioStatSnapDelta(*v8);
    ++v8;
    --v9;
  }
  while ( v9 );
  if ( ((qword_1C01D0CD4 & 0x10) == 0
     || *((_WORD *)v2 + 49) != 4
     || *((_WORD *)v2 + 46)
     && *((_WORD *)v2 + 47)
     && ((*((_BYTE *)v2 + 84) & 1) != 0 || (v19 = **(PVOID **)(*((_QWORD *)v2 + 3) + 8LL)) == 0LL || v19 != g_pepDwm))
    && ((qword_1C01D0CD4 & 0x20) == 0
     || (*((_WORD *)v2 + 49) & 0xFFF3) != 0
     || (*((_WORD *)v2 + 49) & 8) == 0
     || *((_WORD *)v2 + 45) >= 3u
     || *((_WORD *)v2 + 46) && *((_WORD *)v2 + 47)) )
  {
    v10 = qword_1C01D0CF0;
    v11 = (char *)v2 + 48;
    v12 = (char *)v2 + 32;
    LODWORD(v38) = a2 - *((_DWORD *)v2 + 19);
    v13 = (char *)qword_1C01D0CF0 + 776;
    v40[0] = *((_QWORD *)qword_1C01D0CF0 + 100);
    v37 = a2 - *((_DWORD *)qword_1C01D0CF0 + 202);
    ++*((_QWORD *)qword_1C01D0CF0 + 97);
    if ( (*((_BYTE *)v2 + 84) & 1) != 0 )
    {
      v20 = *((_QWORD *)v2 + 3);
      v21 = &word_1C01944BC;
      v22 = &word_1C01944BC;
      v23 = &word_1C01944BC;
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
        TlgCreateWsz(&v43, v21);
        TlgCreateWsz(&v44, v22);
        TlgCreateWsz(&v45, v23);
        v47 = 4LL;
        v48 = (_QWORD *)(v26 + 64);
        v46 = v26 + 68;
        v50 = &v31;
        v49 = 4LL;
        v52 = v30;
        v54 = &v30[1];
        v56 = (int *)(v27 + 60);
        v58 = v27 + 60;
        v60 = v40;
        v62 = (__int16 *)&v37;
        v64 = (__int64 *)(v27 + 120);
        v66 = v27 + 116;
        v34 = *(unsigned __int16 *)(v27 + 86);
        v68 = &v34;
        v70 = (char *)(v27 + 128);
        v72 = (char *)(v27 + 136);
        v32 = *(_WORD *)(v27 + 124);
        v74 = &v32;
        v76 = &v79;
        v78 = *(char **)(v27 + 144);
        v79 = *(unsigned __int16 *)(v27 + 152);
        v82 = v12 + 2;
        v84 = v12 + 4;
        v31 = 1;
        v51 = 1LL;
        *(_WORD *)v30 = 257;
        v53 = 1LL;
        v55 = 1LL;
        v57 = 16LL;
        v59 = 16LL;
        v61 = 8LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 2LL;
        v77 = 2LL;
        v80 = v12;
        v81 = 2LL;
        v83 = 2LL;
        v85 = 2LL;
        v87 = 2LL;
        v86 = v12 + 8;
        v89 = 2LL;
        v88 = v12 + 10;
        v90 = (__int16 *)(v12 + 6);
        v94 = v11 + 2;
        v96 = (unsigned int *)(v11 + 4);
        v98 = (__int64 *)(v11 + 6);
        v30[2] = v11[10];
        v100 = &v30[2];
        v33 = *((_WORD *)v11 + 4);
        v102 = &v33;
        v104 = &dword_1C01D0CC8;
        v106 = (char *)&qword_1C01D0CD4 + 4;
        v108 = &dword_1C01D0CDC;
        v110 = &qword_1C01D0CD4;
        v112 = (char *)v10 + 812;
        v114 = v27 + 88;
        v116 = (int *)(v12 + 12);
        v118 = (int *)(v27 + 80);
        v120 = (_QWORD *)(v27 + 92);
        v122 = (__int64 *)(v27 + 94);
        v124 = (char *)(v27 + 96);
        v126 = v27 + 90;
        v28 = *(_DWORD *)(v27 + 100) & 0xFFFFFF;
        v91 = 2LL;
        v35 = v28;
        v128 = &v35;
        v29 = *(_DWORD *)(v27 + 108) & 0xFFFFFF;
        v92 = (int *)v11;
        v36 = v29;
        v130 = &v36;
        v39[0] = *(_QWORD *)(v27 + 16);
        v93 = 2LL;
        v95 = 2LL;
        v97 = 2LL;
        v99 = 2LL;
        v101 = 1LL;
        v103 = 2LL;
        v105 = 4LL;
        v107 = 4LL;
        v109 = 4LL;
        v111 = 4LL;
        v113 = 4LL;
        v115 = 2LL;
        v117 = 2LL;
        v119 = 4LL;
        v121 = 2LL;
        v123 = 2LL;
        v125 = 2LL;
        v127 = 2LL;
        v129 = 4LL;
        v131 = 4LL;
        v133 = 8LL;
        v132 = v39;
        v134 = &v38;
        v135 = 4LL;
        v136 = v13;
        v137 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A2873, 0LL, 0LL, 0x34u, &pData);
      }
    }
    else if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000800uLL) )
      {
        pDesc.Ptr = v14;
        v43.Ptr = (ULONGLONG)&v30[2];
        v44.Ptr = (ULONGLONG)&v30[1];
        v48 = v40;
        v50 = (char *)&v37;
        v52 = (_BYTE *)(v16 + 120);
        v54 = (_BYTE *)(v16 + 116);
        v36 = *(unsigned __int16 *)(v16 + 86);
        v56 = &v36;
        v58 = v16 + 128;
        v60 = (_QWORD *)(v16 + 136);
        v33 = *(_WORD *)(v16 + 124);
        v62 = &v33;
        v64 = &v67;
        v66 = *(_QWORD *)(v16 + 144);
        LODWORD(v67) = *(unsigned __int16 *)(v16 + 152);
        v70 = v12 + 2;
        v72 = v12 + 4;
        v74 = (__int16 *)(v12 + 8);
        v76 = (__int64 *)(v12 + 10);
        v78 = v12 + 6;
        v82 = v11 + 2;
        v84 = v11 + 4;
        v86 = v11 + 6;
        v30[0] = v11[10];
        *(_QWORD *)&pDesc.Size = 16LL;
        *(_QWORD *)&v43.Size = 1LL;
        *(_WORD *)&v30[1] = 257;
        *(_QWORD *)&v44.Size = 1LL;
        v45.Ptr = v14;
        *(_QWORD *)&v45.Size = 16LL;
        v46 = v14;
        v47 = 16LL;
        v49 = 8LL;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 2LL;
        v65 = 2LL;
        HIDWORD(v67) = v15;
        v68 = (int *)v12;
        v69 = 2LL;
        v71 = 2LL;
        v73 = 2LL;
        v75 = 2LL;
        v77 = 2LL;
        v79 = 2LL;
        v80 = v11;
        v81 = 2LL;
        v83 = 2LL;
        v85 = 2LL;
        v87 = 2LL;
        v88 = v30;
        v32 = *((_WORD *)v11 + 4);
        v90 = &v32;
        v92 = &dword_1C01D0CC8;
        v94 = (char *)&qword_1C01D0CD4 + 4;
        v96 = &dword_1C01D0CDC;
        v98 = &qword_1C01D0CD4;
        v100 = (char *)v10 + 812;
        v102 = (__int16 *)(v16 + 88);
        v104 = (int *)(v12 + 12);
        v106 = (char *)(v16 + 80);
        v108 = (unsigned int *)(v16 + 92);
        v110 = (__int64 *)(v16 + 94);
        v112 = (char *)(v16 + 96);
        v114 = v16 + 90;
        v17 = *v6 & 0xFFFFFF;
        v89 = 1LL;
        v35 = v17;
        v116 = &v35;
        v18 = *v7 & 0xFFFFFF;
        v91 = 2LL;
        v34 = v18;
        v118 = &v34;
        v39[0] = *(_QWORD *)(v16 + 16);
        v120 = v39;
        v122 = &v38;
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 4LL;
        v103 = 2LL;
        v105 = 2LL;
        v107 = 4LL;
        v109 = 2LL;
        v111 = 2LL;
        v113 = 2LL;
        v115 = 2LL;
        v117 = 4LL;
        v119 = 4LL;
        v121 = 8LL;
        v123 = 4LL;
        v124 = v13;
        v125 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01A245E, 0LL, 0LL, 0x2Eu, &pData);
      }
    }
  }
}
