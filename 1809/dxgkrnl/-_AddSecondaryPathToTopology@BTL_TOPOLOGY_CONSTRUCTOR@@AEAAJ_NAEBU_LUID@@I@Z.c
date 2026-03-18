/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C028BBB4
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028C2B4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028CAA4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CB4C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00227C4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@VDMMVIDPN@@@@QEAA@XZ @ 0x1C004C38C (--1-$auto_rc@VDMMVIDPN@@@@QEAA@XZ.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1_N2@Z @ 0x1C00B0CC8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2934 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     _CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C028AF88 (_CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C028D09C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0290BB0 (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // r14
  _QWORD *v13; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // rdi
  VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int i; // esi
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rbx
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  DMMVIDEOPRESENTTARGETSET *v30; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  _QWORD *v32; // rcx
  DXGADAPTER *v33; // rsi
  unsigned int v34; // edi
  __int64 v35; // rcx
  char v36; // r10
  __int64 v37; // rcx
  __int64 v38; // r12
  char v39; // al
  __int64 v40; // rax
  int IsTargetForcable; // eax
  __int64 v42; // rcx
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rcx
  DMMVIDPNTOPOLOGY *v46; // r10
  unsigned int v47; // eax
  unsigned int v48; // r12d
  unsigned int v49; // ecx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int16 v57; // [rsp+48h] [rbp-99h]
  char v58; // [rsp+4Ah] [rbp-97h] BYREF
  __int16 v59; // [rsp+4Bh] [rbp-96h]
  unsigned __int8 v60; // [rsp+4Dh] [rbp-94h] BYREF
  struct DMMVIDEOPRESENTTARGET *v61; // [rsp+50h] [rbp-91h]
  int v62; // [rsp+58h] [rbp-89h]
  int v63; // [rsp+5Ch] [rbp-85h]
  unsigned int v64; // [rsp+60h] [rbp-81h]
  __int64 v65; // [rsp+68h] [rbp-79h] BYREF
  const struct DMMVIDPN *v66; // [rsp+70h] [rbp-71h] BYREF
  VIDPN_MGR *v67; // [rsp+78h] [rbp-69h]
  DMMVIDPNTOPOLOGY *v68; // [rsp+80h] [rbp-61h]
  DMMVIDPNTOPOLOGY *v69; // [rsp+88h] [rbp-59h]
  DMMVIDEOPRESENTTARGETSET *v70; // [rsp+90h] [rbp-51h] BYREF
  __int64 v71; // [rsp+98h] [rbp-49h] BYREF
  DXGADAPTER *v72; // [rsp+A0h] [rbp-41h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp-39h] BYREF
  _BYTE v74[128]; // [rsp+B8h] [rbp-29h] BYREF

  LOBYTE(v63) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v73);
  v72 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = *this;
    v13[4] = *((_QWORD *)*this + 8);
    v13[5] = a3->HighPart;
    v13[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v13);
    LODWORD(v14) = -1073741810;
    goto LABEL_85;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v74, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v74);
  if ( (int)v14 < 0 )
    goto LABEL_84;
  v67 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 315) + 88LL);
  v15 = v67;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v71, (__int64)v67);
  v66 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v67, (__int64 *)&v66);
  v14 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = v14;
    v18[4] = v12;
    v18[5] = *((int *)v12 + 70);
    v18[6] = *((unsigned int *)v12 + 69);
    v18[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v18);
    goto LABEL_83;
  }
  v68 = (const struct DMMVIDPN *)((char *)v66 + 96);
  if ( v66 == (const struct DMMVIDPN *)-96LL )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v19[3] = v12;
    v19[4] = *((int *)v12 + 70);
    v19[5] = *((unsigned int *)v12 + 69);
    v19[6] = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v14) = -1073741823;
    goto LABEL_83;
  }
  for ( i = 0; ; ++i )
  {
    v21 = *((_QWORD *)*this + 8);
    v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
    if ( i >= v22 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v24 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 69)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 70) )
    {
      v25 = *((_DWORD *)PathDescriptor + 6);
      v26 = *((_DWORD *)PathDescriptor + 7);
      v27 = (unsigned __int8)v63;
      if ( v25 == a4 )
        v27 = 1;
      v63 = v27;
      v28 = VIDPN_MGR::AddPathToVidPnTopology(
              v15,
              v68,
              v25,
              v26,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v28;
      if ( v28 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v18[3] = v14;
        v18[4] = *((int *)v24 + 5);
        v18[5] = *((unsigned int *)v24 + 4);
        v18[6] = *((unsigned int *)v24 + 6);
        v18[7] = *((unsigned int *)v24 + 7);
        goto LABEL_20;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v15 + 10) + 72LL), 1u);
  v30 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)v15 + 10);
  v59 = 0;
  v14 = 0LL;
  v70 = v30;
  NextTarget = 0LL;
  v61 = 0LL;
  v64 = -1;
  v32 = (_QWORD *)*((_QWORD *)v30 + 3);
  if ( v32 != (_QWORD *)((char *)v30 + 24) )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v32 - 1);
  if ( !NextTarget )
  {
LABEL_81:
    LODWORD(v14) = -1073741275;
    goto LABEL_82;
  }
  v33 = v72;
  LOBYTE(v57) = HIBYTE(v57);
  HIBYTE(v57) = v62;
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22) )
      goto LABEL_44;
    v34 = *((_DWORD *)NextTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v68, v34) || v34 == *((_DWORD *)this + 6) )
    {
LABEL_43:
      v14 = v61;
      goto LABEL_44;
    }
    if ( v34 == -1 )
    {
      LODWORD(v14) = -1073741811;
    }
    else
    {
      DXGADAPTER::IsCoreResourceSharedOwner(v33);
      v38 = *((_QWORD *)v12 + 315);
      if ( !v38 )
      {
        v52 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v52 + 24) = 8248LL;
        WdLogEvent5_WdError(v52);
        LODWORD(v14) = -1073741811;
LABEL_71:
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v53[3] = v33;
        v53[4] = *((unsigned int *)NextTarget + 6);
LABEL_72:
        WdLogEvent5_WdError(v53);
        goto LABEL_82;
      }
      LODWORD(v14) = MonitorIsMonitorVirtualModeDisabled(v33, v34, &v58);
      if ( (_DWORD)v14 == -1073741632 )
      {
        v39 = 0;
        v58 = 0;
        LODWORD(v14) = 0;
      }
      else
      {
        v39 = v58;
      }
      if ( (int)v14 < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v40 + 24) = (int)v14;
        WdLogEvent5_WdAssertion(v40);
      }
      else if ( v39 )
      {
        v57 = 257;
      }
      else
      {
        LOBYTE(v57) = *(_BYTE *)(v38 + 133) == 0;
        HIBYTE(v57) = *(_BYTE *)(v38 + 132) == 0;
      }
      v15 = v67;
      v36 = v57;
    }
    if ( (int)v14 < 0 )
      goto LABEL_71;
    if ( (_BYTE)v63 )
    {
      if ( !v36 )
        goto LABEL_43;
    }
    else if ( *((_BYTE *)this + 10) && v36 )
    {
      goto LABEL_43;
    }
    if ( !*((_QWORD *)NextTarget + 14) )
    {
      if ( !a2 )
        goto LABEL_43;
      IsTargetForcable = DmmIsTargetForcable(v33, *((_DWORD *)NextTarget + 6), &v60, 0);
      v14 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForcable;
      if ( IsTargetForcable < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        v53[3] = v14;
        v53[4] = *((int *)v33 + 70);
        v53[5] = *((unsigned int *)v33 + 69);
        v53[6] = *((unsigned int *)NextTarget + 6);
        v53[7] = *((_QWORD *)*this + 8);
        goto LABEL_72;
      }
      if ( !v60 )
        goto LABEL_43;
    }
    v14 = v61;
    if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v33, NextTarget, v61) )
      break;
LABEL_44:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v30, NextTarget);
    if ( !NextTarget )
    {
      if ( v14 )
      {
        LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v33 + 276),
                         v64,
                         *((_DWORD *)v14 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 20),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 21),
                         HIBYTE(v59) != 0,
                         (_BYTE)v59 != 0);
        goto LABEL_82;
      }
      goto LABEL_81;
    }
    v15 = v67;
  }
  v65 = 0LL;
  v44 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v15, v66, &v65, v43);
  v14 = (struct DMMVIDEOPRESENTTARGET *)v44;
  if ( v44 < 0 )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v54[3] = v14;
    v54[4] = v33;
    v54[5] = *((int *)v33 + 70);
    v54[6] = *((unsigned int *)v33 + 69);
    v54[7] = this;
    goto LABEL_77;
  }
  v46 = (DMMVIDPNTOPOLOGY *)(v65 + 96);
  v69 = (DMMVIDPNTOPOLOGY *)(v65 + 96);
  if ( v65 == -96 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v45);
    v55[3] = v33;
    v55[4] = *((int *)v33 + 70);
    v55[5] = *((unsigned int *)v33 + 69);
    v55[6] = this;
    WdLogEvent5_WdError(v55);
    LODWORD(v14) = -1073741823;
    goto LABEL_78;
  }
  v47 = a4;
  v48 = 0;
  if ( a4 != -1 )
    v48 = a4;
  while ( 2 )
  {
    if ( v47 == -1 )
    {
      v49 = *(_DWORD *)(*((_QWORD *)v12 + 315) + 80LL);
      v47 = a4;
    }
    else
    {
      v49 = v47 + 1;
    }
    if ( v48 >= v49 )
    {
      v14 = v61;
      goto LABEL_69;
    }
    if ( v47 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v46, v48) )
    {
LABEL_65:
      v47 = a4;
      ++v48;
      continue;
    }
    break;
  }
  v50 = VIDPN_MGR::AddPathToVidPnTopology(
          v67,
          v46,
          v48,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v14 = (struct DMMVIDEOPRESENTTARGET *)v50;
  if ( v50 == -1071774975 )
  {
    v46 = v69;
    goto LABEL_65;
  }
  if ( v50 >= 0 )
  {
    v14 = NextTarget;
    v61 = NextTarget;
    HIBYTE(v59) = HIBYTE(v57) == 0;
    v64 = v48;
    LOBYTE(v59) = (_BYTE)v57 == 0;
LABEL_69:
    auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v65);
    goto LABEL_44;
  }
  v54 = (_QWORD *)WdLogNewEntry5_WdError(v51);
  v54[3] = v14;
  v54[4] = *((int *)v33 + 70);
  v54[5] = *((unsigned int *)v33 + 69);
  v54[6] = v48;
  v54[7] = *((unsigned int *)NextTarget + 6);
LABEL_77:
  WdLogEvent5_WdError(v54);
LABEL_78:
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>(&v65);
LABEL_82:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>((__int64 *)&v70);
LABEL_83:
  auto_rc<DMMVIDPN>::~auto_rc<DMMVIDPN>((__int64 *)&v66);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v71);
LABEL_84:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v74);
LABEL_85:
  CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v72);
  return (unsigned int)v14;
}
