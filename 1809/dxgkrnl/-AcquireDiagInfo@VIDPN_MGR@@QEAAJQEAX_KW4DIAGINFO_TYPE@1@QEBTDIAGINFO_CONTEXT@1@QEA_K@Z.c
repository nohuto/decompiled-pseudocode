/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02786B8
 * Callers:
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x1C027A000 (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C027A764 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z @ 0x1C0001210 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C004C250 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D64C (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02791D4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0279BA0 (-AcquireDiagVersion@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027E7C0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C027EAE8 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C027ED8C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C027EEB4 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C027F0A0 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283CF0 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283E68 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C028649C (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0286844 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0287B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     MonitorSerializeMonitorPresentEvents @ 0x1C0291598 (MonitorSerializeMonitorPresentEvents.c)
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
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rcx
  _QWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  DXGDIAGNOSTICS *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  _QWORD *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  int v97; // eax
  SIZE_T v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rcx
  void *v101; // rbx
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rcx
  _QWORD *v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rax
  size_t v119; // rbx
  size_t v120; // r8
  _QWORD *v121; // rax
  __int64 v122; // [rsp+38h] [rbp-49h] BYREF
  __int64 v123; // [rsp+40h] [rbp-41h] BYREF
  __int64 v124; // [rsp+48h] [rbp-39h] BYREF
  __int128 v125; // [rsp+50h] [rbp-31h]
  void **v126; // [rsp+60h] [rbp-21h]
  void *Src; // [rsp+68h] [rbp-19h]
  unsigned __int64 v128; // [rsp+70h] [rbp-11h]
  int v129; // [rsp+78h] [rbp-9h]
  SIZE_T v130; // [rsp+80h] [rbp-1h] BYREF
  __int64 v131; // [rsp+88h] [rbp+7h] BYREF
  __int64 v132; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v133; // [rsp+98h] [rbp+17h] BYREF
  void *v134; // [rsp+E0h] [rbp+5Fh] BYREF

  v134 = a2;
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
    v10 = WdLogNewEntry5_WdError(a1);
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
  v124 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v126 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v128 = 0LL;
  v129 = 3;
  v125 = 0LL;
  if ( (int)v6 <= 7 )
  {
    if ( (_DWORD)v6 == 7 )
    {
      if ( a5 )
      {
        v32 = WdLogNewEntry5_WdAssertion(a1);
        WdLogEvent5_WdAssertion(v32);
      }
      v14 = (_QWORD *)((char *)v9 + 288);
      v15 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)v9 + 288, &v124);
LABEL_42:
      v23 = v15;
      if ( v15 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v34[3] = v14;
        v35 = *((_QWORD *)v9 + 1);
        if ( !v35 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v36);
          v35 = *((_QWORD *)v9 + 1);
        }
        v34[4] = *(_QWORD *)(v35 + 16);
        v34[5] = v23;
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
          v29 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 2));
          WdLogEvent5_WdAssertion(v29);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 9) + 72LL));
        v21 = *((_QWORD *)v9 + 9);
        v22 = DMMVIDEOPRESENTSOURCESET::Serialize(v21, &v124);
        goto LABEL_23;
      }
      if ( (_DWORD)v6 == 3 )
      {
        if ( a5 )
        {
          v28 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 3));
          WdLogEvent5_WdAssertion(v28);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v21 = *((_QWORD *)v9 + 10);
        v22 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v21);
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
              v13 = WdLogNewEntry5_WdAssertion(a1);
              WdLogEvent5_WdAssertion(v13);
            }
            v14 = (_QWORD *)((char *)v9 + 152);
            v15 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)v9 + 152, &v124);
            goto LABEL_42;
          }
LABEL_108:
          v93 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v93 + 24) = v6;
          WdLogEvent5_WdError(v93);
          LODWORD(v23) = -1073741811;
          goto LABEL_144;
        }
        if ( a5 )
        {
          v20 = WdLogNewEntry5_WdAssertion(a1);
          WdLogEvent5_WdAssertion(v20);
        }
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v9 + 10) + 72LL));
        v21 = *((_QWORD *)v9 + 10);
        v22 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v21, &v124);
LABEL_23:
        v23 = v22;
        if ( v22 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v25[3] = v21;
          v26 = *((_QWORD *)v9 + 1);
          if ( !v26 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v27);
            v26 = *((_QWORD *)v9 + 1);
          }
          v25[4] = *(_QWORD *)(v26 + 16);
          v25[5] = v23;
          WdLogEvent5_WdError(v25);
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
          goto LABEL_144;
        }
        if ( v21 )
          ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
        goto LABEL_135;
      }
      goto LABEL_76;
    }
    if ( a5 )
    {
      v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v6 - 1));
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = VIDPN_MGR::AcquireDiagSummary(v9, &v124);
    goto LABEL_70;
  }
  if ( (_DWORD)v6 == 8 )
  {
    if ( a5 )
    {
      v112 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v112);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v133, (__int64)v9);
    v113 = DMMVIDPN::SerializeVidPns((char *)v9 + 216, &v124);
    v23 = v113;
    if ( v113 < 0 )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(v114);
      v116[3] = (char *)v9 + 216;
      v117 = *((_QWORD *)v9 + 1);
      if ( !v117 )
      {
        v118 = WdLogNewEntry5_WdAssertion(v115);
        WdLogEvent5_WdAssertion(v118);
        v117 = *((_QWORD *)v9 + 1);
      }
      v116[4] = *(_QWORD *)(v117 + 16);
      v116[5] = v23;
      WdLogEvent5_WdError(v116);
      v46 = v133;
      goto LABEL_106;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v133 + 40));
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 9 )
  {
    if ( a5 )
    {
      v94 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v94);
    }
    v95 = *((_QWORD *)v9 + 1);
    v130 = 0LL;
    if ( !v95 )
    {
      v96 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v96);
      v95 = *((_QWORD *)v9 + 1);
    }
    v97 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v95 + 16), &v130, 0LL);
    v17 = 0x80000000LL;
    v23 = v97;
    if ( (int)(v97 + 0x80000000) < 0 || v97 == -1073741789 )
    {
      v98 = v130;
      if ( !v130 )
      {
        v99 = WdLogNewEntry5_WdAssertion(0x80000000LL);
        WdLogEvent5_WdAssertion(v99);
      }
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v124, v98);
      v101 = Src;
      if ( !Src )
      {
        v103 = WdLogNewEntry5_WdError(v100);
        *(_QWORD *)(v103 + 24) = v98;
        v104 = *((_QWORD *)v9 + 1);
        if ( !v104 )
        {
          v105 = WdLogNewEntry5_WdAssertion(v102);
          WdLogEvent5_WdAssertion(v105);
          v104 = *((_QWORD *)v9 + 1);
        }
        *(_QWORD *)(v103 + 32) = *(_QWORD *)(v104 + 16);
        WdLogEvent5_WdError(v103);
        LODWORD(v23) = -1073741801;
        goto LABEL_144;
      }
      v106 = *((_QWORD *)v9 + 1);
      if ( !v106 )
      {
        v107 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v107);
        v106 = *((_QWORD *)v9 + 1);
      }
      v108 = MonitorSerializeMonitorPresentEvents(*(_QWORD *)(v106 + 16), &v130, v101);
      v23 = v108;
      if ( v108 >= 0 )
        goto LABEL_135;
    }
    v109 = WdLogNewEntry5_WdError(v17);
    v110 = *((_QWORD *)v9 + 1);
    v34 = (_QWORD *)v109;
    if ( !v110 )
    {
      v111 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v111);
      v110 = *((_QWORD *)v9 + 1);
    }
    v34[3] = *(_QWORD *)(v110 + 16);
    goto LABEL_74;
  }
  if ( (int)v6 <= 11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v132, (__int64)v9);
    v123 = 0LL;
    v70 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, &v123);
    v23 = v70;
    if ( v70 < 0 )
    {
      v75 = WdLogNewEntry5_WdDmmEvent(v72, v71, v73, v74);
      *(_QWORD *)(v75 + 24) = v23;
      WdLogEvent5_WdDmmEvent(v75);
LABEL_105:
      auto_rc<DMMVIDPN>::reset(&v123, 0LL);
      v46 = v132;
      goto LABEL_106;
    }
    v76 = v123;
    v77 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v123 + 96), *a5) )
    {
      v83 = WdLogNewEntry5_WdDmmEvent(v79, v78, v80, v81);
      v84 = *((_QWORD *)v9 + 1);
      if ( !v84 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v82);
        WdLogEvent5_WdAssertion(v85);
        v84 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v83 + 24) = *(_QWORD *)(v84 + 16);
      WdLogEvent5_WdDmmEvent(v83);
      LODWORD(v23) = -1071774919;
      goto LABEL_105;
    }
    v86 = VIDPN_MGR::UnpinPathModalityFromSource(v9, (struct DMMVIDPNTOPOLOGY *const)(v76 + 96), v77);
    v23 = v86;
    if ( v86 < 0
      || ((_DWORD)v6 == 10
        ? (v88 = VIDPN_MGR::_SerializeVidPnSourceModeSet(v9, v76, (unsigned int)v77, &v124))
        : (v88 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(v9, (__int64)&v124)),
          v23 = v88,
          v88 < 0) )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v90[3] = v77;
      v91 = *((_QWORD *)v9 + 1);
      if ( !v91 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v89);
        WdLogEvent5_WdAssertion(v92);
        v91 = *((_QWORD *)v9 + 1);
      }
      v90[4] = *(_QWORD *)(v91 + 16);
      v90[5] = v23;
      WdLogEvent5_WdError(v90);
      goto LABEL_105;
    }
    auto_rc<DMMVIDPN>::reset(&v123, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v132 + 40));
    v8 = v134;
LABEL_134:
    v12 = a6;
    goto LABEL_135;
  }
  if ( (_DWORD)v6 == 12 )
  {
LABEL_76:
    if ( a5 )
    {
      v53 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v53);
    }
    v54 = *((_QWORD *)v9 + 11);
    v122 = 0LL;
    if ( v54 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 32));
      v55 = *((_QWORD *)v9 + 11);
    }
    else
    {
      v55 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v122, v55);
    v59 = v122;
    if ( !v122 )
    {
      v61 = WdLogNewEntry5_WdWarning(v57, v56, v58);
      v62 = *((_QWORD *)v9 + 1);
      if ( !v62 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v60);
        WdLogEvent5_WdAssertion(v63);
        v62 = *((_QWORD *)v9 + 1);
      }
      *(_QWORD *)(v61 + 24) = *(_QWORD *)(v62 + 16);
      WdLogEvent5_WdWarning(v61);
      LODWORD(v23) = -1071774884;
LABEL_89:
      auto_rc<DMMVIDPN const>::reset(&v122, 0LL);
      goto LABEL_144;
    }
    v64 = DMMVIDPN::Serialize(v122, &v124);
    v23 = v64;
    if ( v64 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v65);
      v67[3] = v59;
      v68 = *((_QWORD *)v9 + 1);
      if ( !v68 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v66);
        WdLogEvent5_WdAssertion(v69);
        v68 = *((_QWORD *)v9 + 1);
      }
      v67[4] = *(_QWORD *)(v68 + 16);
      v67[5] = v23;
      WdLogEvent5_WdError(v67);
      goto LABEL_89;
    }
    auto_rc<DMMVIDPN const>::reset(&v122, 0LL);
LABEL_135:
    v119 = v128;
    if ( v8 )
    {
      v120 = v128;
      if ( a3 < v128 )
        v120 = a3;
      memmove(v8, Src, v120);
    }
    if ( v12 )
      *v12 = v119;
    if ( v119 <= a3 )
    {
      LODWORD(v23) = 0;
    }
    else
    {
      v121 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      LODWORD(v23) = -2147483643;
      v121[3] = a3;
      v121[4] = v6;
      v121[5] = v128;
    }
    goto LABEL_144;
  }
  if ( (_DWORD)v6 != 13 )
  {
    if ( (_DWORD)v6 != 14 )
      goto LABEL_108;
    if ( a5 )
    {
      v37 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v37);
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v131, (__int64)v9);
    LODWORD(v134) = 0x8000;
    v38 = DMM::AutoBuffer<unsigned char>::Initialize((__int64)&v124, 0x8000uLL, 0LL, PagedPool);
    v23 = v38;
    if ( v38 >= 0 )
    {
      v41 = (unsigned __int8 *)Src;
      if ( !Src )
      {
        v42 = WdLogNewEntry5_WdAssertion(v39);
        WdLogEvent5_WdAssertion(v42);
        v41 = (unsigned __int8 *)Src;
      }
      v43 = (DXGDIAGNOSTICS *)*((_QWORD *)v9 + 63);
      if ( !v43 )
      {
        v44 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v44 + 24) = Src;
        *(_QWORD *)(v44 + 32) = v9;
        WdLogEvent5_WdError(v44);
        LODWORD(v23) = -1073741436;
LABEL_63:
        v46 = v131;
LABEL_106:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46 + 40));
        goto LABEL_144;
      }
      LODWORD(v23) = DXGDIAGNOSTICS::ReadDiagnostics(v43, v41, (unsigned int *)&v134);
      if ( (int)v23 >= 0 )
      {
        v47 = (unsigned int)v134;
        if ( (unsigned int)v134 > v128 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v45);
          WdLogEvent5_WdAssertion(v48);
        }
        v128 = v47;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v131 + 40));
        goto LABEL_135;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v40[3] = Src;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v40[3] = 0x8000LL;
      v40[5] = v23;
    }
    v40[4] = v9;
    WdLogEvent5_WdError(v40);
    goto LABEL_63;
  }
  if ( a5 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v49);
  }
  v31 = VIDPN_MGR::AcquireDiagVersion(a1, &v124);
LABEL_70:
  v23 = v31;
  if ( v31 >= 0 )
    goto LABEL_135;
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v51 = *((_QWORD *)v9 + 1);
  if ( !v51 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v50);
    WdLogEvent5_WdAssertion(v52);
    v51 = *((_QWORD *)v9 + 1);
  }
  v34[3] = *(_QWORD *)(v51 + 16);
LABEL_74:
  v34[4] = v23;
LABEL_75:
  WdLogEvent5_WdError(v34);
LABEL_144:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v124);
  return (unsigned int)v23;
}
