/*
 * XREFs of ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C0217AA4
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C02230A0 (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, this + 1);
  LODWORD(a4) = ((__int64 (__fastcall *)(struct _KTHREAD *, _QWORD, void *, _QWORD, unsigned int *))qword_1C00A3C00)(
                  *this,
                  0LL,
                  a2,
                  a3,
                  a4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return (unsigned int)a4;
}
