/*
 * XREFs of ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320
 * Callers:
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00C9234 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00C9464 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00C9564 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CD110 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012771C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0127AF4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkFlushPresentHistory @ 0x1C0149A50 (DxgkFlushPresentHistory.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0155B5C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C01EBE54 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01EDD9C (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C01EEFE8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F5D90 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F6030 (-ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6200 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01F659C (-SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C020CAD0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0245798 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FF710 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C012339C (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0123444 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall ADAPTER_RENDER::FlushScheduler(__int64 a1, int a2, unsigned int a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  const GUID *v10; // r8
  unsigned __int8 IsDxgmms2; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  DXG_VMBUS_CHANNEL_BASE *v28; // rcx
  struct _MDL *v29; // r9
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+30h] [rbp-48h] BYREF
  int v47; // [rsp+38h] [rbp-40h]
  int v48; // [rsp+3Ch] [rbp-3Ch]
  int v49; // [rsp+40h] [rbp-38h]
  int v50; // [rsp+48h] [rbp-30h]
  int v51; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v52; // [rsp+50h] [rbp-28h]
  int v53; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( *(_BYTE *)(v6 + 185) )
  {
    v28 = (DXG_VMBUS_CHANNEL_BASE *)(v6 + 4144);
    v29 = (struct _MDL *)*(unsigned int *)(*(_QWORD *)(v6 + 4200) + 4208LL);
    v46 = 0LL;
    v47 = 0;
    v48 = 0;
    v49 = 43;
    v50 = (int)v29;
    v51 = a2;
    v52 = a3;
    return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
             v28,
             (struct DXGKVMB_COMMAND_BASE *)&v46,
             0x28u,
             v29);
  }
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(a1 + 16));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq(v9, &Dxgk_FlushScheduler, v10);
  v12 = WdLogNewEntry5_WdEvent(v9);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = v5;
  WdLogEvent5_WdEvent(v12);
  v16 = 1;
  if ( (int)v8 > 6 )
  {
    if ( (_DWORD)v8 == 7 )
    {
LABEL_7:
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v45 + 24) = 2807LL;
        WdLogEvent5_WdAssertion(v45);
      }
      ADAPTER_RENDER::ResumeScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 10);
      return 0LL;
    }
    if ( (_DWORD)v8 == 8 )
    {
      if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v44 + 24) = 2812LL;
        WdLogEvent5_WdAssertion(v44);
      }
      if ( !IsDxgmms2 && (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v53) & 0x10) != 0 )
        return 0LL;
      v24 = 1LL;
      LOBYTE(v15) = a4 != 0;
      goto LABEL_27;
    }
    v14 = (unsigned int)(v8 - 9);
    if ( (_DWORD)v8 != 9 )
    {
      if ( (_DWORD)v8 == 10 )
        goto LABEL_7;
      goto LABEL_45;
    }
LABEL_13:
    if ( !a4 && !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v43 + 24) = 2766LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( IsDxgmms2 )
    {
      if ( (_DWORD)v5 == -1 )
        goto LABEL_19;
    }
    else if ( (*DXGADAPTER::GetAdapterType(*(DXGADAPTER **)(a1 + 16), &v53) & 0x10) != 0 )
    {
LABEL_19:
      ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)a1, a4 != 0, (_DWORD)v8 == 9);
      return 0LL;
    }
    LOBYTE(v15) = a4 != 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 528),
      1LL,
      (unsigned int)v5,
      v15);
    goto LABEL_19;
  }
  if ( (_DWORD)v8 == 6 )
    goto LABEL_13;
  v25 = v8 - 1;
  if ( !v25 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v33 + 24) = 2748LL;
      WdLogEvent5_WdAssertion(v33);
    }
    LOBYTE(v15) = a4 != 0;
    v24 = 0LL;
LABEL_27:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 776LL))(
      *(_QWORD *)(a1 + 528),
      v24,
      (unsigned int)v5,
      v15);
    return 0LL;
  }
  v30 = v25 - 1;
  if ( !v30 )
    goto LABEL_46;
  v31 = v30 - 1;
  if ( !v31 )
  {
    v16 = 6;
    goto LABEL_46;
  }
  v32 = v31 - 1;
  if ( !v32 )
  {
    v16 = 7;
    goto LABEL_46;
  }
  if ( v32 == 1 )
  {
    v16 = 15;
    goto LABEL_46;
  }
LABEL_45:
  v34 = WdLogNewEntry5_WdAssertion(v14, v13);
  *(_QWORD *)(v34 + 24) = 2838LL;
  WdLogEvent5_WdAssertion(v34);
LABEL_46:
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16))
    && *(_DWORD *)(*(_QWORD *)(a1 + 16) + 152LL) != 2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v37 + 24) = 2854LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL) + 40LL))(
          *(_QWORD *)(a1 + 528),
          v16);
  v41 = v38;
  if ( v16 >= 6 && v38 < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v42 + 24) = 2861LL;
    WdLogEvent5_WdAssertion(v42);
  }
  return v41;
}
