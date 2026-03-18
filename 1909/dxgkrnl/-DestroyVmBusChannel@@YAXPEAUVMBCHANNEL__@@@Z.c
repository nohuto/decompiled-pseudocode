/*
 * XREFs of ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C02185A0
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0217884 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C02185DC (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0218620 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C021864C (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C0220210 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

void __fastcall DestroyVmBusChannel(struct VMBCHANNEL__ *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C00A3C18)();
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3BF8)(a1);
    VmBusInterfaceDereference();
  }
}
