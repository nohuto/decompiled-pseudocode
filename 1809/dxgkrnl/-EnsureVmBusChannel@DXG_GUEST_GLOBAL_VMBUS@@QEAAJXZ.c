/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C01E9ABC
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C020F330 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E8050 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct VMBCHANNEL__ **this)
{
  struct _DEVICE_OBJECT *v2; // rdx
  int VmBusChannel; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v8, this + 1);
  if ( *this
    || (VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this, v2), v5 = VmBusChannel, VmBusChannel >= 0) )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (unsigned int)v5;
}
