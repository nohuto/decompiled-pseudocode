/*
 * XREFs of ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A940
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA8C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateAllocationProperty @ 0x1C02562E0 (DxgkUpdateAllocationProperty.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateAllocationProperty(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3381LL;
LABEL_7:
    WdLogEvent5_WdError(v6);
    goto LABEL_8;
  }
  v15 = 0LL;
  v16 = 0LL;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY>((__int64)a1);
  v8 = v7;
  if ( v7 )
  {
    LODWORD(v16) = DxgkUpdateAllocationProperty(v7 + 24);
    if ( (int)v16 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v6 + 24) = (int)v16;
      goto LABEL_7;
    }
    v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v15 = *(_QWORD *)(v8 + 48);
    VmBusCompletePacket(v12, &v15, 0x10u);
    v5 = 1;
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v5;
}
