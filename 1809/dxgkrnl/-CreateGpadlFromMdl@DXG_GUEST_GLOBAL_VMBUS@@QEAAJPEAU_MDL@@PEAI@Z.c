/*
 * XREFs of ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C01E7D3C
 * Callers:
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C01F2D0C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C020F330 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _MDL *a2,
        unsigned int *a3)
{
  _BYTE v7[40]; // [rsp+40h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v7,
    (DXG_GUEST_GLOBAL_VMBUS *)((char *)this + 8));
  LODWORD(a3) = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct _MDL *, _QWORD, _DWORD, unsigned int *))qword_1C008FBE8)(
                  *(_QWORD *)this,
                  0LL,
                  a2,
                  0LL,
                  0,
                  a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  return (unsigned int)a3;
}
