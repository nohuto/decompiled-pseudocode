/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA568 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA608 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000D4C0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C8950 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00E6CCC (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123FDC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C014A4C8 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C014BF10 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3784 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC57C (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC5D4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbp
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // edx
  unsigned int v13; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DMMVIDEOPRESENTTARGET *v18; // rdi
  __int64 v19; // rax
  unsigned int TargetLinkTrainingStatus; // eax
  struct _LUID *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int8 v25; // r12
  __int64 v26; // r14
  __int64 v27; // rax
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const struct DMMVIDPNTOPOLOGY *v38; // r11
  DMMVIDPNPRESENTPATH *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  ULONGLONG v42; // rcx
  struct DXGGLOBAL *v43; // rax
  unsigned __int8 v44; // r8
  __int64 v45; // r15
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  bool v51; // r12
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r13
  _QWORD *v56; // rax
  unsigned __int8 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE **v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  DXGSESSIONMGR *v66; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int8 v72; // [rsp+20h] [rbp-88h]
  ULONGLONG v73; // [rsp+40h] [rbp-68h] BYREF
  __int64 v74; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v75[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v76; // [rsp+B0h] [rbp+8h] BYREF
  int v77; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int8 v78; // [rsp+C0h] [rbp+18h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v79; // [rsp+C8h] [rbp+20h]

  v79 = a4;
  v78 = a3;
  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v5 = *((_QWORD *)this + 1);
  }
  v10 = *((_DWORD *)a2 + 2);
  v11 = *(_QWORD *)(v5 + 16);
  v12 = v10 & 0xFFFFFF;
  v13 = HIBYTE(v10) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v12);
  v18 = TargetById;
  if ( !TargetById )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v73);
  v25 = a5;
  v26 = TargetLinkTrainingStatus;
  if ( a5 )
  {
    if ( v13 != 8 )
    {
      ConnectionChangeId = a2->ConnectionChangeId;
      v13 = 13;
      goto LABEL_24;
    }
    v13 = 12;
  }
  else if ( a3 )
  {
    DXGADAPTER::IsAddapterSessionized((DXGADAPTER *)v11, v22, 0LL, v75);
    DxgkLogCodePointPacketForSession(
      0x58u,
      v75[0],
      *((_DWORD *)a2 + 2) & 0xFFFFFF,
      v13,
      a2->ConnectionChangeId,
      *(_QWORD *)(v11 + 276));
  }
  if ( v73 <= a2->ConnectionChangeId )
  {
    ConnectionChangeId = a2->ConnectionChangeId;
    if ( v73 == a2->ConnectionChangeId )
    {
      if ( v13 == (_DWORD)v26 )
        return 0LL;
      if ( (_DWORD)v26 == 14 || (_DWORD)v26 == 13 )
      {
        if ( v13 == 12 )
        {
          v29 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId, v22);
          *(_QWORD *)(v29 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
          WdLogEvent5_WdDmmEvent(v29);
          return 0LL;
        }
        if ( !a3 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v22);
          v30[3] = v26;
          v30[4] = v11;
          v30[5] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
LABEL_20:
          WdLogEvent5_WdAssertion(v30);
          return 0LL;
        }
        ConnectionChangeId = a2->ConnectionChangeId;
        if ( (_DWORD)v26 != 13 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v22);
          v30[3] = v13;
          v30[4] = v26;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    *(_BYTE *)(*((_QWORD *)v18 + 67) + 168LL) = v13;
    *(_QWORD *)(*((_QWORD *)v18 + 67) + 160LL) = ConnectionChangeId;
    Global = DXGGLOBAL::GetGlobal(ConnectionChangeId, (__int64)v22);
    QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
    if ( v25 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v18, v13 == 12);
    }
    else if ( v13 == (_DWORD)v26 )
    {
      return 0LL;
    }
    v33 = *((_QWORD *)this + 11);
    if ( !v33 )
    {
      v74 = 0LL;
LABEL_68:
      auto_rc<DMMVIDPN const>::reset(&v74, 0LL, v32);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v33 + 32));
    v34 = *((_QWORD *)this + 11);
    v74 = v34;
    if ( !v34 )
      goto LABEL_68;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v34 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v39 = PathFromTarget;
    if ( !PathFromTarget )
    {
      if ( v25 )
      {
        v40 = WdLogNewEntry5_WdDmmEvent(v37, v36);
        *(_QWORD *)(v40 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
        *(_QWORD *)(v40 + 32) = v11;
        WdLogEvent5_WdDmmEvent(v40);
        if ( v13 == 12 )
        {
          DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v18, 1u);
        }
        else
        {
          v42 = a2->ConnectionChangeId;
          *(_BYTE *)(*((_QWORD *)v18 + 67) + 168LL) = 14;
          *(_QWORD *)(*((_QWORD *)v18 + 67) + 160LL) = v42;
          v43 = DXGGLOBAL::GetGlobal(v42, v41);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v43 + 139), 0LL);
        }
      }
      v44 = v13 == 12;
      goto LABEL_47;
    }
    v45 = *(unsigned int *)(*((_QWORD *)PathFromTarget + 11) + 24LL);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v38, v45, &v76);
    v47 = 0x80000000LL;
    v48 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v48 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v48, 0x80000000LL);
      WdLogEvent5_WdAssertion(v49);
    }
    v50 = *(_QWORD *)(v11 + 2560);
    v51 = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v76;
    if ( v50 )
      ADAPTER_RENDER::FlushScheduler(v50, 8, v45, 0);
    if ( v13 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v18);
      if ( !*((_BYTE *)v18 + 417) )
      {
        v44 = 0;
LABEL_47:
        DMMVIDEOPRESENTTARGET::SetTargetActivated(v18, 0LL, v44);
        goto LABEL_68;
      }
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v39, 0LL);
      if ( !v51 )
        goto LABEL_68;
      v72 = v78;
      *(_DWORD *)(3968 * v45 + *(_QWORD *)(*(_QWORD *)(v11 + 2552) + 112LL) + 1068) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v52 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v11 + 2552), v45, 1, 0, v72);
      v55 = v52;
      if ( v52 >= 0 )
        goto LABEL_68;
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v32);
      v56[3] = v11;
      v56[4] = v45;
      v56[5] = v55;
      WdLogEvent5_WdError(v56);
      v13 = 13;
    }
    else
    {
      if ( v13 != 13 )
      {
        LOBYTE(v47) = *((_BYTE *)v18 + 417);
        v57 = 1;
        goto LABEL_52;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v18);
    }
    LOBYTE(v47) = 0;
    v57 = 0;
LABEL_52:
    DMMVIDEOPRESENTTARGET::SetTargetActivated(v18, v47, v57);
    if ( (_DWORD)v26 == 14 )
    {
      v60 = *(PERESOURCE ***)(v11 + 2552);
      if ( v51 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v60, v45, 0, 0, v78);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v60, (unsigned int)v45, 0, 2048, v78);
    }
    if ( v13 == 13 || a5 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59, v58);
      v61[3] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v61[5] = a5;
      v61[4] = v11;
      WdLogEvent5_WdDmmEvent(v61);
      v66 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v63, v62) + 74);
      if ( v66 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v65, v64);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v66, CurrentProcessSessionId);
      }
      else
      {
        SessionDataForSpecifiedSession = 0LL;
      }
      if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
      {
        v77 = PsGetCurrentProcessSessionId(v65, v64);
        if ( (int)ZwUpdateWnfStateData(&WNF_DXGK_PATH_FAILED_OR_INVALIDATED, 0LL, 0LL, 0LL, &v77, 0, 0) < 0 )
        {
          v71 = WdLogNewEntry5_WdError(v70, v69, v32);
          *(_QWORD *)(v71 + 24) = v11;
          WdLogEvent5_WdError(v71);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v11 + 2552), 0LL, v79);
      }
    }
    if ( v13 == 12 )
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v18, 1u);
    goto LABEL_68;
  }
  v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
  WdLogEvent5_WdWarning(v27);
  return 0LL;
}
