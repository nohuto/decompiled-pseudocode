/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C015A9FC
 * Callers:
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00C7698 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0156290 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01F388C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001FE4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00021A0 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C001AB40 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CA3A4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CFE5C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C014D824 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014DC2C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C014FF94 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F5BDC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C022F2F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned __int8 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // r13
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v20; // r8
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // edi
  int v24; // r14d
  unsigned int i; // edi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  _QWORD *v32; // rax
  int v33; // r8d
  struct COREDEVICEACCESS *v34; // r9

  v4 = a4;
  if ( !a2 || *((_DWORD *)a2 + 82) == 2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3499LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 20) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v15 + 24) = 3500LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v16 + 24) = 3501LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v17 + 24) = 3502LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v12 = *((_QWORD *)a2 + 2);
  v13 = *(_QWORD *)(v12 + 16);
  if ( *((_QWORD *)a2 + 216) == v13 )
  {
    if ( *(int *)(v13 + 2452) >= 2000 )
    {
      v18 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v12 + 16));
      if ( *(_DWORD *)(v20 + 176) == 1 && !v4 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8, a3, 0);
        }
        else
        {
          v21 = 0;
          v22 = 0;
          v23 = 0;
          if ( *((_DWORD *)this + 20) )
          {
            do
            {
              if ( a3 == -3 || v23 == a3 )
              {
                v24 = 1 << v23;
                if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v23) == a2 )
                  v22 |= v24;
                v21 |= v24;
              }
              ++v23;
            }
            while ( v23 < *((_DWORD *)this + 20) );
            v4 = a4;
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), v21, 0, v22, 0);
        }
      }
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        if ( a3 == -3 || i == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, i) == a2 )
          {
            if ( !v18 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 176LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2584LL));
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 520LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 528LL),
                     i) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL), v26);
              v18 = 1;
            }
            v27 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, i, 0, 8, v4);
            v31 = v27;
            if ( v27 < 0 )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
              v32[3] = i;
              v32[4] = this[2];
              v32[5] = v31;
              WdLogEvent5_WdError(v32);
            }
          }
          if ( *((_DWORD *)a2 + 82) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, i);
            if ( *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2452LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)a2, i, v33, v34);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, i);
          }
        }
        v4 = a4;
      }
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, (PERESOURCE **)v12);
    }
  }
}
