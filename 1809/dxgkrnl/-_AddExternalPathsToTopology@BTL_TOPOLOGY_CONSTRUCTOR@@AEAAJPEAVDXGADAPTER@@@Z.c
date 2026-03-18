/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C028B2E8
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028B2AC (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00227C4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@VDMMVIDPN@@@@QEAA@XZ @ 0x1C004C38C (--1-$auto_rc@VDMMVIDPN@@@@QEAA@XZ.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C00B0CC8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C028CDFC (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C028CEA4 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  VIDPN_MGR *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int i; // r14d
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  const struct DMMVIDEOPRESENTTARGETSET *v22; // rbx
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // r14
  bool v24; // r12
  unsigned int v25; // r15d
  __int64 v26; // rcx
  char *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r12
  char v30; // al
  __int64 v31; // rax
  unsigned int PathSourceFromTarget; // eax
  __int64 v33; // r15
  struct DMMVIDPNTOPOLOGY *v34; // r10
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rax
  const struct DMMVIDEOPRESENTTARGET *NextBestSecondaryTarget; // rax
  unsigned int v40; // r15d
  struct DMMVIDPNTOPOLOGY *v41; // r10
  __int64 v42; // r12
  char v43; // al
  __int64 v44; // rax
  unsigned int v45; // r15d
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  _BYTE v53[4]; // [rsp+40h] [rbp-40h] BYREF
  int v54; // [rsp+44h] [rbp-3Ch]
  DMMVIDPNTOPOLOGY *v55; // [rsp+48h] [rbp-38h]
  __int64 v56; // [rsp+50h] [rbp-30h] BYREF
  __int64 v57; // [rsp+58h] [rbp-28h] BYREF
  DMMVIDPNTOPOLOGY *v58; // [rsp+60h] [rbp-20h]
  VIDPN_MGR *v59; // [rsp+68h] [rbp-18h]
  const struct DMMVIDEOPRESENTTARGETSET *v60; // [rsp+70h] [rbp-10h] BYREF
  __int64 v61; // [rsp+78h] [rbp-8h] BYREF
  bool v62; // [rsp+C8h] [rbp+48h]
  bool v63; // [rsp+D0h] [rbp+50h]
  char v64; // [rsp+D8h] [rbp+58h] BYREF

  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 315) + 88LL);
  v59 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v61, (__int64)v4);
  v5 = *((_QWORD *)a2 + 315);
  v57 = 0LL;
  v6 = 0LL;
  v58 = 0LL;
  if ( *(_BYTE *)(v5 + 133) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v57) >= 0 )
  {
    v8 = v57;
    if ( !v57 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
    }
    v6 = v8 + 96;
    v58 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v56 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn(v4, &v56);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2;
    v13[5] = *((int *)a2 + 70);
    v13[6] = *((unsigned int *)a2 + 69);
LABEL_20:
    WdLogEvent5_WdError(v13);
    goto LABEL_98;
  }
  v55 = (DMMVIDPNTOPOLOGY *)(v56 + 96);
  if ( v56 == -96 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = -96LL;
    v14[4] = a2;
    v14[5] = *((int *)a2 + 70);
    v14[6] = *((unsigned int *)a2 + 69);
    WdLogEvent5_WdError(v14);
    LODWORD(v12) = -1073741823;
    goto LABEL_98;
  }
  for ( i = 0; ; ++i )
  {
    v16 = *((_QWORD *)*this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( i >= v17 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v19 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 70) )
    {
      v20 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v55,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v12 = v20;
      if ( v20 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v13[3] = v12;
        v13[4] = *((int *)v19 + 5);
        v13[5] = *((unsigned int *)v19 + 4);
        v13[6] = *((unsigned int *)v19 + 6);
        v13[7] = *((unsigned int *)v19 + 7);
        goto LABEL_20;
      }
    }
  }
  v54 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 10) + 72LL));
  v22 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)v4 + 10);
  v60 = v22;
  if ( v6 )
  {
    FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v22);
    if ( FirstBestSecondaryTarget )
    {
      v24 = v62;
      while ( 1 )
      {
        v25 = *((_DWORD *)FirstBestSecondaryTarget + 6);
        if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v55, v25)
          && (v25 != *((_DWORD *)this + 6)
           || *((_DWORD *)a2 + 69) != *((_DWORD *)this + 3)
           || *((_DWORD *)a2 + 70) != *((_DWORD *)this + 4))
          && *((_QWORD *)FirstBestSecondaryTarget + 14)
          && !*((_DWORD *)FirstBestSecondaryTarget + 22) )
        {
          if ( v25 == -1 )
          {
            LODWORD(v12) = -1073741811;
          }
          else
          {
            DXGADAPTER::IsCoreResourceSharedOwner(a2);
            v29 = *((_QWORD *)a2 + 315);
            if ( !v29 )
            {
LABEL_90:
              v49 = WdLogNewEntry5_WdError(v28);
              *(_QWORD *)(v49 + 24) = 8248LL;
              WdLogEvent5_WdError(v49);
              LODWORD(v12) = -1073741811;
LABEL_91:
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v26);
              v50 = *((unsigned int *)FirstBestSecondaryTarget + 6);
              v38[4] = a2;
              v38[3] = v50;
LABEL_92:
              WdLogEvent5_WdError(v38);
              goto LABEL_97;
            }
            LODWORD(v12) = MonitorIsMonitorVirtualModeDisabled(a2, v25, &v64);
            if ( (_DWORD)v12 == -1073741632 )
            {
              v30 = 0;
              v64 = 0;
              LODWORD(v12) = 0;
            }
            else
            {
              v30 = v64;
            }
            if ( (int)v12 < 0 )
            {
              v31 = WdLogNewEntry5_WdAssertion(v26);
              *(_QWORD *)(v31 + 24) = (int)v12;
              WdLogEvent5_WdAssertion(v31);
            }
            else if ( v30 )
            {
              v62 = 1;
              v63 = 1;
            }
            else
            {
              v62 = *(_BYTE *)(v29 + 133) == 0;
              v63 = *(_BYTE *)(v29 + 132) == 0;
            }
            v24 = v62;
          }
          if ( (int)v12 < 0 )
            goto LABEL_91;
          if ( !*((_BYTE *)this + 10) || !v24 )
          {
            PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                     v58,
                                     *((unsigned int *)FirstBestSecondaryTarget + 6),
                                     v27);
            v33 = PathSourceFromTarget;
            if ( PathSourceFromTarget != -1 && !DMMVIDPNTOPOLOGY::IsSourceInTopology(v55, PathSourceFromTarget) )
            {
              v35 = VIDPN_MGR::AddPathToVidPnTopology(
                      v59,
                      v34,
                      v33,
                      *((_DWORD *)FirstBestSecondaryTarget + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE);
              v12 = v35;
              if ( v35 != -1071774975 )
              {
                if ( v35 < 0 )
                {
                  v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
                  v38[3] = v12;
                  v38[4] = *((int *)a2 + 70);
                  v38[5] = *((unsigned int *)a2 + 69);
                  v38[6] = v33;
LABEL_55:
                  v38[7] = *((unsigned int *)FirstBestSecondaryTarget + 6);
                  goto LABEL_92;
                }
                LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                                 (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                                 (struct _LUID *)((char *)a2 + 276),
                                 v33,
                                 *((_DWORD *)FirstBestSecondaryTarget + 6),
                                 (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 20),
                                 (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 21),
                                 !v63,
                                 !v24);
                v37 = v54;
                if ( (int)v12 >= 0 )
                  v37 = v12;
                v54 = v37;
              }
            }
          }
        }
        FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(FirstBestSecondaryTarget, v22);
        if ( !FirstBestSecondaryTarget )
          goto LABEL_57;
      }
    }
  }
  v24 = v62;
LABEL_57:
  NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v22);
LABEL_58:
  FirstBestSecondaryTarget = NextBestSecondaryTarget;
  if ( NextBestSecondaryTarget )
  {
    v40 = *((_DWORD *)NextBestSecondaryTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v55, v40)
      || v40 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 69) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 70) == *((_DWORD *)this + 4)
      || !*((_QWORD *)FirstBestSecondaryTarget + 14) )
    {
      goto LABEL_89;
    }
    if ( v40 == -1 )
    {
      LODWORD(v12) = -1073741811;
    }
    else
    {
      DXGADAPTER::IsCoreResourceSharedOwner(a2);
      v42 = *((_QWORD *)a2 + 315);
      if ( !v42 )
        goto LABEL_90;
      LODWORD(v12) = MonitorIsMonitorVirtualModeDisabled(a2, v40, v53);
      if ( (_DWORD)v12 == -1073741632 )
      {
        v43 = 0;
        v53[0] = 0;
        LODWORD(v12) = 0;
      }
      else
      {
        v43 = v53[0];
      }
      if ( (int)v12 < 0 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v44 + 24) = (int)v12;
        WdLogEvent5_WdAssertion(v44);
      }
      else if ( v43 )
      {
        v62 = 1;
        v63 = 1;
      }
      else
      {
        v62 = *(_BYTE *)(v42 + 133) == 0;
        v63 = *(_BYTE *)(v42 + 132) == 0;
      }
      v24 = v62;
      v41 = v55;
    }
    if ( (int)v12 < 0 )
      goto LABEL_91;
    if ( *((_BYTE *)this + 10) && v24 )
      goto LABEL_89;
    v45 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 315) + 80LL) )
      goto LABEL_89;
    while ( 1 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v41, v45) )
      {
        v46 = VIDPN_MGR::AddPathToVidPnTopology(
                v59,
                v41,
                v45,
                *((_DWORD *)FirstBestSecondaryTarget + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v12 = v46;
        if ( v46 != -1071774975 )
        {
          if ( v46 < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v47);
            v38[3] = v12;
            v38[4] = *((int *)a2 + 70);
            v38[5] = *((unsigned int *)a2 + 69);
            v38[6] = v45;
            goto LABEL_55;
          }
          LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                           (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                           (struct _LUID *)((char *)a2 + 276),
                           v45,
                           *((_DWORD *)FirstBestSecondaryTarget + 6),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 20),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 21),
                           !v63,
                           !v24);
          v48 = v54;
          if ( (int)v12 >= 0 )
            v48 = v12;
          v54 = v48;
LABEL_89:
          NextBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(FirstBestSecondaryTarget, v22);
          goto LABEL_58;
        }
        v41 = v55;
      }
      if ( ++v45 >= *(_DWORD *)(*((_QWORD *)a2 + 315) + 80LL) )
        goto LABEL_89;
    }
  }
  v51 = v54;
  if ( (_DWORD)v12 != -1071774975 )
    v51 = v12;
  LODWORD(v12) = v51;
LABEL_97:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>((__int64 *)&v60);
LABEL_98:
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v56);
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v57);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v61);
  return (unsigned int)v12;
}
