/*
 * XREFs of ?VmBusInterfaceDereference@@YAXXZ @ 0x1C01F00A0
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C01E7AA4 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C01E7DA8 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C01E87BC (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0257E28 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C025823C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall VmBusInterfaceDereference(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  struct DXGGLOBAL *v3; // rax

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 576));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1C008FBC8)(qword_1C008FBB8);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v3 = DXGGLOBAL::GetGlobal(v2);
  *((_QWORD *)v3 + 73) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v3 + 576, 0LL);
  KeLeaveCriticalRegion();
}
