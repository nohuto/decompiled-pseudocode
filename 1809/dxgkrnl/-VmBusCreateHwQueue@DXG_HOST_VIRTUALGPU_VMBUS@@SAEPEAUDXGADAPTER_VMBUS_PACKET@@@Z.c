/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED030
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036594 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C02172D8 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // r15d
  int HwQueueInternal; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v16[7]; // [rsp+38h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 804LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    goto LABEL_13;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v6 = v5;
  if ( !v5 )
    goto LABEL_13;
  v7 = *(unsigned int *)(v5 + 64);
  v8 = *((unsigned int *)a1 + 22) - 71LL;
  if ( v8 < v7 )
  {
    v4 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v4 + 32) = 810LL;
    goto LABEL_3;
  }
  v9 = v7 + 71;
  memset(v16, 0, 0x30uLL);
  v16[0] = *(_QWORD *)(v6 + 56);
  if ( *(_DWORD *)(v6 + 64) )
  {
    v16[2] = v6 + 68;
    LODWORD(v16[1]) = *(_DWORD *)(v6 + 64);
  }
  HwQueueInternal = DxgkCreateHwQueueInternal(v16, 0LL);
  v12 = HwQueueInternal;
  *(_DWORD *)(v6 + 24) = HwQueueInternal;
  if ( HwQueueInternal < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    *(_QWORD *)(v13 + 32) = 844LL;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    *(_QWORD *)(v6 + 28) = v16[3];
    *(_QWORD *)(v6 + 48) = v16[5];
    *(_QWORD *)(v6 + 40) = v16[4];
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)v6, v9);
  v3 = 1;
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
