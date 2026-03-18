/*
 * XREFs of ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00857AC
 * Callers:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00856C8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z @ 0x1C0085878 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K_K@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AA808 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006345C (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063BD4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0063C64 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 */

char __fastcall VIDMM_DEVICE::UnreferencePinnedAllocation(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2, char a3)
{
  char v6; // al
  __int64 v8; // rcx
  __int64 v9; // rdx
  const GUID *v10; // r8
  __int64 v11; // rcx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)this + 41392LL));
  v6 = *((_BYTE *)a2 + 25);
  if ( (v6 & 1) != 0 )
  {
    *((_BYTE *)a2 + 25) = v6 & 0xFE;
    if ( a3 )
    {
      v8 = *(_QWORD *)this + 41392LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v12,
      (struct _KTHREAD **)(*((_QWORD *)this + 2) + 360LL));
    if ( !(*((_BYTE *)a2 + 25) & 1 | *((_DWORD *)a2 + 38)) )
    {
      VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2));
      VIDMM_DEVICE::NotifyAllocationEvicted((VIDMM_DEVICE ***)this, a2);
      VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*((VIDMM_PROCESS_ADAPTER_INFO **)this + 2), v9, v10);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 1;
  }
  else
  {
    if ( a3 )
    {
      v11 = *(_QWORD *)this + 41392LL;
      *(_QWORD *)(v11 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
    return 0;
  }
}
