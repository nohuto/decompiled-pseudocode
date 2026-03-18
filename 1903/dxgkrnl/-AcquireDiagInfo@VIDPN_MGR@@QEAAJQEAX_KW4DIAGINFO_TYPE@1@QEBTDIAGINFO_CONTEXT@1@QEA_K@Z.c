/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C02B2424 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C02B2560 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02B2AEC (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005570 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C00411D8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C00534A0 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00548A8 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B15F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02B1FC4 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B67FC (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6B24 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02B6DC8 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02B6EF0 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02B70DC (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BBFFC (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BC174 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02BE80C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BEBB4 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02BFE80 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C02C9DFC (MonitorSerializeMonitorPresentEvents.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(unsigned __int64 a1, void *a2, size_t a3, int a4, int *a5, size_t *a6)
{
  __int64 v6; // r14
  void *v8; // r13
  struct VIDPN_MGR *v9; // rdi
  __int64 v10; // rax
  size_t *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  DXGFASTMUTEX **v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // r14
  __int64 v83; // rax
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // r15
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  _QWORD *v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  int v112; // eax
  __int64 v113; // r8
  SIZE_T v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  void *v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rax
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rdx
  __int64 v138; // rcx
  _QWORD *v139; // rbx
  __int64 v140; // rax
  __int64 v141; // rax
  size_t v142; // rbx
  size_t v143; // r8
  _QWORD *v144; // rax
  __int64 v145; // [rsp+38h] [rbp-49h] BYREF
  __int64 v146; // [rsp+40h] [rbp-41h] BYREF
  __int64 v147; // [rsp+48h] [rbp-39h] BYREF
  __int128 v148; // [rsp+50h] [rbp-31h]
  void **v149; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v151; // [rsp+70h] [rbp-11h]
  int v152; // [rsp+78h] [rbp-9h]
  SIZE_T v153; // [rsp+80h] [rbp-1h] BYREF
  __int64 v154; // [rsp+88h] [rbp+7h] BYREF
  __int64 v155; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v156; // [rsp+98h] [rbp+17h] BYREF
  void *v157; // [rsp+E0h] [rbp+5Fh] BYREF

  v157 = a2;
  v6 = a4;
  v8 = a2;
  v9 = (struct VIDPN_MGR *)a1;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    v10 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v10 + 24) = v8;
    *(_QWORD *)(v10 + 32) = a3;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v147 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v149 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v151 = 0LL;
  v152 = 3;
  v148 = 0LL;
  if ( (int)v6 <= 7 )
  {
    if ( (_DWORD)v6 == 7 )
    {
      if ( a5 )
      {
        v36 = WdLogNewEntry5_WdAssertion(a1, a2);
        WdLogEvent5_WdAssertion(v36);
      }
      v14 = (_QWORD *)((char *)v9 + 288);
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v147);
LABEL_42:
      v23 = v15;
      if ( v15 < 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
        v39[3] = v14;
        v40 = *((_QWORD *)v9 + 1);
        if ( !v40 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v38, v37);
          WdLogEvent5_WdAssertion(v41);
          v40 = *((_QWORD *)v9 + 1);
        }
        v39[4] = *(_QWORD *)(v40 + 16);
        v39[5] = v23;
        goto LABEL_75;
      }
      goto LABEL_134;
    }
    if ( (_DWORD)v6 != 1 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( a5 )
        {
          v32 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2), a2);
          WdLogEvent5_WdAssertion(v32);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 72LL));
        v20 = *((_QWORD *)v9 + 9);
        v21 = DMMVIDEOPRESENTSOURCESET::Serialize(v20, &v147);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v31 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3), a2);
          WdLogEvent5_WdAssertion(v31);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v20 = *((_QWORD *)v9 + 10);
        v21 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v20);
        goto LABEL_23;
      }
      a1 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v6 != 4 )
      {
        a1 = (unsigned int)(v6 - 5);
        if ( (_DWORD)v6 != 5 )
        {
          if ( (_DWORD)v6 == 6 )
          {
            if ( a5 )
            {
              v13 = WdLogNewEntry5_WdAssertion(a1, a2);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 152);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 152, &v147);
            goto LABEL_42;
          }
LABEL_108:
          v108 = WdLogNewEntry5_WdError(a1, a2, a3);
          *(_QWORD *)(v108 + 24) = v6;
          WdLogEvent5_WdError(v108);
          LODWORD(v23) = -1073741811;
          goto LABEL_144;
        }
        if ( a5 )
        {
          v19 = WdLogNewEntry5_WdAssertion(a1, a2);
          WdLogEvent5_WdAssertion(v19);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v20 = *((_QWORD *)v9 + 10);
        v21 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v20, &v147);
LABEL_23:
        v23 = v21;
        if ( v21 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v22);
          v26[3] = v20;
          v27 = *((_QWORD *)v9 + 1);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v25, v24);
            WdLogEvent5_WdAssertion(v28);
            v27 = *((_QWORD *)v9 + 1);
          }
          v26[4] = *(_QWORD *)(v27 + 16);
          v26[5] = v23;
          WdLogEvent5_WdError(v26);
          if ( v20 )
            ReferenceCounted::Release((ReferenceCounted *)(v20 + 64), v29, v30);
          goto LABEL_144;
        }
        if ( v20 )
          ReferenceCounted::Release((ReferenceCounted *)(v20 + 64), v16, v22);
        goto LABEL_135;
      }
      goto LABEL_76;
    }
    if ( a5 )
    {
      v33 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1), a2);
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = VIDPN_MGR::AcquireDiagSummary(v9, &v147);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v132 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v132);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v156, (__int64)v9);
    v133 = DMMVIDPN::SerializeVidPns((char *)v9 + 216, &v147);
    v23 = v133;
    if ( v133 < 0 )
    {
      v139 = (_QWORD *)WdLogNewEntry5_WdError(v135, v134, v136);
      v139[3] = (char *)v9 + 216;
      v140 = *((_QWORD *)v9 + 1);
      if ( !v140 )
      {
        v141 = WdLogNewEntry5_WdAssertion(v138, v137);
        WdLogEvent5_WdAssertion(v141);
        v140 = *((_QWORD *)v9 + 1);
      }
      v139[4] = *(_QWORD *)(v140 + 16);
      v139[5] = v23;
      WdLogEvent5_WdError(v139);
      v55 = v156;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v156 + 40));
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v109 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v109);
    }
    v110 = *((_QWORD *)v9 + 1);
    v153 = 0LL;
    if ( !v110 )
    {
      v111 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v111);
      v110 = *((_QWORD *)v9 + 1);
    }
    v112 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v110 + 16), &v153, 0LL);
    v17 = 0x80000000LL;
    v23 = v112;
    if ( (int)(v112 + 0x80000000) < 0 || v112 == -1073741789 )
    {
      v114 = v153;
      if ( !v153 )
      {
        v115 = WdLogNewEntry5_WdAssertion(0x80000000LL, v16);
        WdLogEvent5_WdAssertion(v115);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v147, v114, v113);
      v119 = Src;
      if ( !Src )
      {
        v122 = WdLogNewEntry5_WdError(v117, v116, v118);
        *(_QWORD *)(v122 + 24) = v114;
        v123 = *((_QWORD *)v9 + 1);
        if ( !v123 )
        {
          v124 = WdLogNewEntry5_WdAssertion(v121, v120);
          WdLogEvent5_WdAssertion(v124);
          v123 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v122 + 32) = *(_QWORD *)(v123 + 16);
        WdLogEvent5_WdError(v122);
        LODWORD(v23) = -1073741801;
        goto LABEL_144;
      }
      v125 = *((_QWORD *)v9 + 1);
      if ( !v125 )
      {
        v126 = WdLogNewEntry5_WdAssertion(0LL, v116);
        WdLogEvent5_WdAssertion(v126);
        v125 = *((_QWORD *)v9 + 1);
      }
      v127 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v125 + 16), &v153, v119);
      v23 = v127;
      if ( v127 >= 0 )
        goto LABEL_135;
    }
    v128 = WdLogNewEntry5_WdError(v17, v16, v113);
    v130 = *((_QWORD *)v9 + 1);
    v39 = (_QWORD *)v128;
    if ( !v130 )
    {
      v131 = WdLogNewEntry5_WdAssertion(0LL, v129);
      WdLogEvent5_WdAssertion(v131);
      v130 = *((_QWORD *)v9 + 1);
    }
    v39[3] = *(_QWORD *)(v130 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v155, (__int64)v9);
    v146 = 0LL;
    v85 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v146);
    v23 = v85;
    if ( v85 < 0 )
    {
      v88 = WdLogNewEntry5_WdDmmEvent(v87, v86);
      *(_QWORD *)(v88 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v88);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v146, 0LL);
      v55 = v155;
      goto LABEL_106;
    }
    v89 = v146;
    v90 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v146 + 96), *a5) )
    {
      v95 = WdLogNewEntry5_WdDmmEvent(v92, v91);
      v96 = *((_QWORD *)v9 + 1);
      if ( !v96 )
      {
        v97 = WdLogNewEntry5_WdAssertion(v94, v93);
        WdLogEvent5_WdAssertion(v97);
        v96 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v95 + 24) = *(_QWORD *)(v96 + 16);
      WdLogEvent5_WdDmmEvent(v95);
      LODWORD(v23) = -1071774919;
      goto LABEL_105;
    }
    v98 = VIDPN_MGR::UnpinPathModalityFromSource(v9, (struct DMMVIDPNTOPOLOGY *const)(v89 + 96), v90);
    v23 = v98;
    if ( v98 < 0
      || ((_DWORD)v6 == 10
        ? (v102 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v89, (unsigned int)v90, &v147))
        : (v102 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v147)),
          v23 = v102,
          v102 < 0) )
    {
      v105 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99, v101);
      v105[3] = v90;
      v106 = *((_QWORD *)v9 + 1);
      if ( !v106 )
      {
        v107 = WdLogNewEntry5_WdAssertion(v104, v103);
        WdLogEvent5_WdAssertion(v107);
        v106 = *((_QWORD *)v9 + 1);
      }
      v105[4] = *(_QWORD *)(v106 + 16);
      v105[5] = v23;
      WdLogEvent5_WdError(v105);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v146, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v155 + 40));
    v8 = v157;
LABEL_134:
    v12 = a6;
    goto LABEL_135;
  }
  if ( (_DWORD)v6 == 12 )
  {
LABEL_76:
    if ( a5 )
    {
      v63 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v63);
    }
    v64 = *((_QWORD *)v9 + 11);
    v145 = 0LL;
    if ( v64 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v64 + 32));
      v65 = *((_QWORD *)v9 + 11);
    }
    else
    {
      v65 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v145, v65, a3);
    v69 = v145;
    if ( !v145 )
    {
      v72 = WdLogNewEntry5_WdWarning(v67, v66, v68);
      v73 = *((_QWORD *)v9 + 1);
      if ( !v73 )
      {
        v74 = WdLogNewEntry5_WdAssertion(v71, v70);
        WdLogEvent5_WdAssertion(v74);
        v73 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v72 + 24) = *(_QWORD *)(v73 + 16);
      WdLogEvent5_WdWarning(v72);
      LODWORD(v23) = -1071774884;
LABEL_89:
      auto_rc<DMMVIDPN const>::reset(&v145, 0LL, v75);
      goto LABEL_144;
    }
    v76 = DMMVIDPN::Serialize(v145, &v147);
    v23 = v76;
    if ( v76 < 0 )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77, v79);
      v82[3] = v69;
      v83 = *((_QWORD *)v9 + 1);
      if ( !v83 )
      {
        v84 = WdLogNewEntry5_WdAssertion(v81, v80);
        WdLogEvent5_WdAssertion(v84);
        v83 = *((_QWORD *)v9 + 1);
      }
      v82[4] = *(_QWORD *)(v83 + 16);
      v82[5] = v23;
      WdLogEvent5_WdError(v82);
      goto LABEL_89;
    }
    auto_rc<DMMVIDPN const>::reset(&v145, 0LL, v79);
LABEL_135:
    v142 = v151;
    if ( v8 )
    {
      v143 = v151;
      if ( a3 < v151 )
        v143 = a3;
      memmove(v8, Src, v143);
    }
    if ( v12 )
      *v12 = v142;
    if ( v142 <= a3 )
    {
      LODWORD(v23) = 0;
    }
    else
    {
      v144 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
      LODWORD(v23) = -2147483643;
      v144[3] = a3;
      v144[4] = v6;
      v144[5] = v151;
    }
    goto LABEL_144;
  }
  if ( (_DWORD)v6 != 13 )
  {
    if ( (_DWORD)v6 != 14 )
      goto LABEL_108;
    if ( a5 )
    {
      v42 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v42);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v154, (__int64)v9);
    LODWORD(v157) = 0x8000;
    v43 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v147, 0x8000uLL, 0LL, PagedPool);
    v23 = v43;
    if ( v43 >= 0 )
    {
      v48 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        v49 = WdLogNewEntry5_WdAssertion(v45, 0LL);
        WdLogEvent5_WdAssertion(v49);
        v48 = (unsigned __int8 *)Src;
      }
      v50 = (DXGFASTMUTEX **)*((_QWORD *)v9 + 63);
      if ( !v50 )
      {
        v51 = WdLogNewEntry5_WdError(0LL, v48, v46);
        *(_QWORD *)(v51 + 24) = Src;
        *(_QWORD *)(v51 + 32) = v9;
        WdLogEvent5_WdError(v51);
        LODWORD(v23) = -1073741436;
LABEL_63:
        v55 = v154;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v55 + 40));
        goto LABEL_144;
      }
      LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v50, v48, (unsigned int *)&v157, -1);
      if ( (int)v23 >= 0 )
      {
        v56 = (unsigned int)v157;
        if ( (unsigned int)v157 > v151 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v53, v52);
          WdLogEvent5_WdAssertion(v57);
        }
        v151 = v56;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v154 + 40));
        goto LABEL_135;
      }
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
      v47[3] = Src;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46);
      v47[3] = 0x8000LL;
      v47[5] = v23;
    }
    v47[4] = v9;
    WdLogEvent5_WdError(v47);
    goto LABEL_63;
  }
  if ( a5 )
  {
    v58 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v58);
  }
  v34 = VIDPN_MGR::AcquireDiagVersion(a1, &v147);
LABEL_70:
  v23 = v34;
  if ( v34 >= 0 )
    goto LABEL_135;
  v39 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v35);
  v61 = *((_QWORD *)v9 + 1);
  if ( !v61 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v60, v59);
    WdLogEvent5_WdAssertion(v62);
    v61 = *((_QWORD *)v9 + 1);
  }
  v39[3] = *(_QWORD *)(v61 + 16);
LABEL_74:
  v39[4] = v23;
LABEL_75:
  WdLogEvent5_WdError(v39);
LABEL_144:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v147);
  return (unsigned int)v23;
}
