/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C012C5BC
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C012CF08 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02C68B0 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0002B1C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9114 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2C84 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C012C414 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0150DC4 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02C0968 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02C0D48 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02C0F70 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02C699C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // esi
  struct D3DKMT_AUGMENT_CDSJ *v5; // r14
  unsigned int i; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rax
  unsigned int v11; // r8d
  _DWORD *v12; // rcx
  __int64 v13; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // r11
  unsigned int *v16; // rbx
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  DXGADAPTER *v22; // r15
  _QWORD *v23; // rax
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  unsigned int v39; // r12d
  __int64 v40; // rax
  unsigned __int16 v41; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rdi
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r8
  VIDPN_MGR *v50; // rcx
  char IsPrimaryClonePathByModality; // r12
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v56; // rdi
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  struct _FAST_MUTEX *v66; // rcx
  __int64 v67; // rax
  int MonitorInstance; // eax
  __int64 v69; // rax
  char v70; // al
  __int64 v71; // rax
  struct DXGMONITOR *v72; // r12
  __int64 v73; // rax
  __int64 v74; // rax
  bool v75; // al
  __int64 v76; // r9
  char v77; // [rsp+50h] [rbp-B0h]
  char IsVirtualModeSuportDisabled; // [rsp+50h] [rbp-B0h]
  bool v79; // [rsp+51h] [rbp-AFh]
  char v80; // [rsp+52h] [rbp-AEh]
  unsigned int j; // [rsp+54h] [rbp-ACh] BYREF
  VIDPN_MGR *v82; // [rsp+58h] [rbp-A8h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v83; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+68h] [rbp-98h] BYREF
  char *v85; // [rsp+70h] [rbp-90h]
  struct DXGMONITOR *v86; // [rsp+78h] [rbp-88h] BYREF
  __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  DXGADAPTER *v88; // [rsp+88h] [rbp-78h]
  unsigned __int64 v89; // [rsp+90h] [rbp-70h] BYREF
  char v90[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v91[64]; // [rsp+A8h] [rbp-58h] BYREF
  char v92[72]; // [rsp+E8h] [rbp-18h] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  v5 = a2;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(unsigned __int16 *)(v8 + 20);
    else
      v9 = 0LL;
    if ( i >= (unsigned __int16)v9 )
    {
      if ( !a3 )
        return 3223192377LL;
      v16 = (unsigned int *)((char *)v5 + 4);
      Global = DXGGLOBAL::GetGlobal(v9, (__int64)a2);
      v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v5 + 4), &v89);
      v88 = v18;
      v22 = v18;
      if ( !v18 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v23[3] = this;
        v23[4] = *((_QWORD *)this + 8);
        v23[5] = *((int *)v5 + 2);
        v23[6] = *v16;
        WdLogEvent5_WdWarning(v23);
        return (unsigned int)-1073741810;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v90, v18, 0LL);
      v24 = COREADAPTERACCESS::AcquireShared((__int64)v90, 0xFFFFFFFFLL, v25);
      if ( v24 < 0 )
      {
LABEL_80:
        COREACCESS::~COREACCESS((COREACCESS *)v92);
        COREACCESS::~COREACCESS((COREACCESS *)v91);
        DXGADAPTER::ReleaseReferenceNoTracking(v22);
        return (unsigned int)v24;
      }
      v29 = *((_QWORD *)v22 + 319);
      v85 = (char *)v22 + 2552;
      if ( !v29 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
        v24 = -1073741637;
        v30[3] = *((int *)v5 + 2);
        v30[4] = *v16;
        v30[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_80;
      }
      v82 = *(VIDPN_MGR **)(v29 + 88);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v87, (__int64)v82);
      v84 = 0LL;
      v31 = VIDPN_MGR::CreateClientVidPn(v82, &v84);
      v35 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v31;
      if ( v31 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
        v36[3] = v35;
        v36[4] = *((int *)v22 + 70);
        v36[5] = *((unsigned int *)v22 + 69);
        v36[6] = this;
        v37 = *((_QWORD *)this + 8);
LABEL_44:
        v36[7] = v37;
        WdLogEvent5_WdError(v36);
        goto LABEL_32;
      }
      v35 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v84 + 96);
      v83 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v84 + 96);
      if ( v84 == -96 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
        v38[3] = v22;
        v38[4] = *((int *)v22 + 70);
        v38[5] = *((unsigned int *)v22 + 69);
        v38[6] = this;
        v38[7] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v38);
        LODWORD(v35) = -1073741823;
LABEL_32:
        v24 = (int)v35;
LABEL_79:
        auto_rc<DMMVIDPN>::reset(&v84, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v87 + 40));
        goto LABEL_80;
      }
      v39 = 0;
      for ( j = 0; ; j = v39 )
      {
        v40 = *((_QWORD *)this + 8);
        v41 = v40 ? *(_WORD *)(v40 + 20) : 0;
        if ( v39 >= v41 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v39);
        v43 = PathDescriptor;
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v22 + 69)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v22 + 70) )
        {
          v44 = VIDPN_MGR::AddPathToVidPnTopology(
                  v82,
                  v35,
                  *((_DWORD *)PathDescriptor + 6),
                  *((_DWORD *)PathDescriptor + 7),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  v39,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v35 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v44;
          if ( v44 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v47);
            v36[3] = v35;
            v36[4] = *((int *)v43 + 5);
            v36[5] = *((unsigned int *)v43 + 4);
            v36[6] = *((unsigned int *)v43 + 6);
            v37 = *((unsigned int *)v43 + 7);
            goto LABEL_44;
          }
          v35 = v83;
        }
        ++v39;
      }
      LODWORD(v35) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v35, v5);
      if ( (int)v35 < 0 )
        goto LABEL_32;
      v50 = v82;
      IsPrimaryClonePathByModality = 1;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v82 + 10) + 72LL), 1u);
      v52 = *((_QWORD *)v82 + 10);
      v22 = v88;
      LODWORD(v82) = *((_DWORD *)v5 + 4);
      if ( (_DWORD)v82 == -1 )
      {
        v24 = -1073741811;
        goto LABEL_71;
      }
      DXGADAPTER::IsCoreResourceSharedOwner(v88);
      v56 = (__int64 *)v85;
      v85 = *(char **)v85;
      if ( !v85 )
      {
        v57 = WdLogNewEntry5_WdError(v54, v53, v55);
        *(_QWORD *)(v57 + 24) = 8960LL;
        WdLogEvent5_WdError(v57);
        v24 = -1073741811;
        goto LABEL_49;
      }
      DXGADAPTER::IsCoreResourceSharedOwner(v22);
      v64 = *v56;
      if ( !*v56 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v62, v61);
        WdLogEvent5_WdAssertion(v65);
        v64 = *v56;
      }
      v66 = *(struct _FAST_MUTEX **)(v64 + 96);
      if ( !v66 )
      {
        v67 = WdLogNewEntry5_WdError(0LL, v61, v63);
        *(_QWORD *)(v67 + 24) = v22;
        WdLogEvent5_WdError(v67);
        v24 = -1073741811;
LABEL_60:
        v71 = WdLogNewEntry5_WdAssertion(v50, v48);
        *(_QWORD *)(v71 + 24) = v24;
        WdLogEvent5_WdAssertion(v71);
LABEL_71:
        LOBYTE(v50) = v80;
        v75 = v79;
        goto LABEL_72;
      }
      v86 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v66, (unsigned int)v82, 1, &v86);
      v24 = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v69 = WdLogNewEntry5_WdDmmEvent(v50, v48);
        *(_QWORD *)(v69 + 24) = (unsigned int)v82;
        *(_QWORD *)(v69 + 32) = v22;
        WdLogEvent5_WdDmmEvent(v69);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v72 = v86;
          if ( !v86 || *((_DWORD *)v86 + 108) != 1 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v50, v48);
            WdLogEvent5_WdAssertion(v73);
          }
          if ( !v72 )
          {
            v74 = WdLogNewEntry5_WdAssertion(v50, v48);
            WdLogEvent5_WdAssertion(v74);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v72 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v72);
          ExReleaseResourceLite((PERESOURCE)((char *)v72 + 296));
          KeLeaveCriticalRegion();
          v70 = IsVirtualModeSuportDisabled;
          v24 = 0;
          IsPrimaryClonePathByModality = 1;
          goto LABEL_67;
        }
        if ( MonitorInstance != -1073741632 )
        {
LABEL_59:
          v70 = v77;
          if ( v24 < 0 )
            goto LABEL_60;
LABEL_67:
          if ( v70 )
          {
            v75 = 1;
            LOBYTE(v50) = 1;
          }
          else
          {
            v50 = (VIDPN_MGR *)v85;
            v75 = v85[234] == 0;
            LOBYTE(v50) = v85[233] == 0;
          }
LABEL_72:
          if ( v24 >= 0 )
          {
            v24 = CCD_TOPOLOGY::AddPathDescriptor(
                    (__int64)this,
                    (struct D3DKMT_AUGMENT_CDSJ *)((char *)v5 + 4),
                    *((_DWORD *)v5 + 3),
                    *((_DWORD *)v5 + 4),
                    (_BYTE)v50 == 0,
                    !v75,
                    *((_DWORD *)v5 + 5),
                    *((_DWORD *)v5 + 6),
                    0,
                    (__int64 *)&v83);
            if ( v24 >= 0 )
            {
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          this,
                          (const struct _LUID *)v83 + 2,
                          *((_DWORD *)v83 + 7),
                          &j) >= 0 )
              {
                CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, j);
                IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
              }
              CDS_JOURNAL::FillPathDescriptor(v83, v5, IsPrimaryClonePathByModality, v76, v22);
            }
            goto LABEL_77;
          }
LABEL_49:
          v58 = (_QWORD *)WdLogNewEntry5_WdError(v50, v48, v49);
          v58[3] = *((unsigned int *)v5 + 4);
          v58[4] = *((int *)v5 + 2);
          v58[5] = *((unsigned int *)v5 + 1);
          WdLogEvent5_WdError(v58);
LABEL_77:
          if ( v52 )
            ReferenceCounted::Release((ReferenceCounted *)(v52 + 64), v59, v60);
          goto LABEL_79;
        }
      }
      v77 = 0;
      v24 = 0;
      goto LABEL_59;
    }
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v11 = *((_DWORD *)v5 + 3);
    a2 = (struct D3DKMT_AUGMENT_CDSJ *)((char *)v5 + 4);
    if ( *((_DWORD *)v10 + 6) == v11
      && *((_DWORD *)v10 + 4) == *(_DWORD *)a2
      && *((_DWORD *)v10 + 5) == *((_DWORD *)v5 + 2) )
    {
      break;
    }
  }
  v12 = (_DWORD *)*((_QWORD *)v5 + 4);
  *((_DWORD *)v5 + 4) = *((_DWORD *)v10 + 7);
  *((_DWORD *)v5 + 5) = *((_DWORD *)v10 + 22);
  *((_DWORD *)v5 + 6) = *((_DWORD *)v10 + 23);
  if ( !v12 )
    return v3;
  if ( (v12[18] & 0x180000) == 0x180000 && !v12[43] && !v12[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)a2, v11);
  if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
  {
    CDS_JOURNAL::FillPathDescriptor(v14, v5, 1, v13, 0LL);
    return v3;
  }
  return 3223192371LL;
}
