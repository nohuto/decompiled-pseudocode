/*
 * XREFs of ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C0219DC0
 * Callers:
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025F0F8 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::PauseChannel(struct _KTHREAD **this)
{
  char v1; // di

  v1 = 0;
  if ( this[2] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 1));
    v1 = 1;
  }
  if ( *this )
    ((void (*)(void))qword_1C00A3C98)();
  if ( v1 )
  {
    this[2] = 0LL;
    ExReleasePushLockExclusiveEx(this + 1, 0LL);
    KeLeaveCriticalRegion();
  }
}
