/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9388 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4EC8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00CAEAC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00CB054 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0141A60 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *Current; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v14; // rdx
  PERESOURCE *v15; // rax
  unsigned int v16; // ecx
  PERESOURCE *v17; // r9
  __int64 v18; // r14
  __int64 v19; // rbp
  PERESOURCE *v20; // rax
  struct DXGALLOCATION *v21; // r8
  PERESOURCE *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  PERESOURCE *v26; // rdx
  PERESOURCE v27; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  PERESOURCE v34; // rcx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v29 + 24) = 1161LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v8 = 496 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][496 * v4]) )
  {
    Current = DXGPROCESS::GetCurrent();
    Flink = this[14][v8 + 3]->SystemResourcesList.Flink;
    v14 = Flink[1164].Flink;
    if ( *((struct _LIST_ENTRY **)Current + 7) != v14 )
    {
      v31 = WdLogNewEntry5_WdAssertion(Flink, v14);
      *(_QWORD *)(v31 + 24) = 1178LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v15 = this[2];
    if ( *((int *)v15 + 546) >= 0x2000 )
      v16 = *((_DWORD *)v15 + 64);
    else
      v16 = 1;
    if ( *((_DWORD *)a2 + 116) == 4 )
    {
      if ( v16 )
      {
        v32 = v8 * 8 + 88;
        v33 = v16;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v32) = 0LL;
          v32 += 8LL;
          --v33;
        }
        while ( v33 );
      }
      this[14][v8 + 75] = 0LL;
    }
    else
    {
      v17 = this[14];
      if ( v17[v8 + 11] )
      {
        if ( v16 )
        {
          v18 = v8 * 8 + 88;
          v19 = v16;
          v20 = this[14];
          do
          {
            v21 = *(struct DXGALLOCATION **)((char *)v20 + v18);
            v17 = v20;
            if ( v21 )
            {
              ADAPTER_DISPLAY::DisablePrimaryAllocation((ADAPTER_DISPLAY *)this, a2, v21);
              v17 = this[14];
            }
            v20 = this[14];
            v18 += 8LL;
            --v19;
          }
          while ( v19 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          (struct DXGRESOURCE *)v17[v8 + 11]->ExclusiveWaiters,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v22 = this[2];
        if ( *((int *)v22 + 546) >= 0x2000 )
          v23 = *((_DWORD *)v22 + 64);
        else
          v23 = 1;
        if ( v23 )
        {
          v24 = v8 * 8 + 88;
          v25 = v23;
          do
          {
            *(PERESOURCE *)((char *)this[14] + v24) = 0LL;
            v24 += 8LL;
            --v25;
          }
          while ( v25 );
        }
      }
      v26 = this[14];
      v27 = v26[v8 + 75];
      if ( v27 )
      {
        if ( *((_QWORD *)a2 + 216) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1749) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            (struct DXGRESOURCE *)v27->ExclusiveWaiters,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          v34 = v26[v8 + 77];
          if ( v34 )
          {
            ObfDereferenceObject(v34);
            this[14][v8 + 77] = 0LL;
          }
        }
        this[14][v8 + 75] = 0LL;
      }
      if ( *((_DWORD *)this[2] + 44) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], (unsigned int)v4, 0LL, 0LL, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v30 + 24) = this[2];
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    return 3221225485LL;
  }
}
