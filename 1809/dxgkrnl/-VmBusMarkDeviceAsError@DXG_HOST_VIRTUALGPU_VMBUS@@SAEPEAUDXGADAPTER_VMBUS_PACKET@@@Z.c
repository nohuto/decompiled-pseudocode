/*
 * XREFs of ?VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F0E60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003651C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkMarkDeviceAsError @ 0x1C00B2E60 (DxgkMarkDeviceAsError.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMarkDeviceAsError(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  const GUID *v7; // r8
  int v8; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
    if ( v5 )
    {
      v8 = DxgkMarkDeviceAsError(v5 + 24, v6, v7);
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v12 = v8;
      VmBusCompletePacket(v9, &v12, 4u);
      v3 = 1;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 869LL;
    WdLogEvent5_WdError(v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
