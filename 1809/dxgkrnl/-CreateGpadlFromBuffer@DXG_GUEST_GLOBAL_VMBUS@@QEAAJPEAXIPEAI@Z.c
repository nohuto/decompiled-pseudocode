/*
 * XREFs of ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x1C01E7CC4
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C01F2D0C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
        DXG_GUEST_GLOBAL_VMBUS *this,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (DXG_GUEST_GLOBAL_VMBUS *)((char *)this + 8));
  LODWORD(a4) = ((__int64 (__fastcall *)(_QWORD, _QWORD, void *, _QWORD, unsigned int *))qword_1C008FBE0)(
                  *(_QWORD *)this,
                  0LL,
                  a2,
                  a3,
                  a4);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return (unsigned int)a4;
}
