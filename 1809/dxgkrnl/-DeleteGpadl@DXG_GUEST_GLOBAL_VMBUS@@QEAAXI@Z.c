/*
 * XREFs of ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C01E876C
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C012C1C0 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01D997C (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C020FD68 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(DXG_GUEST_GLOBAL_VMBUS *this, unsigned int a2)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v4,
    (DXG_GUEST_GLOBAL_VMBUS *)((char *)this + 8));
  if ( *((_BYTE *)this + 48) )
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C008FBF0)(*(_QWORD *)this, a2);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
