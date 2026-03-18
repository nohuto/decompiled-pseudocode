/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282528 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C02825B8 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0005DD4 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0005E08 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00BF350 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D2C28 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00D3678 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0120094 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0139D7C (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C013B880 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0284270 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int v11; // edx
  unsigned int v12; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rcx
  DMMVIDEOPRESENTTARGET *v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 TargetLinkTrainingStatus; // r14
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  const struct DMMVIDPNTOPOLOGY *v29; // r11
  DMMVIDPNPRESENTPATH *v30; // r13
  DMMVIDEOPRESENTTARGET *v31; // rcx
  unsigned __int8 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r15
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // al
  char v43; // r13
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rsi
  _QWORD *v47; // rax
  __int64 v48; // rcx
  PERESOURCE **v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  ULONGLONG v53; // [rsp+40h] [rbp-48h] BYREF
  __int64 v54[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v55; // [rsp+90h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+A8h] [rbp+20h]

  v57 = a4;
  v4 = *((_QWORD *)this + 1);
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v4 = *((_QWORD *)this + 1);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(v4 + 16);
  v11 = v9 & 0xFFFFFF;
  v12 = HIBYTE(v9) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v11);
  v15 = TargetById;
  if ( !TargetById )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v53);
  if ( a3 )
    DxgkLogCodePointPacket(0x58u, *((_DWORD *)a2 + 2) & 0xFFFFFF, v12, a2->ConnectionChangeId, *(_QWORD *)(v10 + 276));
  ConnectionChangeId = a2->ConnectionChangeId;
  if ( v53 <= a2->ConnectionChangeId )
  {
    if ( v53 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v12 == 12 )
        {
          v24 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId, v18, v19, v20);
          WdLogEvent5_WdDmmEvent(v24);
          return 0LL;
        }
        if ( !a3 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v25[3] = TargetLinkTrainingStatus;
          v25[4] = v10;
          v25[5] = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
LABEL_16:
          WdLogEvent5_WdAssertion(v25);
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v25[3] = v12;
          v25[4] = TargetLinkTrainingStatus;
          goto LABEL_16;
        }
      }
    }
    *(_DWORD *)(*((_QWORD *)v15 + 65) + 24LL) = v12;
    *(_QWORD *)(*((_QWORD *)v15 + 65) + 16LL) = ConnectionChangeId;
    if ( v12 == (_DWORD)TargetLinkTrainingStatus )
      return 0LL;
    v26 = *((_QWORD *)this + 11);
    if ( !v26 )
    {
      v54[0] = 0LL;
LABEL_51:
      auto_rc<DMMVIDPN const>::reset(v54, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 32));
    v27 = *((_QWORD *)this + 11);
    v54[0] = v27;
    if ( !v27 )
      goto LABEL_51;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v27 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v30 = PathFromTarget;
    if ( !PathFromTarget )
    {
      v31 = v15;
      v32 = v12 == 12;
LABEL_36:
      DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v31, 0, v32);
      goto LABEL_51;
    }
    v33 = *((_QWORD *)PathFromTarget + 11);
    v34 = *(unsigned int *)(v33 + 24);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v29,
                                                *(_DWORD *)(v33 + 24),
                                                &v55);
    v38 = 0x80000000LL;
    v39 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v39 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v40);
    }
    v41 = *(_QWORD *)(v10 + 2528);
    LOBYTE(v55) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v55;
    if ( v41 )
      ADAPTER_RENDER::FlushScheduler(v41, 8, v34, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v15, v38, v36, v37);
      v42 = DMMVIDEOPRESENTTARGET::NeedToBeActive(v15);
      v31 = v15;
      if ( !v42 )
      {
        v32 = 0;
        goto LABEL_36;
      }
      DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v15, 1, 1u);
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v30);
      v43 = v55;
      if ( !(_BYTE)v55 )
        goto LABEL_51;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 2520) + 112LL) + 3760 * v34 + 1068) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v44 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 2520), v34, 1, 0, a3);
      v46 = v44;
      if ( v44 >= 0 )
        goto LABEL_51;
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v47[3] = v10;
      v47[4] = v34;
      v47[5] = v46;
      WdLogEvent5_WdError(v47);
    }
    else
    {
      if ( v12 != 13 )
      {
        v43 = v55;
        goto LABEL_41;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v15, v38, v36, v37);
      v43 = v55;
    }
    v12 = 13;
LABEL_41:
    DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v15, 0, v12 == 12);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v49 = *(PERESOURCE ***)(v10 + 2520);
      if ( v43 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v49, v34, 0, 0, a3);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v49, v34, 0, 0x800u, a3);
    }
    if ( v12 == 13 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v48) + 20313) )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v50);
        if ( (int)ZwUpdateWnfStateData(
                    &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                    0LL,
                    0LL,
                    0LL,
                    &CurrentProcessSessionId,
                    0,
                    0) < 0 )
        {
          v52 = WdLogNewEntry5_WdError(v51);
          *(_QWORD *)(v52 + 24) = v10;
          WdLogEvent5_WdError(v52);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2520), 0LL, v57);
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v15, 1u);
    }
    goto LABEL_51;
  }
  v23 = WdLogNewEntry5_WdWarning(ConnectionChangeId, v18, v19);
  WdLogEvent5_WdWarning(v23);
  return 0LL;
}
