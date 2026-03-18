/*
 * XREFs of ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0228CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0135570 (DxgkSetQueuedLimit.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetQueuedLimit(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  const GUID *v9; // r8
  __int128 *v10; // rbx
  int v11; // eax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+48h] [rbp-20h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v7 )
    {
      v10 = (__int128 *)(v7 + 24);
      v15 = 0uLL;
      v16 = 0;
      v11 = DxgkSetQueuedLimit(v7 + 24, v8, v9);
      v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v16 = v11;
      v15 = *v10;
      VmBusCompletePacket(v12, &v15, 0x14u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3313LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v5;
}
