/*
 * XREFs of ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C022A1FC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C022A3F8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C01E9E20 (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::PauseVmBusChannels(struct _KTHREAD **this)
{
  char *v1; // rdi
  char *v3; // rsi
  struct _KTHREAD *i; // rbx

  v1 = (char *)(this + 8);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 8));
  DXG_VMBUS_CHANNEL_BASE::PauseChannel(this + 11);
  v3 = (char *)(this + 5);
  for ( i = this[5]; i != (struct _KTHREAD *)v3; i = *(struct _KTHREAD **)i )
  {
    if ( *((_BYTE *)i + 16) )
      DXG_VMBUS_CHANNEL_BASE::PauseChannel((struct _KTHREAD **)i + 4);
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
