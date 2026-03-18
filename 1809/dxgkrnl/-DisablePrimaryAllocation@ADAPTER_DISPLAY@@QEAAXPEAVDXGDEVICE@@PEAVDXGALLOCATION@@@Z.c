/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001A35C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00D02A4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012C500 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0138370 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01FE9BC (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  char v3; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // r15
  DXGADAPTER *v13; // r9
  struct ADAPTER_RENDER *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // r9d
  int v24; // eax
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  int v31; // r8d
  struct COREDEVICEACCESS *v32; // r9

  v3 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v15 + 24) = 3008LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 3009LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v7 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v7 & 2) == 0 && (v7 & 1) == 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 3010LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v18 + 24) = 3011LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v19 + 24) = 3012LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 20) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v20 + 24) = 3015LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 216) == *(_QWORD *)(v11 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v11 + 16));
    if ( (int)DXGADAPTER::GetDriverVersion(v13) >= 2000 )
    {
      v21 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) + v10 + 272) & 0x200) != 0 )
      {
        if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10) == 3
          && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v3 = 1;
          v21 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) == VidPnSourceOwner )
        {
          v21 = 1;
        }
      }
      else
      {
        v21 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v10, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                           + 6);
      }
      v22 = *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL);
      if ( *(_DWORD *)(v22 + 176) == 1 )
      {
        v23 = 0;
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8LL, (unsigned int)v10, 0LL);
        }
        else
        {
          if ( v21 )
            v23 = 1 << v10;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v10,
            0,
            v23,
            0);
        }
      }
      if ( v21 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2552LL));
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 520LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 528LL),
               (unsigned int)v10) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v10);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
        v24 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v10, 0, 2u, 0);
        v25 = v24;
        if ( v24 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v26[3] = (unsigned int)v10;
          v26[4] = this[2];
          v26[5] = v25;
          WdLogEvent5_WdError(v26);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 82) == 2 )
      {
        v27 = *((_QWORD *)a3 + 6);
        if ( (*(_DWORD *)(v27 + 4) & 2) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v28 + 24) = 3146LL;
          WdLogEvent5_WdAssertion(v28);
          v27 = *((_QWORD *)a3 + 6);
        }
        if ( !*(_QWORD *)(v27 + 8) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v29 + 24) = 3147LL;
          WdLogEvent5_WdAssertion(v29);
          v27 = *((_QWORD *)a3 + 6);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 552LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v27 + 8));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10);
      }
      v30 = *((_DWORD *)VidPnSourceOwner + 82);
      if ( v30 != 2 )
      {
        if ( v30 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v10);
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v10, v31, v32);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v10);
        }
      }
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v14);
    }
  }
}
