/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0219A64
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0243918 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0217E30 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct VMBCHANNEL__ **this)
{
  struct _DEVICE_OBJECT *v2; // rdx
  int VmBusChannel; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, this + 1);
  if ( *this
    || (VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this, v2), v7 = VmBusChannel, VmBusChannel >= 0) )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return (unsigned int)v7;
}
