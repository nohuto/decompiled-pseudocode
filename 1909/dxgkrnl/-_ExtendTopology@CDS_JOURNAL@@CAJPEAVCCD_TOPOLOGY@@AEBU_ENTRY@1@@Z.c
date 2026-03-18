/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02C6DCC
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01301F4 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0002C28 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00058C0 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9754 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C012EDF0 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02C0A28 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02C0E08 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct DMMVIDPNTOPOLOGY *v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // r15d
  char IsPrimaryClonePathByModality; // r12
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  VIDPN_MGR *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int v41; // r15d
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  struct _FAST_MUTEX *v54; // rcx
  __int64 v55; // rax
  int MonitorInstance; // eax
  __int64 v57; // rax
  char v58; // si
  __int64 v59; // rax
  struct DXGMONITOR *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v64; // rcx
  bool v65; // al
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v70; // rsi
  __int64 v71; // r8
  bool v73; // [rsp+50h] [rbp-B0h]
  VIDPN_MGR *v74; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  __int64 v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v79[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v80[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v81[72]; // [rsp+C8h] [rbp-38h] BYREF

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v78);
  v10 = v6;
  if ( !v6 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 8);
    v11[5] = *((int *)a2 + 6);
    v11[6] = v3->LowPart;
    WdLogEvent5_WdWarning(v11);
    LODWORD(v12) = -1073741810;
    return (unsigned int)v12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, v6, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((__int64)v79, 0xFFFFFFFFLL, v13);
  if ( (int)v12 < 0 )
    goto LABEL_69;
  v17 = *((_QWORD *)v10 + 319);
  if ( !v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    LODWORD(v12) = -1073741637;
    v18[3] = *((int *)a2 + 6);
    v18[4] = v3->LowPart;
    v18[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_69;
  }
  v74 = *(VIDPN_MGR **)(v17 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v77, (__int64)v74);
  v76 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v74, &v76);
  v12 = v19;
  if ( v19 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v23[3] = v12;
    v23[4] = v10;
    v23[5] = *((int *)v10 + 70);
    v23[6] = *((unsigned int *)v10 + 69);
    v24 = *((_QWORD *)this + 8);
    goto LABEL_63;
  }
  v25 = (struct DMMVIDPNTOPOLOGY *)(v76 + 96);
  v75 = (struct DXGMONITOR *)(v76 + 96);
  if ( v76 == -96 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v26[3] = v10;
    v26[4] = *((int *)v10 + 70);
    v26[5] = *((unsigned int *)v10 + 69);
    v26[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v26);
    LODWORD(v12) = -1073741823;
    goto LABEL_68;
  }
  v27 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v29 = *((_QWORD *)this + 8);
    v30 = v29 ? *(_WORD *)(v29 + 20) : 0;
    if ( v27 >= v30 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v27);
    v32 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v10 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v10 + 70) )
    {
      v33 = VIDPN_MGR::AddPathToVidPnTopology(
              v74,
              v25,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v27,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v33;
      if ( v33 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
        v23[3] = v12;
        v23[4] = *((int *)v32 + 5);
        v23[5] = *((unsigned int *)v32 + 4);
        v23[6] = *((unsigned int *)v32 + 6);
        v24 = *((unsigned int *)v32 + 7);
LABEL_63:
        v23[7] = v24;
LABEL_64:
        WdLogEvent5_WdError(v23);
        goto LABEL_68;
      }
      v25 = v75;
    }
    ++v27;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v25, *((_DWORD *)a2 + 8)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v38, v37);
    WdLogEvent5_WdAssertion(v40);
  }
  v41 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)v10 + 319) + 80LL) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v25, v41) )
  {
LABEL_27:
    if ( ++v41 >= *(_DWORD *)(*((_QWORD *)v10 + 319) + 80LL) )
      goto LABEL_28;
  }
  v42 = VIDPN_MGR::AddPathToVidPnTopology(
          v74,
          v25,
          v41,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v12 = v42;
  if ( v42 == -1071774975 )
  {
    v25 = v75;
    goto LABEL_27;
  }
  if ( v42 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
    v23[3] = v12;
    v23[4] = *((int *)v10 + 70);
    v43 = *((unsigned int *)v10 + 69);
    goto LABEL_62;
  }
LABEL_28:
  if ( v41 >= *(_DWORD *)(*((_QWORD *)v10 + 319) + 80LL) )
  {
    LODWORD(v12) = -1071774975;
    goto LABEL_68;
  }
  v44 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v44 == -1 )
  {
    LODWORD(v12) = -1073741811;
LABEL_57:
    LOBYTE(v38) = v73;
    v65 = v73;
  }
  else
  {
    DXGADAPTER::IsCoreResourceSharedOwner(v10);
    v74 = (VIDPN_MGR *)*((_QWORD *)v10 + 319);
    if ( !v74 )
    {
      v48 = WdLogNewEntry5_WdError(v46, v45, v47);
      *(_QWORD *)(v48 + 24) = 8960LL;
      WdLogEvent5_WdError(v48);
      LODWORD(v12) = -1073741811;
      goto LABEL_59;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(v10);
    v52 = *((_QWORD *)v10 + 319);
    if ( !v52 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50, v49);
      WdLogEvent5_WdAssertion(v53);
      v52 = *((_QWORD *)v10 + 319);
    }
    v54 = *(struct _FAST_MUTEX **)(v52 + 96);
    if ( !v54 )
    {
      v55 = WdLogNewEntry5_WdError(0LL, v49, v51);
      *(_QWORD *)(v55 + 24) = v10;
      WdLogEvent5_WdError(v55);
      LODWORD(v12) = -1073741811;
      goto LABEL_46;
    }
    v75 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v54, (unsigned int)v44, 1, &v75);
    LODWORD(v12) = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v57 = WdLogNewEntry5_WdDmmEvent(v38, v37);
      *(_QWORD *)(v57 + 24) = v44;
      *(_QWORD *)(v57 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v57);
      goto LABEL_43;
    }
    if ( MonitorInstance >= 0 )
    {
      v60 = v75;
      if ( !v75 || *((_DWORD *)v75 + 108) != 1 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v61);
      }
      if ( !v60 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v62);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v60 + 296), 1u);
      IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v60);
      v64 = (struct _ERESOURCE *)((char *)v60 + 296);
      v58 = IsVirtualModeSuportDisabled;
      ExReleaseResourceLite(v64);
      KeLeaveCriticalRegion();
      LODWORD(v12) = 0;
    }
    else
    {
      if ( MonitorInstance == -1073741632 )
      {
LABEL_43:
        v58 = 0;
        LODWORD(v12) = 0;
      }
      else
      {
        v58 = v73;
      }
      if ( (int)v12 < 0 )
      {
LABEL_46:
        v59 = WdLogNewEntry5_WdAssertion(v38, v37);
        *(_QWORD *)(v59 + 24) = (int)v12;
        WdLogEvent5_WdAssertion(v59);
        goto LABEL_57;
      }
    }
    if ( v58 )
    {
      v65 = 1;
      LOBYTE(v38) = 1;
    }
    else
    {
      v38 = v74;
      v65 = *((_BYTE *)v74 + 234) == 0;
      LOBYTE(v38) = *((_BYTE *)v74 + 233) == 0;
    }
  }
  if ( (int)v12 < 0 )
  {
LABEL_59:
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
    v23[3] = *((unsigned int *)a2 + 8);
    v23[4] = v10;
    goto LABEL_64;
  }
  v66 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (const struct CDS_JOURNAL::_ENTRY *)((char *)a2 + 20),
          v41,
          *((_DWORD *)a2 + 8),
          (_BYTE)v38 == 0,
          !v65,
          *((_DWORD *)a2 + 9),
          *((_DWORD *)a2 + 10),
          0,
          (__int64 *)&v75);
  v12 = v66;
  if ( v66 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v68, v67, v69);
    v23[3] = v12;
    v23[4] = *((int *)a2 + 6);
    v43 = *((unsigned int *)a2 + 5);
LABEL_62:
    v23[5] = v43;
    v23[6] = v41;
    v24 = *((unsigned int *)a2 + 8);
    goto LABEL_63;
  }
  v70 = v75;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v75 + 2,
              *((_DWORD *)v75 + 7),
              (unsigned int *)&v74) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, (unsigned int)v74);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v74);
  }
  LOBYTE(v71) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v70, a2, v71, 0, v10);
LABEL_68:
  auto_rc<DMMVIDPN>::reset(&v76, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v77 + 40));
LABEL_69:
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  return (unsigned int)v12;
}
