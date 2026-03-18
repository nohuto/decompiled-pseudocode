/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B15F8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C00534A0 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00548A8 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B67FC (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6B24 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BBFFC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC174 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02BE80C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BEBB4 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BFE80 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02C9DFC (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  DMMVIDEOPRESENTTARGETSET *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _DWORD *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  _QWORD *v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rcx
  SIZE_T v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  void *v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // rax
  size_t v111; // r12
  SIZE_T v112; // rsi
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  _QWORD *v117; // rax
  char *v118; // rbx
  char *v119; // rcx
  char *v120; // rbx
  char *v121; // rbx
  char *v122; // rbx
  char *v123; // rbx
  char *v124; // rbx
  char *v125; // rbx
  char *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  _QWORD v130[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v131; // [rsp+48h] [rbp-C0h]
  SIZE_T v132; // [rsp+50h] [rbp-B8h]
  __int64 v133; // [rsp+58h] [rbp-B0h]
  _QWORD v134[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v135; // [rsp+80h] [rbp-88h]
  size_t v136; // [rsp+88h] [rbp-80h]
  int v137; // [rsp+90h] [rbp-78h]
  void **v138; // [rsp+98h] [rbp-70h] BYREF
  __int128 v139; // [rsp+A0h] [rbp-68h]
  void **v140; // [rsp+B0h] [rbp-58h]
  void *v141; // [rsp+B8h] [rbp-50h]
  size_t v142; // [rsp+C0h] [rbp-48h]
  int v143; // [rsp+C8h] [rbp-40h]
  void **v144; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v145; // [rsp+D8h] [rbp-30h]
  void **v146; // [rsp+E8h] [rbp-20h]
  void *v147; // [rsp+F0h] [rbp-18h]
  size_t v148; // [rsp+F8h] [rbp-10h]
  int v149; // [rsp+100h] [rbp-8h]
  void **v150; // [rsp+108h] [rbp+0h] BYREF
  __int128 v151; // [rsp+110h] [rbp+8h]
  void **v152; // [rsp+120h] [rbp+18h]
  void *v153; // [rsp+128h] [rbp+20h]
  size_t v154; // [rsp+130h] [rbp+28h]
  int v155; // [rsp+138h] [rbp+30h]
  void **v156; // [rsp+140h] [rbp+38h] BYREF
  __int128 v157; // [rsp+148h] [rbp+40h]
  void **v158; // [rsp+158h] [rbp+50h]
  void *v159; // [rsp+160h] [rbp+58h]
  size_t v160; // [rsp+168h] [rbp+60h]
  int v161; // [rsp+170h] [rbp+68h]
  void **v162; // [rsp+178h] [rbp+70h] BYREF
  __int128 v163; // [rsp+180h] [rbp+78h]
  void **v164; // [rsp+190h] [rbp+88h]
  void *v165; // [rsp+198h] [rbp+90h]
  size_t v166; // [rsp+1A0h] [rbp+98h]
  int v167; // [rsp+1A8h] [rbp+A0h]
  void **v168; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v169; // [rsp+1B8h] [rbp+B0h]
  void **v170; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  int v173; // [rsp+1E0h] [rbp+D8h]
  void **v174; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v175; // [rsp+1F0h] [rbp+E8h]
  void **v176; // [rsp+200h] [rbp+F8h]
  void *v177; // [rsp+208h] [rbp+100h]
  size_t v178; // [rsp+210h] [rbp+108h]
  int v179; // [rsp+218h] [rbp+110h]
  SIZE_T v180; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = a1[9];
  v168 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v170 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v169 = 0LL;
  v173 = 3;
  v9 = DMMVIDEOPRESENTSOURCESET::Serialize(v8, &v168);
  v13 = v9;
  if ( v9 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    v16 = a1[9];
    v17 = v14;
    *(_QWORD *)(v14 + 24) = v16;
    v18 = a1[1];
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v19);
      v18 = a1[1];
    }
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v18 + 16);
    *(_QWORD *)(v17 + 40) = v13;
    WdLogEvent5_WdError(v17);
    goto LABEL_68;
  }
  v20 = (DMMVIDEOPRESENTTARGETSET *)a1[10];
  v162 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v165 = 0LL;
  v164 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v163 = 0LL;
  v166 = 0LL;
  v167 = 3;
  v21 = DMMVIDEOPRESENTTARGETSET::Serialize(v20);
  v13 = v21;
  if ( v21 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22, v24);
    v27 = a1[10];
    v28 = v25;
    *(_QWORD *)(v25 + 24) = v27;
    v29 = a1[1];
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v30);
      v29 = a1[1];
    }
    *(_QWORD *)(v28 + 32) = *(_QWORD *)(v29 + 16);
    *(_QWORD *)(v28 + 40) = v13;
    WdLogEvent5_WdError(v28);
    goto LABEL_67;
  }
  v31 = a1[11];
  v134[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v134[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v135 = 0LL;
  v136 = 0LL;
  v137 = 3;
  *(_OWORD *)&v134[1] = 0LL;
  if ( v31 )
  {
    v32 = DMMVIDPN::Serialize(v31, v134);
    v13 = v32;
    if ( v32 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v34, v33, v35);
      v38 = a1[11];
      v39 = v36;
      *(_QWORD *)(v36 + 24) = v38;
      v40 = a1[1];
      if ( !v40 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v41);
        v40 = a1[1];
      }
      v42 = v39;
      *(_QWORD *)(v39 + 32) = *(_QWORD *)(v40 + 16);
      *(_QWORD *)(v39 + 40) = v13;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v43 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)v134, 0xCuLL, v24);
  v13 = v43;
  if ( v43 >= 0 )
  {
    v47 = v135;
    *(_QWORD *)v135 = qword_1C00A1FC0;
    v47[2] = dword_1C00A1FC8;
LABEL_22:
    v159 = 0LL;
    v156 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v160 = 0LL;
    v158 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v161 = 3;
    v157 = 0LL;
    v48 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 19, &v156);
    v13 = v48;
    if ( v48 < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49, v51);
      v54[3] = a1 + 19;
      v55 = a1[1];
      if ( !v55 )
      {
        v56 = WdLogNewEntry5_WdAssertion(v53, v52);
        WdLogEvent5_WdAssertion(v56);
        v55 = a1[1];
      }
      v54[4] = *(_QWORD *)(v55 + 16);
      v54[5] = v13;
      WdLogEvent5_WdError(v54);
      goto LABEL_65;
    }
    v57 = a1[10];
    v150 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v153 = 0LL;
    v152 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v151 = 0LL;
    v154 = 0LL;
    v155 = 3;
    v58 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v57, &v150);
    v13 = v58;
    if ( v58 < 0 )
    {
      v62 = WdLogNewEntry5_WdError(v60, v59, v61);
      v64 = a1[10];
      v65 = v62;
      *(_QWORD *)(v62 + 24) = v64;
      v66 = a1[1];
      if ( !v66 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v64, v63);
        WdLogEvent5_WdAssertion(v67);
        v66 = a1[1];
      }
      *(_QWORD *)(v65 + 32) = *(_QWORD *)(v66 + 16);
      *(_QWORD *)(v65 + 40) = v13;
      WdLogEvent5_WdError(v65);
      goto LABEL_64;
    }
    v147 = 0LL;
    v144 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v148 = 0LL;
    v146 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v149 = 3;
    v145 = 0LL;
    v68 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v144);
    v13 = v68;
    if ( v68 < 0 )
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v70, v69, v71);
      v74[3] = a1 + 36;
      v75 = a1[1];
      if ( !v75 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v73, v72);
        WdLogEvent5_WdAssertion(v76);
        v75 = a1[1];
      }
      v74[4] = *(_QWORD *)(v75 + 16);
      v74[5] = v13;
      WdLogEvent5_WdError(v74);
      goto LABEL_63;
    }
    v141 = 0LL;
    v138 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v142 = 0LL;
    v140 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v143 = 3;
    v139 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v180, (__int64)a1);
    v77 = DMMVIDPN::SerializeVidPns(a1 + 27, &v138);
    v13 = v77;
    if ( v77 < 0 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78, v80);
      v83[3] = a1 + 27;
      v84 = a1[1];
      if ( !v84 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v82, v81);
        WdLogEvent5_WdAssertion(v85);
        v84 = a1[1];
      }
      v83[4] = *(_QWORD *)(v84 + 16);
      v83[5] = v13;
      WdLogEvent5_WdError(v83);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v180 + 40));
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v180 + 40));
    v87 = a1[1];
    v174 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v176 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v177 = 0LL;
    v178 = 0LL;
    v179 = 3;
    v180 = 0LL;
    v175 = 0LL;
    if ( !v87 )
    {
      v88 = WdLogNewEntry5_WdAssertion(0LL, v86);
      WdLogEvent5_WdAssertion(v88);
      v87 = a1[1];
    }
    v89 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v87 + 16), &v180, 0LL);
    v92 = 0x80000000LL;
    v13 = v89;
    if ( (int)(v89 + 0x80000000) >= 0 && v89 != -1073741789 )
      goto LABEL_51;
    v93 = v180;
    if ( !v180 )
    {
      v94 = WdLogNewEntry5_WdAssertion(0x80000000LL, v90);
      WdLogEvent5_WdAssertion(v94);
    }
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v174, v93, v91);
    v98 = v177;
    if ( !v177 )
    {
      v13 = WdLogNewEntry5_WdError(v96, v95, v97);
      *(_QWORD *)(v13 + 24) = v93;
      v101 = a1[1];
      if ( !v101 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v100, v99);
        WdLogEvent5_WdAssertion(v102);
        v101 = a1[1];
      }
      *(_QWORD *)(v13 + 32) = *(_QWORD *)(v101 + 16);
      WdLogEvent5_WdError(v13);
      LODWORD(v13) = -1073741801;
      goto LABEL_61;
    }
    v103 = a1[1];
    if ( !v103 )
    {
      v104 = WdLogNewEntry5_WdAssertion(0LL, v95);
      WdLogEvent5_WdAssertion(v104);
      v103 = a1[1];
    }
    v105 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v103 + 16), &v180, v98);
    v13 = v105;
    if ( v105 < 0 )
    {
LABEL_51:
      v106 = WdLogNewEntry5_WdError(v92, v90, v91);
      v108 = a1[1];
      v109 = v106;
      if ( !v108 )
      {
        v110 = WdLogNewEntry5_WdAssertion(0LL, v107);
        WdLogEvent5_WdAssertion(v110);
        v108 = a1[1];
      }
      *(_QWORD *)(v109 + 24) = *(_QWORD *)(v108 + 16);
      *(_QWORD *)(v109 + 32) = v13;
      WdLogEvent5_WdError(v109);
      goto LABEL_61;
    }
    LODWORD(v133) = 3;
    v111 = v178;
    v130[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v112 = v166 + v136 + v160 + v154 + v148 + v178 + v142 + Size + 40;
    v130[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v131 = 0LL;
    v132 = 0LL;
    *(_OWORD *)&v130[1] = 0LL;
    v113 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v130, v112, 0LL, PagedPool);
    v13 = v113;
    if ( v113 >= 0 )
    {
      v13 = (__int64)v131;
      *((_DWORD *)v131 + 1) = v132;
      *(_WORD *)v13 = 20480;
      v118 = v131 + 40;
      v119 = v131 + 40;
      *(_DWORD *)(v13 + 8) = 40;
      memmove(v119, Src, Size);
      v120 = &v118[Size];
      *(_DWORD *)(v13 + 12) = (_DWORD)v120 - (_DWORD)v131;
      memmove(v120, v165, v166);
      v121 = &v120[v166];
      *(_DWORD *)(v13 + 16) = (_DWORD)v121 - (_DWORD)v131;
      memmove(v121, v135, v136);
      v122 = &v121[v136];
      *(_DWORD *)(v13 + 20) = (_DWORD)v122 - (_DWORD)v131;
      memmove(v122, v159, v160);
      v123 = &v122[v160];
      *(_DWORD *)(v13 + 24) = (_DWORD)v123 - (_DWORD)v131;
      memmove(v123, v153, v154);
      v124 = &v123[v154];
      *(_DWORD *)(v13 + 28) = (_DWORD)v124 - (_DWORD)v131;
      memmove(v124, v147, v148);
      v125 = &v124[v148];
      *(_DWORD *)(v13 + 32) = (_DWORD)v125 - (_DWORD)v131;
      memmove(v125, v141, v142);
      v126 = &v125[v142];
      *(_DWORD *)(v13 + 36) = (_DWORD)v126 - (_DWORD)v131;
      memmove(v126, v98, v111);
      LODWORD(v13) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v132, v131, (POOL_TYPE)v133);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = 0;
        goto LABEL_60;
      }
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v128, v127, v129);
      v117[3] = a2;
      v117[4] = v130;
    }
    else
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v115, v114, v116);
      v117[3] = v112;
      v117[4] = a1;
      v117[5] = v13;
    }
    WdLogEvent5_WdError(v117);
LABEL_60:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v130);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v174);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v138);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v144);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v150);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v156);
    goto LABEL_66;
  }
  v42 = WdLogNewEntry5_WdError(v45, v44, v46);
  *(_QWORD *)(v42 + 24) = 12LL;
  *(_QWORD *)(v42 + 32) = v13;
LABEL_20:
  WdLogEvent5_WdError(v42);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v134);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v162);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v168);
  return (unsigned int)v13;
}
