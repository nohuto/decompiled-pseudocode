/*
 * XREFs of ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00815C8
 * Callers:
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00814F8 (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002A70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FAA4 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005FB34 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00816A8 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferencePinnedAllocation(
        VIDMM_PROCESS_ADAPTER_INFO **this,
        struct VIDMM_ALLOC *a2,
        bool *a3)
{
  char v6; // al
  bool v7; // cl
  __int64 v8; // rdx
  const GUID *v9; // r8
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( *(_BYTE *)(**(_QWORD **)a2 + 96LL) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = a2;
    WdLogEvent5_WdAssertion(v11);
    return 3223191814LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)*this + 5174, 0);
    DXGPUSHLOCK::AcquireExclusive(v13);
    v6 = *((_BYTE *)a2 + 25);
    v7 = 1;
    v14 = 2;
    if ( (v6 & 1) != 0 )
    {
      *((_BYTE *)a2 + 25) = v6 | 4;
    }
    else
    {
      *((_BYTE *)a2 + 25) = v6 | 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v15,
        (struct _KTHREAD **)this[2] + 45);
      if ( !*((_DWORD *)a2 + 38) )
      {
        VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(this[2]);
        VIDMM_DEVICE::NotifyAllocationResident((VIDMM_DEVICE *)this, a2);
        VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(this[2], v8, v9);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
      v7 = 0;
    }
    *a3 = v7;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 0LL;
  }
}
