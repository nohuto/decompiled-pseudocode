/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C028D960
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B4FBC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0005B34 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@VDMMVIDPN@@@@QEAA@XZ @ 0x1C004C38C (--1-$auto_rc@VDMMVIDPN@@@@QEAA@XZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AF2B8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B5744 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02885F8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02889D8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     _CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C028AF88 (_CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // r14
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGADAPTER *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  struct VIDPN_MGR *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPNTOPOLOGY *v23; // rbx
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  char IsPrimaryClonePathByModality; // r13
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // r14
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r14d
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // r12
  __int64 v41; // rax
  char v42; // al
  char v43; // al
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v47; // r14
  __int64 v48; // r8
  __int64 v50; // [rsp+50h] [rbp-49h] BYREF
  DXGADAPTER *v51; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v53[128]; // [rsp+70h] [rbp-29h] BYREF
  VIDPN_MGR *v54; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v55; // [rsp+110h] [rbp+77h] BYREF
  struct DMMVIDPNTOPOLOGY *v56; // [rsp+118h] [rbp+7Fh]

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v52);
  v51 = v6;
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
    goto LABEL_57;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v6, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
  if ( (int)v12 < 0 )
    goto LABEL_56;
  v16 = *((_QWORD *)v10 + 315);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v12) = -1073741637;
    v17[3] = *((int *)a2 + 6);
    v17[4] = v3->LowPart;
    v17[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_56;
  }
  v54 = *(VIDPN_MGR **)(v16 + 88);
  v18 = v54;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v50, (__int64)v54);
  v55 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v18, &v55);
  v12 = v19;
  if ( v19 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = v12;
    v21[4] = v10;
    v21[5] = *((int *)v10 + 70);
    v21[6] = *((unsigned int *)v10 + 69);
    v22 = *((_QWORD *)this + 8);
    goto LABEL_50;
  }
  v23 = (struct DMMVIDPNTOPOLOGY *)(v55 + 96);
  v56 = (struct DMMVIDPNTOPOLOGY *)(v55 + 96);
  if ( v55 == -96 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v24[3] = v10;
    v24[4] = *((int *)v10 + 70);
    v24[5] = *((unsigned int *)v10 + 69);
    v24[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v24);
    LODWORD(v12) = -1073741823;
    goto LABEL_55;
  }
  v25 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v27 = *((_QWORD *)this + 8);
    v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
    if ( v25 >= v28 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v25);
    v30 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v10 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v10 + 70) )
    {
      v31 = VIDPN_MGR::AddPathToVidPnTopology(
              v54,
              v23,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v25,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v31;
      if ( v31 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v21[3] = v12;
        v21[4] = *((int *)v30 + 5);
        v21[5] = *((unsigned int *)v30 + 4);
        v21[6] = *((unsigned int *)v30 + 6);
        v22 = *((unsigned int *)v30 + 7);
LABEL_50:
        v21[7] = v22;
LABEL_51:
        WdLogEvent5_WdError(v21);
        goto LABEL_55;
      }
      v23 = v56;
    }
    ++v25;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v23, *((_DWORD *)a2 + 8)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)v10 + 315) + 80LL) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v23, v35) )
  {
LABEL_27:
    if ( ++v35 >= *(_DWORD *)(*((_QWORD *)v10 + 315) + 80LL) )
      goto LABEL_28;
  }
  v36 = VIDPN_MGR::AddPathToVidPnTopology(
          v54,
          v23,
          v35,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v12 = v36;
  if ( v36 == -1071774975 )
  {
    v23 = v56;
    goto LABEL_27;
  }
  if ( v36 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v21[3] = v12;
    v21[4] = *((int *)v10 + 70);
    v37 = *((unsigned int *)v10 + 69);
    goto LABEL_49;
  }
LABEL_28:
  if ( v35 >= *(_DWORD *)(*((_QWORD *)v10 + 315) + 80LL) )
  {
    LODWORD(v12) = -1071774975;
    goto LABEL_55;
  }
  v38 = *((_DWORD *)a2 + 8);
  if ( v38 == -1 )
  {
    LODWORD(v12) = -1073741811;
    goto LABEL_44;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v10);
  v40 = *((_QWORD *)v10 + 315);
  if ( !v40 )
  {
    v41 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v41 + 24) = 8248LL;
    WdLogEvent5_WdError(v41);
    LODWORD(v12) = -1073741811;
    goto LABEL_46;
  }
  LODWORD(v12) = MonitorIsMonitorVirtualModeDisabled(v10, v38, &v54);
  if ( (_DWORD)v12 == -1073741632 )
  {
    v42 = 0;
    LODWORD(v12) = 0;
  }
  else
  {
    v42 = (char)v54;
  }
  if ( (int)v12 < 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v44 + 24) = (int)v12;
    WdLogEvent5_WdAssertion(v44);
LABEL_44:
    v43 = (char)v54;
    LOBYTE(v33) = (_BYTE)v54;
    goto LABEL_45;
  }
  if ( v42 )
  {
    LOBYTE(v33) = 1;
    v43 = 1;
  }
  else
  {
    LOBYTE(v33) = *(_BYTE *)(v40 + 133) == 0;
    v43 = *(_BYTE *)(v40 + 132) == 0;
  }
LABEL_45:
  if ( (int)v12 < 0 )
  {
LABEL_46:
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v21[3] = *((unsigned int *)a2 + 8);
    v21[4] = v10;
    goto LABEL_51;
  }
  v45 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (const struct CDS_JOURNAL::_ENTRY *)((char *)a2 + 20),
          v35,
          *((_DWORD *)a2 + 8),
          v43 == 0,
          (_BYTE)v33 == 0,
          *((_DWORD *)a2 + 9),
          *((_DWORD *)a2 + 10),
          0,
          (__int64 *)&v54);
  v12 = v45;
  if ( v45 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v46);
    v21[3] = v12;
    v21[4] = *((int *)a2 + 6);
    v37 = *((unsigned int *)a2 + 5);
LABEL_49:
    v21[5] = v37;
    v21[6] = v35;
    v22 = *((unsigned int *)a2 + 8);
    goto LABEL_50;
  }
  v47 = v54;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v54 + 2,
              *((_DWORD *)v54 + 7),
              (unsigned int *)&v54) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, (unsigned int)v54);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v54);
  }
  LOBYTE(v48) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v47, a2, v48, 0, v10);
LABEL_55:
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v55);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50);
LABEL_56:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53);
LABEL_57:
  CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v51);
  return (unsigned int)v12;
}
