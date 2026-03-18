/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B4EB4 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C028D504 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0005B34 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00227C4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@VDMMVIDPN@@@@QEAA@XZ @ 0x1C004C38C (--1-$auto_rc@VDMMVIDPN@@@@QEAA@XZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AF2B8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B569C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C013EF58 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02885F8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02889D8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0288C00 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     _CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C028AF88 (_CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C028D5F0 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // esi
  char IsPrimaryClonePathByModality; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  unsigned int v12; // r8d
  const struct _LUID *v13; // rdx
  _DWORD *v14; // rcx
  bool v15; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // r11
  unsigned int *v18; // r12
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // r15
  _QWORD *v25; // rax
  struct DMMVIDPNTOPOLOGY *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct VIDPN_MGR *v32; // rsi
  int ClientVidPn; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r12d
  __int64 v38; // rax
  unsigned __int16 v39; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // r13
  int v42; // eax
  __int64 v43; // rcx
  VIDPN_MGR *v44; // rcx
  unsigned int v45; // esi
  struct DXGADAPTER *v46; // r12
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rax
  char v50; // al
  bool v51; // al
  __int64 v52; // rax
  _QWORD *v53; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // r15
  bool v55; // r9
  unsigned int i; // [rsp+50h] [rbp-69h] BYREF
  __int64 v57; // [rsp+58h] [rbp-61h] BYREF
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v58; // [rsp+60h] [rbp-59h] BYREF
  __int64 v59; // [rsp+68h] [rbp-51h] BYREF
  __int64 v60; // [rsp+70h] [rbp-49h] BYREF
  DXGADAPTER *v61; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v63[128]; // [rsp+90h] [rbp-29h] BYREF
  VIDPN_MGR *v64; // [rsp+120h] [rbp+67h] BYREF
  struct DMMVIDPNTOPOLOGY *v65; // [rsp+128h] [rbp+6Fh]
  bool v66; // [rsp+138h] [rbp+7Fh]

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  v7 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      v10 = *(unsigned __int16 *)(v9 + 20);
    else
      v10 = 0LL;
    if ( v7 >= (unsigned __int16)v10 )
    {
      if ( !a3 )
        return 3223192377LL;
      v18 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal(v10);
      v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v62);
      v61 = v20;
      v24 = v20;
      if ( !v20 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
        v25[3] = this;
        v25[4] = *((_QWORD *)this + 8);
        v25[5] = *((int *)a2 + 2);
        v25[6] = *v18;
        WdLogEvent5_WdWarning(v25);
        LODWORD(v26) = -1073741810;
LABEL_65:
        CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v61);
        return (unsigned int)v26;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v20, 0LL);
      LODWORD(v26) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63);
      if ( (int)v26 < 0 )
      {
LABEL_64:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
        goto LABEL_65;
      }
      v30 = *((_QWORD *)v24 + 315);
      if ( !v30 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
        LODWORD(v26) = -1073741637;
        v31[3] = *((int *)a2 + 2);
        v31[4] = *v18;
        v31[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_64;
      }
      v64 = *(VIDPN_MGR **)(v30 + 88);
      v32 = v64;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v60, (__int64)v64);
      v57 = 0LL;
      ClientVidPn = VIDPN_MGR::CreateClientVidPn(v32);
      v26 = (struct DMMVIDPNTOPOLOGY *)ClientVidPn;
      if ( ClientVidPn < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v35[3] = v26;
        v35[4] = *((int *)v24 + 70);
        v35[5] = *((unsigned int *)v24 + 69);
        v35[6] = this;
        v36 = *((_QWORD *)this + 8);
LABEL_41:
        v35[7] = v36;
        WdLogEvent5_WdError(v35);
        goto LABEL_63;
      }
      v26 = (struct DMMVIDPNTOPOLOGY *)(v57 + 96);
      v65 = (struct DMMVIDPNTOPOLOGY *)(v57 + 96);
      v37 = 0;
      for ( i = 0; ; i = v37 )
      {
        v38 = *((_QWORD *)this + 8);
        v39 = v38 ? *(_WORD *)(v38 + 20) : 0;
        if ( v37 >= v39 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v37);
        v41 = PathDescriptor;
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v24 + 69)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v24 + 70) )
        {
          v42 = VIDPN_MGR::AddPathToVidPnTopology(
                  v64,
                  v26,
                  *((_DWORD *)PathDescriptor + 6),
                  *((_DWORD *)PathDescriptor + 7),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  v37,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v26 = (struct DMMVIDPNTOPOLOGY *)v42;
          if ( v42 < 0 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdError(v43);
            v35[3] = v26;
            v35[4] = *((int *)v41 + 5);
            v35[5] = *((unsigned int *)v41 + 4);
            v35[6] = *((unsigned int *)v41 + 6);
            v36 = *((unsigned int *)v41 + 7);
            goto LABEL_41;
          }
          v26 = v65;
        }
        IsPrimaryClonePathByModality = 1;
        ++v37;
      }
      LODWORD(v26) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v26, a2);
      if ( (int)v26 < 0 )
        goto LABEL_63;
      v44 = v64;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v64 + 10) + 72LL), 1u);
      v45 = *((_DWORD *)a2 + 4);
      v46 = v61;
      v59 = *((_QWORD *)v44 + 10);
      if ( v45 == -1 )
      {
        LODWORD(v26) = -1073741811;
      }
      else
      {
        DXGADAPTER::IsCoreResourceSharedOwner(v61);
        v48 = *((_QWORD *)v24 + 315);
        if ( !v48 )
        {
          v49 = WdLogNewEntry5_WdError(v47);
          *(_QWORD *)(v49 + 24) = 8248LL;
          WdLogEvent5_WdError(v49);
          LODWORD(v26) = -1073741811;
          goto LABEL_57;
        }
        LODWORD(v26) = MonitorIsMonitorVirtualModeDisabled(v46, v45, &v64);
        if ( (_DWORD)v26 == -1073741632 )
        {
          v50 = 0;
          LODWORD(v26) = 0;
        }
        else
        {
          v50 = (char)v64;
        }
        if ( (int)v26 >= 0 )
        {
          if ( v50 )
          {
            LOBYTE(v44) = 1;
            v51 = 1;
          }
          else
          {
            LOBYTE(v44) = *(_BYTE *)(v48 + 133) == 0;
            v51 = *(_BYTE *)(v48 + 132) == 0;
          }
LABEL_56:
          if ( (int)v26 >= 0 )
          {
            LODWORD(v26) = CCD_TOPOLOGY::AddPathDescriptor(
                             (__int64)this,
                             (struct D3DKMT_AUGMENT_CDSJ *)((char *)a2 + 4),
                             *((_DWORD *)a2 + 3),
                             *((_DWORD *)a2 + 4),
                             !v51,
                             (_BYTE)v44 == 0,
                             *((_DWORD *)a2 + 5),
                             *((_DWORD *)a2 + 6),
                             0,
                             (__int64 *)&v58);
            if ( (int)v26 >= 0 )
            {
              v54 = v58;
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          this,
                          (const struct _LUID *)v58 + 2,
                          *((_DWORD *)v58 + 7),
                          &i) >= 0 )
              {
                CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, i);
                IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
              }
              CDS_JOURNAL::FillPathDescriptor(v54, a2, IsPrimaryClonePathByModality, v55, v46);
            }
            goto LABEL_62;
          }
LABEL_57:
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          v53[3] = *((unsigned int *)a2 + 4);
          v53[4] = *((int *)a2 + 2);
          v53[5] = *((unsigned int *)a2 + 1);
          WdLogEvent5_WdError(v53);
LABEL_62:
          auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v59);
LABEL_63:
          auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v57);
          EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v60);
          goto LABEL_64;
        }
        v52 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v52 + 24) = (int)v26;
        WdLogEvent5_WdAssertion(v52);
      }
      v51 = v66;
      LOBYTE(v44) = (_BYTE)v65;
      goto LABEL_56;
    }
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    v12 = *((_DWORD *)a2 + 3);
    v13 = (const struct _LUID *)((char *)a2 + 4);
    if ( *((_DWORD *)v11 + 6) == v12
      && *((_DWORD *)v11 + 4) == v13->LowPart
      && *((_DWORD *)v11 + 5) == *((_DWORD *)a2 + 2) )
    {
      break;
    }
    ++v7;
  }
  v14 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)v11 + 7);
  *((_DWORD *)a2 + 5) = *((_DWORD *)v11 + 22);
  *((_DWORD *)a2 + 6) = *((_DWORD *)v11 + 23);
  if ( v14 )
  {
    if ( (v14[18] & 0x180000) != 0x180000 || v14[43] || v14[44] )
    {
      if ( !CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v7) )
        return 3223192371LL;
      CDS_JOURNAL::FillPathDescriptor(v16, a2, 1, v15, 0LL);
    }
    else
    {
      return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v13, v12);
    }
  }
  return v3;
}
