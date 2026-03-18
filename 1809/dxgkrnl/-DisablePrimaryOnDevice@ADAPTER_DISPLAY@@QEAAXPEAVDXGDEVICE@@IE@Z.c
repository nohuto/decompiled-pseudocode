/*
 * XREFs of ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0122B04 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01C4348 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00D02A4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012C500 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0138370 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01FE9BC (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryOnDevice(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned __int8 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  DXGADAPTER *v15; // rcx
  struct ADAPTER_RENDER *v16; // r9
  char v17; // r13
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v19; // r8
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  unsigned int v22; // edi
  int v23; // r14d
  unsigned int i; // edi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  _QWORD *v28; // rax
  int v29; // r8d
  struct COREDEVICEACCESS *v30; // r9

  v4 = a4;
  if ( !a2 || *((_DWORD *)a2 + 82) == 2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 3282LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3 != -3 && a3 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 3283LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 3284LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v13 + 24) = 3285LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 216) == *(_QWORD *)(v14 + 16) )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v14 + 16)) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, v16);
    }
    else
    {
      v17 = 0;
      IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(v15);
      if ( *(_DWORD *)(v19 + 176) == 1 && !v4 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)a2 + 2), 8, a3, 0);
        }
        else
        {
          v20 = 0;
          v21 = 0;
          v22 = 0;
          if ( *((_DWORD *)this + 20) )
          {
            do
            {
              if ( a3 == -3 || v22 == a3 )
              {
                v23 = 1 << v22;
                if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v22) == a2 )
                  v21 |= v23;
                v20 |= v23;
              }
              ++v22;
            }
            while ( v22 < *((_DWORD *)this + 20) );
            v4 = a4;
          }
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*((ADAPTER_RENDER **)a2 + 2), v20, 0, v21, 0);
        }
      }
      for ( i = 0; i < *((_DWORD *)this + 20); ++i )
      {
        if ( a3 == -3 || i == a3 )
        {
          if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, i) == a2 )
          {
            if ( !v17 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 176LL) == 1 )
                ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)a2 + 2));
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 2552LL));
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                             + 520LL)
                                                                                 + 8LL)
                                                                     + 544LL))(
                     *(_QWORD *)(*((_QWORD *)a2 + 2) + 528LL),
                     i) )
              {
                ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
              }
              DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL));
              v17 = 1;
            }
            v25 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, i, 0, 8u, v4);
            v27 = v25;
            if ( v25 < 0 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
              v28[3] = i;
              v28[4] = this[2];
              v28[5] = v27;
              WdLogEvent5_WdError(v28);
            }
          }
          if ( *((_DWORD *)a2 + 82) )
          {
            DXGDEVICE::UnpinPrimaryAllocations(a2, i);
            if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)a2, i, v29, v30);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations(a2, i);
          }
        }
        v4 = a4;
      }
    }
  }
}
