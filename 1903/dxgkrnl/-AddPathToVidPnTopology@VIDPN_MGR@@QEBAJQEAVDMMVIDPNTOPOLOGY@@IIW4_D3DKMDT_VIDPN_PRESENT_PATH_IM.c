/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DF4A8 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00DFB6C (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C012C5BC (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C014B060 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02B26E4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C02B8140 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02C36B8 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C42B4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02C699C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02C6D0C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0004594 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00045CC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0006870 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E2A60 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0141088 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 Container; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DMMVIDPNSOURCE *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DMMVIDPNTARGET *v20; // r14
  __int64 v21; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v22; // ebx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  DMMVIDPNPRESENTPATH *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DMMVIDPNPRESENTPATH *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // r10d
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  struct DMMVIDPNPRESENTPATH *v56[2]; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v57; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = a3;
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v40);
  }
  v56[0] = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, (__int64)a2);
  v16 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 304), v10);
  if ( !v16 )
  {
    v41 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v41 + 24) = v10;
    *(_QWORD *)(v41 + 32) = a2;
    WdLogEvent5_WdError(v41);
    LODWORD(v26) = -1071774972;
    goto LABEL_16;
  }
  v20 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v8);
  if ( !v20 )
  {
    v42 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v42 + 24) = v8;
    *(_QWORD *)(v42 + 32) = a2;
    WdLogEvent5_WdError(v42);
    goto LABEL_26;
  }
  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v10, 0LL, (unsigned int *)&v57) >= 0 )
  {
    if ( !(unsigned __int8)RtlIsMultiSessionSku(v21) )
    {
      v45 = WdLogNewEntry5_WdTrace(v44, v43);
      *(_QWORD *)(v45 + 24) = v8;
      *(_QWORD *)(v45 + 32) = 1LL;
      goto LABEL_29;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 12) + 556LL) & 0x100) != 0 )
    {
      v46 = WdLogNewEntry5_WdTrace(v44, v43);
      *(_QWORD *)(v46 + 24) = v8;
      *(_QWORD *)(v46 + 32) = 2LL;
      goto LABEL_29;
    }
    v47 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(Container + 312), v57);
    if ( v47 )
    {
      if ( (v50 & *(_DWORD *)(*(_QWORD *)(v47 + 96) + 556LL)) == 0 )
        goto LABEL_6;
      v52 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
      v52[3] = (unsigned int)v57;
      v52[4] = v8;
      v52[5] = 3LL;
LABEL_29:
      LODWORD(v26) = -1071774975;
      goto LABEL_16;
    }
    v51 = WdLogNewEntry5_WdAssertion(v49, v48);
    WdLogEvent5_WdAssertion(v51);
LABEL_26:
    LODWORD(v26) = -1071774971;
    goto LABEL_16;
  }
LABEL_6:
  v57 = D3DKMDT_VPPI_UNINITIALIZED;
  v22 = a5;
  if ( a5 == 255 )
  {
    LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(a2, &v57);
    v26 = LowestAvailImportanceOrdinal;
    if ( LowestAvailImportanceOrdinal < 0 )
    {
      v53 = WdLogNewEntry5_WdTrace(v25, v24);
      *(_QWORD *)(v53 + 24) = a2;
      *(_QWORD *)(v53 + 32) = v26;
      goto LABEL_16;
    }
    v22 = v57;
  }
  v27 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, PagedPool);
  if ( v27 )
    v27 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v27, v16, v20, v22, a6);
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v56,
    (__int64 (__fastcall ***)(_QWORD, __int64))v27);
  v32 = v56[0];
  if ( v56[0] )
  {
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v56[0] + 7))((char *)v56[0] + 56) )
    {
      v55 = WdLogNewEntry5_WdAssertion(v34, v33);
      WdLogEvent5_WdAssertion(v55);
    }
    v35 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v32, a8, a7);
    v26 = v35;
    if ( v35 < 0 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36);
      v39[3] = v10;
      v39[4] = v8;
      v39[5] = a2;
      v39[6] = v26;
    }
    else
    {
      v56[0] = 0LL;
      LODWORD(v26) = 0;
    }
  }
  else
  {
    v54 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    WdLogEvent5_WdLowResource(v54);
    LODWORD(v26) = -1073741801;
  }
LABEL_16:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))v56);
  return (unsigned int)v26;
}
