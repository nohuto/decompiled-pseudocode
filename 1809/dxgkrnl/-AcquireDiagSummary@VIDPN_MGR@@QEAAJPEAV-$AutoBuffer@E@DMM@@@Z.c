/*
 * XREFs of ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C004C250 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D64C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027E7C0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027EAE8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283CF0 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283E68 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C028649C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0286844 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0287B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0291598 (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagSummary(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  DMMVIDEOPRESENTTARGETSET *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  _QWORD *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  SIZE_T v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  void *v69; // r15
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rax
  size_t v80; // r12
  SIZE_T v81; // rsi
  int v82; // eax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  char *v85; // rbx
  char *v86; // rcx
  char *v87; // rbx
  char *v88; // rbx
  char *v89; // rbx
  char *v90; // rbx
  char *v91; // rbx
  char *v92; // rbx
  char *v93; // rbx
  __int64 v94; // rcx
  _QWORD v95[4]; // [rsp+28h] [rbp-E0h] BYREF
  char *v96; // [rsp+48h] [rbp-C0h]
  SIZE_T v97; // [rsp+50h] [rbp-B8h]
  __int64 v98; // [rsp+58h] [rbp-B0h]
  _QWORD v99[4]; // [rsp+60h] [rbp-A8h] BYREF
  void *v100; // [rsp+80h] [rbp-88h]
  size_t v101; // [rsp+88h] [rbp-80h]
  int v102; // [rsp+90h] [rbp-78h]
  void **v103; // [rsp+98h] [rbp-70h] BYREF
  __int128 v104; // [rsp+A0h] [rbp-68h]
  void **v105; // [rsp+B0h] [rbp-58h]
  void *v106; // [rsp+B8h] [rbp-50h]
  size_t v107; // [rsp+C0h] [rbp-48h]
  int v108; // [rsp+C8h] [rbp-40h]
  void **v109; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v110; // [rsp+D8h] [rbp-30h]
  void **v111; // [rsp+E8h] [rbp-20h]
  void *v112; // [rsp+F0h] [rbp-18h]
  size_t v113; // [rsp+F8h] [rbp-10h]
  int v114; // [rsp+100h] [rbp-8h]
  void **v115; // [rsp+108h] [rbp+0h] BYREF
  __int128 v116; // [rsp+110h] [rbp+8h]
  void **v117; // [rsp+120h] [rbp+18h]
  void *v118; // [rsp+128h] [rbp+20h]
  size_t v119; // [rsp+130h] [rbp+28h]
  int v120; // [rsp+138h] [rbp+30h]
  void **v121; // [rsp+140h] [rbp+38h] BYREF
  __int128 v122; // [rsp+148h] [rbp+40h]
  void **v123; // [rsp+158h] [rbp+50h]
  void *v124; // [rsp+160h] [rbp+58h]
  size_t v125; // [rsp+168h] [rbp+60h]
  int v126; // [rsp+170h] [rbp+68h]
  void **v127; // [rsp+178h] [rbp+70h] BYREF
  __int128 v128; // [rsp+180h] [rbp+78h]
  void **v129; // [rsp+190h] [rbp+88h]
  void *v130; // [rsp+198h] [rbp+90h]
  size_t v131; // [rsp+1A0h] [rbp+98h]
  int v132; // [rsp+1A8h] [rbp+A0h]
  void **v133; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v134; // [rsp+1B8h] [rbp+B0h]
  void **v135; // [rsp+1C8h] [rbp+C0h]
  void *Src; // [rsp+1D0h] [rbp+C8h]
  size_t Size; // [rsp+1D8h] [rbp+D0h]
  int v138; // [rsp+1E0h] [rbp+D8h]
  void **v139; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v140; // [rsp+1F0h] [rbp+E8h]
  void **v141; // [rsp+200h] [rbp+F8h]
  void *v142; // [rsp+208h] [rbp+100h]
  size_t v143; // [rsp+210h] [rbp+108h]
  int v144; // [rsp+218h] [rbp+110h]
  SIZE_T v145; // [rsp+260h] [rbp+158h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = a1[9];
  v133 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  Src = 0LL;
  v135 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  Size = 0LL;
  v134 = 0LL;
  v138 = 3;
  v8 = DMMVIDEOPRESENTSOURCESET::Serialize(v7, &v133);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    v12 = a1[9];
    v13 = v11;
    *(_QWORD *)(v11 + 24) = v12;
    v14 = a1[1];
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v15);
      v14 = a1[1];
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v14 + 16);
    *(_QWORD *)(v13 + 40) = v10;
    WdLogEvent5_WdError(v13);
    goto LABEL_68;
  }
  v16 = (DMMVIDEOPRESENTTARGETSET *)a1[10];
  v127 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v130 = 0LL;
  v129 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v128 = 0LL;
  v131 = 0LL;
  v132 = 3;
  v17 = DMMVIDEOPRESENTTARGETSET::Serialize(v16);
  v10 = v17;
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v18);
    v20 = a1[10];
    v21 = v19;
    *(_QWORD *)(v19 + 24) = v20;
    v22 = a1[1];
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v23);
      v22 = a1[1];
    }
    *(_QWORD *)(v21 + 32) = *(_QWORD *)(v22 + 16);
    *(_QWORD *)(v21 + 40) = v10;
    WdLogEvent5_WdError(v21);
    goto LABEL_67;
  }
  v24 = a1[11];
  v99[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v99[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v100 = 0LL;
  v101 = 0LL;
  v102 = 3;
  *(_OWORD *)&v99[1] = 0LL;
  if ( v24 )
  {
    v25 = DMMVIDPN::Serialize(v24, v99);
    v10 = v25;
    if ( v25 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v26);
      v28 = a1[11];
      v29 = v27;
      *(_QWORD *)(v27 + 24) = v28;
      v30 = a1[1];
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v31);
        v30 = a1[1];
      }
      v32 = v29;
      *(_QWORD *)(v29 + 32) = *(_QWORD *)(v30 + 16);
      *(_QWORD *)(v29 + 40) = v10;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v33 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)v99, 0xCuLL);
  v10 = v33;
  if ( v33 >= 0 )
  {
    v35 = v100;
    *(_QWORD *)v100 = qword_1C008DFB0;
    v35[2] = dword_1C008DFB8;
LABEL_22:
    v124 = 0LL;
    v121 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v125 = 0LL;
    v123 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v126 = 3;
    v122 = 0LL;
    v36 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(a1 + 19, &v121);
    v10 = v36;
    if ( v36 < 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v39[3] = a1 + 19;
      v40 = a1[1];
      if ( !v40 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38);
        WdLogEvent5_WdAssertion(v41);
        v40 = a1[1];
      }
      v39[4] = *(_QWORD *)(v40 + 16);
      v39[5] = v10;
      WdLogEvent5_WdError(v39);
      goto LABEL_65;
    }
    v42 = a1[10];
    v115 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v118 = 0LL;
    v117 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v116 = 0LL;
    v119 = 0LL;
    v120 = 3;
    v43 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v42, &v115);
    v10 = v43;
    if ( v43 < 0 )
    {
      v45 = WdLogNewEntry5_WdError(v44);
      v46 = a1[10];
      v47 = v45;
      *(_QWORD *)(v45 + 24) = v46;
      v48 = a1[1];
      if ( !v48 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46);
        WdLogEvent5_WdAssertion(v49);
        v48 = a1[1];
      }
      *(_QWORD *)(v47 + 32) = *(_QWORD *)(v48 + 16);
      *(_QWORD *)(v47 + 40) = v10;
      WdLogEvent5_WdError(v47);
      goto LABEL_64;
    }
    v112 = 0LL;
    v109 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v113 = 0LL;
    v111 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v114 = 3;
    v110 = 0LL;
    v50 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(a1 + 36, &v109);
    v10 = v50;
    if ( v50 < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v51);
      v53[3] = a1 + 36;
      v54 = a1[1];
      if ( !v54 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v52);
        WdLogEvent5_WdAssertion(v55);
        v54 = a1[1];
      }
      v53[4] = *(_QWORD *)(v54 + 16);
      v53[5] = v10;
      WdLogEvent5_WdError(v53);
      goto LABEL_63;
    }
    v106 = 0LL;
    v103 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v107 = 0LL;
    v105 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v108 = 3;
    v104 = 0LL;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v145, (__int64)a1);
    v56 = DMMVIDPN::SerializeVidPns(a1 + 27, &v103);
    v10 = v56;
    if ( v56 < 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v57);
      v59[3] = a1 + 27;
      v60 = a1[1];
      if ( !v60 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v58);
        WdLogEvent5_WdAssertion(v61);
        v60 = a1[1];
      }
      v59[4] = *(_QWORD *)(v60 + 16);
      v59[5] = v10;
      WdLogEvent5_WdError(v59);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v145 + 40));
      goto LABEL_62;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v145 + 40));
    v62 = a1[1];
    v139 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v141 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v142 = 0LL;
    v143 = 0LL;
    v144 = 3;
    v145 = 0LL;
    v140 = 0LL;
    if ( !v62 )
    {
      v63 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v63);
      v62 = a1[1];
    }
    v64 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v62 + 16), &v145, 0LL);
    v65 = 0x80000000LL;
    v10 = v64;
    if ( (int)(v64 + 0x80000000) >= 0 && v64 != -1073741789 )
      goto LABEL_51;
    v66 = v145;
    if ( !v145 )
    {
      v67 = WdLogNewEntry5_WdAssertion(0x80000000LL);
      WdLogEvent5_WdAssertion(v67);
    }
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v139, v66);
    v69 = v142;
    if ( !v142 )
    {
      v10 = WdLogNewEntry5_WdError(v68);
      *(_QWORD *)(v10 + 24) = v66;
      v71 = a1[1];
      if ( !v71 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v70);
        WdLogEvent5_WdAssertion(v72);
        v71 = a1[1];
      }
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(v71 + 16);
      WdLogEvent5_WdError(v10);
      LODWORD(v10) = -1073741801;
      goto LABEL_61;
    }
    v73 = a1[1];
    if ( !v73 )
    {
      v74 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v74);
      v73 = a1[1];
    }
    v75 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v73 + 16), &v145, v69);
    v10 = v75;
    if ( v75 < 0 )
    {
LABEL_51:
      v76 = WdLogNewEntry5_WdError(v65);
      v77 = a1[1];
      v78 = v76;
      if ( !v77 )
      {
        v79 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v79);
        v77 = a1[1];
      }
      *(_QWORD *)(v78 + 24) = *(_QWORD *)(v77 + 16);
      *(_QWORD *)(v78 + 32) = v10;
      WdLogEvent5_WdError(v78);
      goto LABEL_61;
    }
    LODWORD(v98) = 3;
    v80 = v143;
    v95[0] = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v81 = v131 + v101 + v125 + v119 + v113 + v143 + v107 + Size + 40;
    v95[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v96 = 0LL;
    v97 = 0LL;
    *(_OWORD *)&v95[1] = 0LL;
    v82 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)v95, v81, 0LL, PagedPool);
    v10 = v82;
    if ( v82 >= 0 )
    {
      v10 = (__int64)v96;
      *((_DWORD *)v96 + 1) = v97;
      *(_WORD *)v10 = 20480;
      v85 = v96 + 40;
      v86 = v96 + 40;
      *(_DWORD *)(v10 + 8) = 40;
      memmove(v86, Src, Size);
      v87 = &v85[Size];
      *(_DWORD *)(v10 + 12) = (_DWORD)v87 - (_DWORD)v96;
      memmove(v87, v130, v131);
      v88 = &v87[v131];
      *(_DWORD *)(v10 + 16) = (_DWORD)v88 - (_DWORD)v96;
      memmove(v88, v100, v101);
      v89 = &v88[v101];
      *(_DWORD *)(v10 + 20) = (_DWORD)v89 - (_DWORD)v96;
      memmove(v89, v124, v125);
      v90 = &v89[v125];
      *(_DWORD *)(v10 + 24) = (_DWORD)v90 - (_DWORD)v96;
      memmove(v90, v118, v119);
      v91 = &v90[v119];
      *(_DWORD *)(v10 + 28) = (_DWORD)v91 - (_DWORD)v96;
      memmove(v91, v112, v113);
      v92 = &v91[v113];
      *(_DWORD *)(v10 + 32) = (_DWORD)v92 - (_DWORD)v96;
      memmove(v92, v106, v107);
      v93 = &v92[v107];
      *(_DWORD *)(v10 + 36) = (_DWORD)v93 - (_DWORD)v96;
      memmove(v93, v69, v80);
      LODWORD(v10) = DMM::AutoBuffer<unsigned char>::Initialize(a2, v97, v96, (POOL_TYPE)v98);
      if ( (int)v10 >= 0 )
      {
        LODWORD(v10) = 0;
        goto LABEL_60;
      }
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v94);
      v84[3] = a2;
      v84[4] = v95;
    }
    else
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdError(v83);
      v84[3] = v81;
      v84[4] = a1;
      v84[5] = v10;
    }
    WdLogEvent5_WdError(v84);
LABEL_60:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v95);
LABEL_61:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v139);
LABEL_62:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v103);
LABEL_63:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v109);
LABEL_64:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v115);
LABEL_65:
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v121);
    goto LABEL_66;
  }
  v32 = WdLogNewEntry5_WdError(v34);
  *(_QWORD *)(v32 + 24) = 12LL;
  *(_QWORD *)(v32 + 32) = v10;
LABEL_20:
  WdLogEvent5_WdError(v32);
LABEL_66:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v99);
LABEL_67:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v127);
LABEL_68:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v133);
  return (unsigned int)v10;
}
