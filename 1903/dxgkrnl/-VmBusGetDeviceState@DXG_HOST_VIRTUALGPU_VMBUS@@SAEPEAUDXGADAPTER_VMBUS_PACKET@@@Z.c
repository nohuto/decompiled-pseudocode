/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021F520
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkGetDeviceState @ 0x1C012F1B0 (DxgkGetDeviceState.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rsi
  int DeviceState; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[32]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    if ( v7 )
    {
      memset(v12, 0, sizeof(v12));
      v12[0] = *(_OWORD *)(v7 + 24);
      v12[1] = *(_OWORD *)(v7 + 40);
      v12[2] = *(_OWORD *)(v7 + 56);
      *(_QWORD *)&v12[3] = *(_QWORD *)(v7 + 72);
      DeviceState = DxgkGetDeviceState((__int64)v12);
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      DWORD2(v12[3]) = DeviceState;
      VmBusCompletePacket(v9, v12, 0x40u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3327LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v5;
}
