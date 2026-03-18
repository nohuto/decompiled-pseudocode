/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C011FD6C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C011F670 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct _LIST_ENTRY *Flink; // rcx
  PERESOURCE *v11; // rax
  unsigned int v12; // ecx
  PERESOURCE *v13; // r9
  __int64 v14; // r14
  __int64 v15; // rbp
  PERESOURCE *v16; // rax
  struct DXGALLOCATION *v17; // r8
  PERESOURCE *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  PERESOURCE *v22; // rdx
  PERESOURCE v23; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2])
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v25 + 24) = 1084LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v7 = 470 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)&this[14][470 * v4]) )
  {
    Current = DXGPROCESS::GetCurrent();
    Flink = this[14][v7 + 3]->SystemResourcesList.Flink;
    if ( (struct _LIST_ENTRY *)*((_QWORD *)Current + 7) != Flink[1164].Flink )
    {
      v27 = WdLogNewEntry5_WdAssertion(Flink);
      *(_QWORD *)(v27 + 24) = 1101LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v11 = this[2];
    if ( *((int *)v11 + 540) >= 0x2000 )
      v12 = *((_DWORD *)v11 + 64);
    else
      v12 = 1;
    if ( *((_DWORD *)a2 + 116) == 4 )
    {
      if ( v12 )
      {
        v28 = v7 * 8 + 88;
        v29 = v12;
        do
        {
          *(PERESOURCE *)((char *)this[14] + v28) = 0LL;
          v28 += 8LL;
          --v29;
        }
        while ( v29 );
      }
      this[14][v7 + 75] = 0LL;
    }
    else
    {
      v13 = this[14];
      if ( v13[v7 + 11] )
      {
        if ( v12 )
        {
          v14 = v7 * 8 + 88;
          v15 = v12;
          v16 = this[14];
          do
          {
            v17 = *(struct DXGALLOCATION **)((char *)v16 + v14);
            v13 = v16;
            if ( v17 )
            {
              ADAPTER_DISPLAY::DisablePrimaryAllocation(this, a2, v17);
              v13 = this[14];
            }
            v16 = this[14];
            v14 += 8LL;
            --v15;
          }
          while ( v15 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          (struct DXGRESOURCE *)v13[v7 + 11]->ExclusiveWaiters,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v18 = this[2];
        if ( *((int *)v18 + 540) >= 0x2000 )
          v19 = *((_DWORD *)v18 + 64);
        else
          v19 = 1;
        if ( v19 )
        {
          v20 = v7 * 8 + 88;
          v21 = v19;
          do
          {
            *(PERESOURCE *)((char *)this[14] + v20) = 0LL;
            v20 += 8LL;
            --v21;
          }
          while ( v21 );
        }
      }
      v22 = this[14];
      v23 = v22[v7 + 75];
      if ( v23 )
      {
        if ( *((_QWORD *)a2 + 216) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1749) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            (struct DXGRESOURCE *)v23->ExclusiveWaiters,
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(v22[v7 + 77]);
          this[14][v7 + 77] = 0LL;
        }
        this[14][v7 + 75] = 0LL;
      }
      if ( *((_DWORD *)this[2] + 44) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this[13], (unsigned int)v4, 0LL, 0LL, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = this[2];
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
}
