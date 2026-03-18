/*
 * XREFs of ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0218550
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C01022DC (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0208470 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C023ACE8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C02444E0 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(struct _KTHREAD **this, unsigned int a2)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v4, this + 1);
  if ( *((_BYTE *)this + 48) )
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))qword_1C00A3C10)(*this, a2);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
