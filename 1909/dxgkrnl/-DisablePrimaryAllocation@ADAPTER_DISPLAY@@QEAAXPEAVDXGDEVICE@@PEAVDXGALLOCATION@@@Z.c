/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00CAEAC
 * Callers:
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00021A0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C001AB40 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CA3A4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD4B0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CFE5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C014D824 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014DC2C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C014FF94 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F5BDC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C022F2F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  char v3; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  struct ADAPTER_RENDER *v15; // r9
  unsigned __int8 IsLegacyDisplayStateSynchronization; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // r14
  __int64 v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r14
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // eax
  int v36; // r8d
  struct COREDEVICEACCESS *v37; // r9

  v3 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v17 + 24) = 3225LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v7 & 2) == 0 && (v7 & 1) == 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, a2);
    *(_QWORD *)(v19 + 24) = 3227LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v20 + 24) = 3228LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v21 + 24) = 3229LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v12 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v12 >= *((_DWORD *)this + 20) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v22 + 24) = 3232LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v13 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 216) == *(_QWORD *)(v13 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v13 + 16));
    if ( *(int *)(v14 + 2452) >= 2000 )
    {
      v23 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v12)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v12)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v12) + v12 + 272) & 0x200) != 0 )
      {
        if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v12) == 3
          && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v3 = 1;
          v23 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v12) == VidPnSourceOwner )
        {
          v23 = 1;
        }
      }
      else
      {
        v23 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v12, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                           + 6);
      }
      v24 = *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL);
      if ( *(_DWORD *)(v24 + 176) == 1 )
      {
        v25 = 0;
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8LL, (unsigned int)v12);
        }
        else
        {
          if ( v23 )
            v25 = 1 << v12;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v12,
            0,
            v25,
            0);
        }
      }
      if ( v23 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2584LL));
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 520LL)
                                                                           + 8LL)
                                                               + 544LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 528LL),
               (unsigned int)v12) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v12);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v26);
        v27 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v12, 0, 2u, 0);
        v30 = v27;
        if ( v27 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v24, v28, v29);
          v31[3] = (unsigned int)v12;
          v31[4] = this[2];
          v31[5] = v30;
          WdLogEvent5_WdError(v31);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 82) == 2 )
      {
        v32 = *((_QWORD *)a3 + 6);
        if ( (*(_DWORD *)(v32 + 4) & 2) == 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v24, v32);
          *(_QWORD *)(v33 + 24) = 3363LL;
          WdLogEvent5_WdAssertion(v33);
          v32 = *((_QWORD *)a3 + 6);
        }
        if ( !*(_QWORD *)(v32 + 8) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v24, v32);
          *(_QWORD *)(v34 + 24) = 3364LL;
          WdLogEvent5_WdAssertion(v34);
          v32 = *((_QWORD *)a3 + 6);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 544LL) + 8LL)
                                               + 192LL))(
          *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 552LL),
          *(_QWORD *)(v32 + 8));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v12);
      }
      v35 = *((_DWORD *)VidPnSourceOwner + 82);
      if ( v35 != 2 )
      {
        if ( v35 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v12);
          if ( *(int *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2452LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v12, v36, v37);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v12);
        }
      }
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v15);
    }
  }
}
