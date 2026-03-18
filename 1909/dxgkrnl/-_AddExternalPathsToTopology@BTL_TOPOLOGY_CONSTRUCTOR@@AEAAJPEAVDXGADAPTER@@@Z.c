/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02C3778
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02C373C (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00058C0 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C02C4314 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02C5730 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C02C57D8 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  const struct DMMVIDEOPRESENTTARGETSET **v4; // r13
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned int i; // r14d
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const struct DMMVIDEOPRESENTTARGETSET *v27; // rbx
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // r14
  bool v29; // r12
  char IsVirtualModeSuportDisabled; // r13
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  CCD_TOPOLOGY **v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  struct _FAST_MUTEX *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int MonitorInstance; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGMONITOR *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rax
  bool v53; // al
  unsigned int PathSourceFromTarget; // eax
  __int64 v55; // r15
  struct DMMVIDPNTOPOLOGY *v56; // r10
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  const struct DMMVIDEOPRESENTTARGET *NextBestSecondaryTarget; // r15
  char v69; // r13
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // r8
  DMMVIDPNTOPOLOGY *v73; // r10
  CCD_TOPOLOGY **v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  struct _FAST_MUTEX *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  struct DXGMONITOR *v90; // r14
  __int64 v91; // rax
  __int64 v92; // rax
  bool v93; // al
  unsigned int v94; // r14d
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // eax
  int v100; // eax
  __int64 v102; // rax
  int v103; // [rsp+40h] [rbp-39h]
  char v104; // [rsp+44h] [rbp-35h]
  struct DMMVIDPNTOPOLOGY *v105; // [rsp+48h] [rbp-31h]
  __int64 v106; // [rsp+50h] [rbp-29h] BYREF
  __int64 v107; // [rsp+58h] [rbp-21h] BYREF
  struct DXGMONITOR *v108; // [rsp+60h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v109; // [rsp+68h] [rbp-11h]
  struct DXGMONITOR *v110; // [rsp+70h] [rbp-9h] BYREF
  VIDPN_MGR *v111; // [rsp+78h] [rbp-1h]
  __int64 v112[10]; // [rsp+80h] [rbp+7h] BYREF
  bool v114; // [rsp+E8h] [rbp+6Fh]
  bool v115; // [rsp+F0h] [rbp+77h]
  char v116; // [rsp+F8h] [rbp+7Fh]

  v4 = *(const struct DMMVIDEOPRESENTTARGETSET ***)(*((_QWORD *)a2 + 319) + 88LL);
  v111 = (VIDPN_MGR *)v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v112, (__int64)v4);
  v5 = *((_QWORD *)a2 + 319);
  v107 = 0LL;
  v6 = 0LL;
  v109 = 0LL;
  if ( *(_BYTE *)(v5 + 234)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((struct VIDPN_MGR *)v4, &v107) >= 0 )
  {
    v9 = v107;
    if ( !v107 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v10);
    }
    v6 = v9 + 96;
    v109 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  }
  v106 = 0LL;
  v11 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v4, &v106);
  v15 = v11;
  if ( v11 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v16[3] = v15;
    v16[4] = a2;
    v16[5] = *((int *)a2 + 70);
    v16[6] = *((unsigned int *)a2 + 69);
LABEL_20:
    WdLogEvent5_WdError(v16);
    goto LABEL_123;
  }
  v105 = (struct DMMVIDPNTOPOLOGY *)(v106 + 96);
  if ( v106 == -96 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v17[3] = -96LL;
    v17[4] = a2;
    v17[5] = *((int *)a2 + 70);
    v17[6] = *((unsigned int *)a2 + 69);
    WdLogEvent5_WdError(v17);
    LODWORD(v15) = -1073741823;
    goto LABEL_123;
  }
  for ( i = 0; ; ++i )
  {
    v19 = *((_QWORD *)*this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( i >= v20 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v22 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 70) )
    {
      v23 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v4,
              v105,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v15 = v23;
      if ( v23 < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
        v16[3] = v15;
        v16[4] = *((int *)v22 + 5);
        v16[5] = *((unsigned int *)v22 + 4);
        v16[6] = *((unsigned int *)v22 + 6);
        v16[7] = *((unsigned int *)v22 + 7);
        goto LABEL_20;
      }
    }
  }
  v103 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v4[10] + 18);
  v27 = v4[10];
  if ( v6 )
  {
    FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v4[10]);
    if ( FirstBestSecondaryTarget )
    {
      v29 = v114;
      IsVirtualModeSuportDisabled = v116;
      while ( 1 )
      {
        v31 = *((unsigned int *)FirstBestSecondaryTarget + 6);
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v105, *((_DWORD *)FirstBestSecondaryTarget + 6)) )
          goto LABEL_65;
        v34 = this;
        if ( (_DWORD)v31 == *((_DWORD *)this + 6)
          && *((_DWORD *)a2 + 69) == *((_DWORD *)this + 3)
          && *((_DWORD *)a2 + 70) == *((_DWORD *)this + 4) )
        {
          goto LABEL_65;
        }
        if ( !*((_QWORD *)FirstBestSecondaryTarget + 14) || *((_DWORD *)FirstBestSecondaryTarget + 22) )
          goto LABEL_65;
        if ( (_DWORD)v31 != -1 )
          break;
        LODWORD(v15) = -1073741811;
LABEL_55:
        if ( (int)v15 < 0 )
          goto LABEL_68;
        if ( !*((_BYTE *)v34 + 10) || !v29 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                   v109,
                                   *((unsigned int *)FirstBestSecondaryTarget + 6));
          v55 = PathSourceFromTarget;
          if ( PathSourceFromTarget != -1 && !DMMVIDPNTOPOLOGY::IsSourceInTopology(v105, PathSourceFromTarget) )
          {
            v57 = VIDPN_MGR::AddPathToVidPnTopology(
                    v111,
                    v56,
                    v55,
                    *((_DWORD *)FirstBestSecondaryTarget + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v15 = v57;
            if ( v57 != -1071774975 )
            {
              if ( v57 < 0 )
              {
                v63 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v60);
                v63[3] = v15;
                v63[4] = *((int *)a2 + 70);
                v63[5] = *((unsigned int *)a2 + 69);
                v63[6] = v55;
                v65 = *((unsigned int *)FirstBestSecondaryTarget + 6);
                goto LABEL_70;
              }
              LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                               (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                               (const struct _LUID *)((char *)a2 + 276),
                               v55,
                               *((_DWORD *)FirstBestSecondaryTarget + 6),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 20),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 21),
                               !v115,
                               !v29);
              v61 = v103;
              if ( (int)v15 >= 0 )
                v61 = v15;
              v103 = v61;
            }
          }
        }
LABEL_65:
        FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(FirstBestSecondaryTarget, v27);
        if ( !FirstBestSecondaryTarget )
          goto LABEL_72;
      }
      DXGADAPTER::IsCoreResourceSharedOwner(a2);
      v38 = *((_QWORD *)a2 + 319);
      if ( !v38 )
      {
        v62 = WdLogNewEntry5_WdError(v36, v35, v37);
        *(_QWORD *)(v62 + 24) = 8960LL;
        WdLogEvent5_WdError(v62);
        LODWORD(v15) = -1073741811;
LABEL_68:
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v34, v32, v33);
        v64 = *((unsigned int *)FirstBestSecondaryTarget + 6);
LABEL_126:
        v63[4] = a2;
        v63[3] = v64;
LABEL_127:
        WdLogEvent5_WdError(v63);
        goto LABEL_121;
      }
      DXGADAPTER::IsCoreResourceSharedOwner(a2);
      v42 = *((_QWORD *)a2 + 319);
      if ( !v42 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v40, v39);
        WdLogEvent5_WdAssertion(v43);
        v42 = *((_QWORD *)a2 + 319);
      }
      v44 = *(struct _FAST_MUTEX **)(v42 + 96);
      if ( !v44 )
      {
        v45 = WdLogNewEntry5_WdError(0LL, v39, v41);
        *(_QWORD *)(v45 + 24) = a2;
        WdLogEvent5_WdError(v45);
        LODWORD(v15) = -1073741811;
LABEL_42:
        v49 = WdLogNewEntry5_WdAssertion(v46, v32);
        *(_QWORD *)(v49 + 24) = (int)v15;
        WdLogEvent5_WdAssertion(v49);
LABEL_53:
        v29 = v114;
        v34 = this;
        goto LABEL_55;
      }
      v108 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v44, (unsigned int)v31, 1, &v108);
      LODWORD(v15) = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v48 = WdLogNewEntry5_WdDmmEvent(v46, v32);
        *(_QWORD *)(v48 + 24) = v31;
        *(_QWORD *)(v48 + 32) = a2;
        WdLogEvent5_WdDmmEvent(v48);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v50 = v108;
          if ( !v108 || *((_DWORD *)v108 + 108) != 1 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v46, v32);
            WdLogEvent5_WdAssertion(v51);
          }
          if ( !v50 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v46, v32);
            WdLogEvent5_WdAssertion(v52);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v50 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v50);
          ExReleaseResourceLite((PERESOURCE)((char *)v50 + 296));
          KeLeaveCriticalRegion();
          LODWORD(v15) = 0;
          goto LABEL_49;
        }
        if ( MonitorInstance != -1073741632 )
        {
LABEL_41:
          if ( (int)v15 < 0 )
            goto LABEL_42;
LABEL_49:
          if ( IsVirtualModeSuportDisabled )
          {
            v53 = 1;
            v115 = 1;
          }
          else
          {
            v53 = *(_BYTE *)(v38 + 234) == 0;
            v115 = *(_BYTE *)(v38 + 233) == 0;
          }
          v114 = v53;
          goto LABEL_53;
        }
      }
      IsVirtualModeSuportDisabled = 0;
      LODWORD(v15) = 0;
      goto LABEL_41;
    }
  }
  v29 = v114;
LABEL_72:
  NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v27);
  if ( !NextBestSecondaryTarget )
    goto LABEL_118;
  v69 = v104;
  do
  {
    v70 = *((unsigned int *)NextBestSecondaryTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v105, *((_DWORD *)NextBestSecondaryTarget + 6)) )
      goto LABEL_117;
    v74 = this;
    if ( (_DWORD)v70 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 69) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 70) == *((_DWORD *)this + 4) )
    {
      goto LABEL_117;
    }
    if ( !*((_QWORD *)NextBestSecondaryTarget + 14) )
      goto LABEL_117;
    if ( (_DWORD)v70 == -1 )
    {
      LODWORD(v15) = -1073741811;
      goto LABEL_104;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(a2);
    v78 = *((_QWORD *)a2 + 319);
    if ( !v78 )
    {
      v102 = WdLogNewEntry5_WdError(v76, v75, v77);
      *(_QWORD *)(v102 + 24) = 8960LL;
      WdLogEvent5_WdError(v102);
      LODWORD(v15) = -1073741811;
LABEL_125:
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v74, v71, v72);
      v64 = *((unsigned int *)NextBestSecondaryTarget + 6);
      goto LABEL_126;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(a2);
    v82 = *((_QWORD *)a2 + 319);
    if ( !v82 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v80, v79);
      WdLogEvent5_WdAssertion(v83);
      v82 = *((_QWORD *)a2 + 319);
    }
    v84 = *(struct _FAST_MUTEX **)(v82 + 96);
    if ( !v84 )
    {
      v85 = WdLogNewEntry5_WdError(0LL, v79, v81);
      *(_QWORD *)(v85 + 24) = a2;
      WdLogEvent5_WdError(v85);
      LODWORD(v15) = -1073741811;
      goto LABEL_91;
    }
    v110 = 0LL;
    v87 = MONITOR_MGR::_GetMonitorInstance(v84, (unsigned int)v70, 1, &v110);
    LODWORD(v15) = v87;
    if ( v87 == -1073741275 )
    {
      v88 = WdLogNewEntry5_WdDmmEvent(v86, v71);
      *(_QWORD *)(v88 + 24) = v70;
      *(_QWORD *)(v88 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v88);
    }
    else
    {
      if ( v87 >= 0 )
      {
        v90 = v110;
        if ( !v110 || *((_DWORD *)v110 + 108) != 1 )
        {
          v91 = WdLogNewEntry5_WdAssertion(v86, v71);
          WdLogEvent5_WdAssertion(v91);
        }
        if ( !v90 )
        {
          v92 = WdLogNewEntry5_WdAssertion(v86, v71);
          WdLogEvent5_WdAssertion(v92);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v90 + 296), 1u);
        v69 = DXGMONITOR::_IsVirtualModeSuportDisabled(v90);
        ExReleaseResourceLite((PERESOURCE)((char *)v90 + 296));
        KeLeaveCriticalRegion();
        LODWORD(v15) = 0;
LABEL_98:
        if ( v69 )
        {
          v93 = 1;
          v115 = 1;
        }
        else
        {
          v93 = *(_BYTE *)(v78 + 234) == 0;
          v115 = *(_BYTE *)(v78 + 233) == 0;
        }
        v114 = v93;
        goto LABEL_102;
      }
      if ( v87 != -1073741632 )
        goto LABEL_90;
    }
    v69 = 0;
    LODWORD(v15) = 0;
LABEL_90:
    if ( (int)v15 >= 0 )
      goto LABEL_98;
LABEL_91:
    v89 = WdLogNewEntry5_WdAssertion(v86, v71);
    *(_QWORD *)(v89 + 24) = (int)v15;
    WdLogEvent5_WdAssertion(v89);
LABEL_102:
    v29 = v114;
    v74 = this;
    v73 = v105;
LABEL_104:
    if ( (int)v15 < 0 )
      goto LABEL_125;
    if ( *((_BYTE *)v74 + 10) && v29 )
      goto LABEL_117;
    v94 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 319) + 80LL) )
      goto LABEL_117;
    while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v73, v94) )
    {
LABEL_111:
      if ( ++v94 >= *(_DWORD *)(*((_QWORD *)a2 + 319) + 80LL) )
        goto LABEL_117;
    }
    v95 = VIDPN_MGR::AddPathToVidPnTopology(
            v111,
            v73,
            v94,
            *((_DWORD *)NextBestSecondaryTarget + 6),
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v15 = v95;
    if ( v95 == -1071774975 )
    {
      v73 = v105;
      goto LABEL_111;
    }
    if ( v95 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v97, v96, v98);
      v63[3] = v15;
      v63[4] = *((int *)a2 + 70);
      v63[5] = *((unsigned int *)a2 + 69);
      v63[6] = v94;
      v65 = *((unsigned int *)NextBestSecondaryTarget + 6);
LABEL_70:
      v63[7] = v65;
      goto LABEL_127;
    }
    LODWORD(v15) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                     (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                     (const struct _LUID *)((char *)a2 + 276),
                     v94,
                     *((_DWORD *)NextBestSecondaryTarget + 6),
                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)NextBestSecondaryTarget + 20),
                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)NextBestSecondaryTarget + 21),
                     !v115,
                     !v29);
    v99 = v103;
    if ( (int)v15 >= 0 )
      v99 = v15;
    v103 = v99;
LABEL_117:
    NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(NextBestSecondaryTarget, v27);
  }
  while ( NextBestSecondaryTarget );
LABEL_118:
  v100 = v103;
  if ( (_DWORD)v15 != -1071774975 )
    v100 = v15;
  LODWORD(v15) = v100;
LABEL_121:
  if ( v27 )
    ReferenceCounted::Release((const struct DMMVIDEOPRESENTTARGETSET *)((char *)v27 + 64), v66, v67);
LABEL_123:
  auto_rc<DMMVIDPN>::reset(&v106, 0LL);
  auto_rc<DMMVIDPN>::reset(&v107, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v112[0] + 40));
  return (unsigned int)v15;
}
