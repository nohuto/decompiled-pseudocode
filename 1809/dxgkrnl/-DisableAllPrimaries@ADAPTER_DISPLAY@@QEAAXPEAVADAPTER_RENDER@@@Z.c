/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FFD40 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001A35C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00D02A4 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00F6FF8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012C500 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0138370 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01FE9BC (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  PERESOURCE v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // eax
  bool v9; // bp
  unsigned int i; // ebp
  unsigned int v11; // edi
  __int64 v12; // r14
  PERESOURCE *v13; // rax
  struct ADAPTER_RENDER **v14; // rbp
  int v15; // r8d
  struct COREDEVICEACCESS *v16; // r9
  int v17; // eax
  __int64 v18; // r14
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  DXGDODPRESENT *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax

  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 3440LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v27 + 24) = 3441LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v28 + 24) = 3442LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( this[2][316] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
    {
      v29 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
      if ( (_DWORD)v29 != 5 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v30 + 24) = 3452LL;
        WdLogEvent5_WdAssertion(v30);
      }
    }
    ADAPTER_RENDER::DisableOverlays(a2);
  }
  else
  {
    v31 = (DXGDODPRESENT *)this[33];
    if ( v31 )
      DXGDODPRESENT::Flush(v31);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) == 1 )
    ADAPTER_RENDER::FlushScheduler(a2, 8LL, 0xFFFFFFFFLL, 0LL);
  v6 = (PERESOURCE)*((unsigned int *)this[2] + 44);
  if ( (_DWORD)v6 == 1 )
  {
    v7 = 0;
    v6 = this[2][316];
    v8 = *((_DWORD *)this + 20);
    if ( v8 )
    {
      v9 = v6 == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v7) )
        {
          if ( !v9 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2552LL));
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 65) + 8LL) + 544LL))(
                   *((_QWORD *)a2 + 66),
                   v7) )
            {
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v7);
            }
            DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
            v9 = 1;
          }
          v17 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v7, 0, 4u, 0);
          v18 = v17;
          if ( v17 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v6);
            v32[3] = v18;
            v32[4] = this[2];
            v32[5] = v7;
            WdLogEvent5_WdError(v32);
          }
        }
        v8 = *((_DWORD *)this + 20);
        ++v7;
      }
      while ( v7 < v8 );
    }
  }
  else
  {
    v8 = *((_DWORD *)this + 20);
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( this[14][470 * i + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v21 = v20 + 88;
        v22 = NumDifferentPhysicalAdapters;
        do
        {
          v23 = *(__int64 *)((char *)this[14] + v21);
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 48);
            if ( !v24 )
            {
              v33 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v33 + 24) = 3528LL;
              WdLogEvent5_WdAssertion(v33);
            }
            v25 = *(_DWORD *)(v24 + 4);
            if ( (v25 & 2) == 0 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v34 + 24) = 3529LL;
              WdLogEvent5_WdAssertion(v34);
              v25 = *(_DWORD *)(v24 + 4);
            }
            if ( ((v25 >> 6) & 0xF) != i )
            {
              v35 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v35 + 24) = 3530LL;
              WdLogEvent5_WdAssertion(v35);
            }
            if ( !*(_QWORD *)(v24 + 8) )
            {
              v36 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v36 + 24) = 3531LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( (*(_DWORD *)(v24 + 4) & 0x10) == 0 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
              {
                v37 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
                if ( (_DWORD)v37 != 5 )
                {
                  v38 = WdLogNewEntry5_WdAssertion(v37);
                  *(_QWORD *)(v38 + 24) = 3542LL;
                  WdLogEvent5_WdAssertion(v38);
                }
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 68),
                *((struct VIDMM_GLOBAL **)a2 + 69),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v24 + 8));
              *(_DWORD *)(v24 + 4) |= 0x10u;
            }
          }
          v21 += 8LL;
          --v22;
        }
        while ( v22 );
      }
    }
    v8 = *((_DWORD *)this + 20);
  }
  v11 = 0;
  if ( v8 )
  {
    do
    {
      v12 = 470LL * v11;
      v13 = this[14];
      v14 = (struct ADAPTER_RENDER **)v13[v12 + 86];
      if ( v14 )
      {
        if ( a2 != v14[2] )
        {
          v39 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v39 + 24) = 3562LL;
          WdLogEvent5_WdAssertion(v39);
          v13 = this[14];
        }
        if ( LODWORD(v13[v12 + 86][3].OwnerTable) )
        {
          DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v14, v11);
          if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v14[2] + 2)) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v14, v11, v15, v16);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v14, v11);
        }
      }
      ++v11;
    }
    while ( v11 < *((_DWORD *)this + 20) );
  }
}
