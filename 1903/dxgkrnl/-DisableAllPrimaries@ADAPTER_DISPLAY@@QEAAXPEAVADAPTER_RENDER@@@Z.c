/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00C9564
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00C9464 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113C70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0155E34 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0156B3C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00017CC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009B80 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00C85D0 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00C9820 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C98A4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00C9A18 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0124980 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C022EC88 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, PERESOURCE **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // eax
  bool v11; // bp
  unsigned int i; // ebp
  unsigned int v13; // edi
  __int64 v14; // r14
  PERESOURCE *v15; // rax
  struct ADAPTER_RENDER **v16; // rbp
  int v17; // r8d
  struct COREDEVICEACCESS *v18; // r9
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r14
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  DXGDODPRESENT *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax

  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v28 + 24) = 3650LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v29 + 24) = 3651LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v30 + 24) = 3652LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( this[2][320] )
  {
    if ( *((_DWORD *)a2[2] + 44) != 1 )
    {
      v31 = *((unsigned int *)a2[2] + 44);
      if ( (_DWORD)v31 != 5 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31, v6);
        *(_QWORD *)(v32 + 24) = 3662LL;
        WdLogEvent5_WdAssertion(v32);
      }
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v33 = (DXGDODPRESENT *)this[46];
    if ( v33 )
      DXGDODPRESENT::Flush(v33);
  }
  if ( *((_DWORD *)a2[2] + 44) == 1 )
    ADAPTER_RENDER::FlushScheduler(a2, 8LL, 0xFFFFFFFFLL);
  v8 = (PERESOURCE)*((unsigned int *)this[2] + 44);
  if ( (_DWORD)v8 == 1 )
  {
    v9 = 0;
    v8 = this[2][320];
    v10 = *((_DWORD *)this + 20);
    if ( v10 )
    {
      v11 = v8 == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v9) )
        {
          if ( !v11 )
          {
            _InterlockedIncrement((volatile signed __int32 *)a2[2] + 646);
            if ( (*(unsigned __int8 (__fastcall **)(PERESOURCE *, _QWORD))&a2[65][1][5].ActiveCount)(a2[66], v9) )
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
            DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a2[2]);
            v11 = 1;
          }
          v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 4u, 0);
          v21 = v19;
          if ( v19 < 0 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdError(v8, v6, v20);
            v34[3] = v21;
            v34[4] = this[2];
            v34[5] = v9;
            WdLogEvent5_WdError(v34);
          }
        }
        v10 = *((_DWORD *)this + 20);
        ++v9;
      }
      while ( v9 < v10 );
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 20);
  }
  for ( i = 0; i < v10; ++i )
  {
    v6 = 3968LL * i;
    if ( this[14][(unsigned __int64)v6 / 8 + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v23 = v6 + 88;
        v24 = NumDifferentPhysicalAdapters;
        do
        {
          v25 = *(__int64 *)((char *)this[14] + v23);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 48);
            if ( !v26 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v35 + 24) = 3738LL;
              WdLogEvent5_WdAssertion(v35);
            }
            v27 = *(_DWORD *)(v26 + 4);
            if ( (v27 & 2) == 0 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v36 + 24) = 3739LL;
              WdLogEvent5_WdAssertion(v36);
              v27 = *(_DWORD *)(v26 + 4);
            }
            if ( ((v27 >> 6) & 0xF) != i )
            {
              v37 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v37 + 24) = 3740LL;
              WdLogEvent5_WdAssertion(v37);
            }
            if ( !*(_QWORD *)(v26 + 8) )
            {
              v38 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v38 + 24) = 3741LL;
              WdLogEvent5_WdAssertion(v38);
            }
            if ( (*(_DWORD *)(v26 + 4) & 0x10) == 0 )
            {
              if ( *((_DWORD *)a2[2] + 44) != 1 )
              {
                v39 = *((unsigned int *)a2[2] + 44);
                if ( (_DWORD)v39 != 5 )
                {
                  v40 = WdLogNewEntry5_WdAssertion(v39, v6);
                  *(_QWORD *)(v40 + 24) = 3752LL;
                  WdLogEvent5_WdAssertion(v40);
                }
              }
              ((void (__fastcall *)(PERESOURCE *, _QWORD))a2[68][1][1].Address)(a2[69], *(_QWORD *)(v26 + 8));
              *(_DWORD *)(v26 + 4) |= 0x10u;
            }
          }
          v23 += 8LL;
          --v24;
        }
        while ( v24 );
      }
    }
    v10 = *((_DWORD *)this + 20);
  }
  v13 = 0;
  if ( v10 )
  {
    do
    {
      v14 = 496LL * v13;
      v15 = this[14];
      v16 = (struct ADAPTER_RENDER **)v15[v14 + 86];
      if ( v16 )
      {
        if ( a2 != (PERESOURCE **)v16[2] )
        {
          v41 = WdLogNewEntry5_WdAssertion(v8, v6);
          *(_QWORD *)(v41 + 24) = 3772LL;
          WdLogEvent5_WdAssertion(v41);
          v15 = this[14];
        }
        if ( LODWORD(v15[v14 + 86][3].OwnerTable) )
        {
          DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v16, v13);
          v8 = (PERESOURCE)*((_QWORD *)v16[2] + 2);
          if ( *((int *)&v8[23].OwnerEntry.8 + 1) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v16, v13, v17, v18);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v16, v13);
        }
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 20) );
  }
}
