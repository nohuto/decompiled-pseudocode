/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EFAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C00D7D40 (DxgkGetDeviceState.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  int DeviceState; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  _BYTE v9[32]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    if ( v5 )
    {
      memset(v10, 0, sizeof(v10));
      v10[0] = *(_OWORD *)(v5 + 24);
      v10[1] = *(_OWORD *)(v5 + 40);
      v10[2] = *(_OWORD *)(v5 + 56);
      *(_QWORD *)&v10[3] = *(_QWORD *)(v5 + 72);
      DeviceState = DxgkGetDeviceState((__int64)v10);
      v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      DWORD2(v10[3]) = DeviceState;
      VmBusCompletePacket(v7, v10, 0x40u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 3389LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v3;
}
