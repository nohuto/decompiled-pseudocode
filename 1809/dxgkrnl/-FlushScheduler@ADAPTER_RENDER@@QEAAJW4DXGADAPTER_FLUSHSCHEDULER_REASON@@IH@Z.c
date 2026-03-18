/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCD10 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCFF8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 *     DxgkFlushPresentHistory @ 0x1C0138770 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0143DEC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01BCA0C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01BE73C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01BF32C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01BFA94 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C7174 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01C7418 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01C799C (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01DDCB0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0282754 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002FEE4 (McTemplateK0pqq.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00D32F4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00D339C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0113280 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rdx
  int v24; // ebx
  __int64 v25; // rcx
  DXG_VMBUS_CHANNEL_BASE *v26; // rcx
  struct _MDL *v27; // r9
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  int v43; // [rsp+38h] [rbp-40h]
  int v44; // [rsp+3Ch] [rbp-3Ch]
  int v45; // [rsp+40h] [rbp-38h]
  int v46; // [rsp+48h] [rbp-30h]
  int v47; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v48; // [rsp+50h] [rbp-28h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 185) )
  {
    v26 = (DXG_VMBUS_CHANNEL_BASE *)(v6 + 4152);
    v27 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(v6 + 4208) + 4216LL);
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    v45 = 43;
    v46 = (int)v27;
    v47 = a2;
    v48 = a3;
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
             v26,
             (struct DXGKVMB_COMMAND_BASE *)&v42,
             0x28u,
             v27);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq(v10, &Dxgk_FlushScheduler, v11);
  v13 = WdLogNewEntry5_WdEvent(v10, v9);
  *(_QWORD *)(v13 + 24) = v8;
  *(_QWORD *)(v13 + 32) = v5;
  WdLogEvent5_WdEvent(v13);
  v16 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v41 + 24) = 2781LL;
        WdLogEvent5_WdAssertion(v41);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
      return 0LL;
    }
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v40 + 24) = 2786LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( !IsDxgmms2 )
      {
        LODWORD(v21) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
        if ( (*v21 & 0x10) != 0 )
          return 0LL;
      }
      v22 = 1LL;
      LOBYTE(v15) = a4 != 0;
      goto LABEL_26;
    }
    v14 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
        goto LABEL_7;
      goto LABEL_45;
    }
LABEL_12:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v39 + 24) = 2740LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
        goto LABEL_18;
    }
    else
    {
      LODWORD(v19) = DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16));
      if ( (*v19 & 0x10) != 0 )
      {
LABEL_18:
        ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
        return 0LL;
      }
    }
    LOBYTE(v15) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 528),
      1LL,
      (unsigned int)v5,
      v15);
    goto LABEL_18;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_12;
  v24 = v8 - 1;
  if ( !v24 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v31 + 24) = 2722LL;
      WdLogEvent5_WdAssertion(v31);
    }
    LOBYTE(v15) = a4 != 0;
    v22 = 0LL;
LABEL_26:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 528),
      v22,
      (unsigned int)v5,
      v15);
    return 0LL;
  }
  v28 = v24 - 1;
  if ( !v28 )
    goto LABEL_46;
  v29 = v28 - 1;
  if ( !v29 )
  {
    v16 = 6;
    goto LABEL_46;
  }
  v30 = v29 - 1;
  if ( !v30 )
  {
    v16 = 7;
    goto LABEL_46;
  }
  if ( v30 == 1 )
  {
    v16 = 15;
    goto LABEL_46;
  }
LABEL_45:
  v32 = WdLogNewEntry5_WdAssertion(v14);
  *(_QWORD *)(v32 + 24) = 2812LL;
  WdLogEvent5_WdAssertion(v32);
LABEL_46:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v34 + 24) = 2828LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 528),
          v16);
  v37 = v35;
  if ( v16 >= 6 && v35 < 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v38 + 24) = 2835LL;
    WdLogEvent5_WdAssertion(v38);
  }
  return v37;
}
