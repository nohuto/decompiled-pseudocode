/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00CFE5C
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00CAEAC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0159CF4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C015A9FC (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009DB0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C001AB40 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CA3A4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00D3BD8 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C014D824 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C014DC2C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C014FF94 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C022F2F8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
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
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r14
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  DXGDODPRESENT *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax

  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v29 + 24) = 3657LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v30 + 24) = 3658LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v31 + 24) = 3659LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( this[2][320] )
  {
    if ( *((_DWORD *)a2[2] + 44) != 1 )
    {
      v32 = *((unsigned int *)a2[2] + 44);
      if ( (_DWORD)v32 != 5 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v32, v6);
        *(_QWORD *)(v33 + 24) = 3669LL;
        WdLogEvent5_WdAssertion(v33);
      }
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v34 = (DXGDODPRESENT *)this[46];
    if ( v34 )
      DXGDODPRESENT::Flush(v34);
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
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v9);
            DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a2[2], v19);
            v11 = 1;
          }
          v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 4u, 0);
          v22 = v20;
          if ( v20 < 0 )
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdError(v8, v6, v21);
            v35[3] = v22;
            v35[4] = this[2];
            v35[5] = v9;
            WdLogEvent5_WdError(v35);
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
        v24 = v6 + 88;
        v25 = NumDifferentPhysicalAdapters;
        do
        {
          v26 = *(__int64 *)((char *)this[14] + v24);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 48);
            if ( !v27 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v36 + 24) = 3745LL;
              WdLogEvent5_WdAssertion(v36);
            }
            v28 = *(_DWORD *)(v27 + 4);
            if ( (v28 & 2) == 0 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v37 + 24) = 3746LL;
              WdLogEvent5_WdAssertion(v37);
              v28 = *(_DWORD *)(v27 + 4);
            }
            if ( ((v28 >> 6) & 0xF) != i )
            {
              v38 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v38 + 24) = 3747LL;
              WdLogEvent5_WdAssertion(v38);
            }
            if ( !*(_QWORD *)(v27 + 8) )
            {
              v39 = WdLogNewEntry5_WdAssertion(v8, v6);
              *(_QWORD *)(v39 + 24) = 3748LL;
              WdLogEvent5_WdAssertion(v39);
            }
            if ( (*(_DWORD *)(v27 + 4) & 0x10) == 0 )
            {
              if ( *((_DWORD *)a2[2] + 44) != 1 )
              {
                v40 = *((unsigned int *)a2[2] + 44);
                if ( (_DWORD)v40 != 5 )
                {
                  v41 = WdLogNewEntry5_WdAssertion(v40, v6);
                  *(_QWORD *)(v41 + 24) = 3759LL;
                  WdLogEvent5_WdAssertion(v41);
                }
              }
              ((void (__fastcall *)(PERESOURCE *, _QWORD))a2[68][1][1].Address)(a2[69], *(_QWORD *)(v27 + 8));
              *(_DWORD *)(v27 + 4) |= 0x10u;
            }
          }
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
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
          v42 = WdLogNewEntry5_WdAssertion(v8, v6);
          *(_QWORD *)(v42 + 24) = 3779LL;
          WdLogEvent5_WdAssertion(v42);
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
