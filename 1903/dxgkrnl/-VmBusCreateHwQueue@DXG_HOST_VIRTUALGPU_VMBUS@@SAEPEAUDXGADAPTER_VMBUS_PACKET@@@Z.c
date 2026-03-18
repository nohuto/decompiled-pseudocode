/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C97C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_PRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_PRESENTHISTO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x1C024B688 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  int HwQueueInternal; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  _BYTE v21[24]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v22[7]; // [rsp+38h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v21,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 805LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    goto LABEL_13;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v10 = v7;
  if ( !v7 )
    goto LABEL_13;
  v11 = *(unsigned int *)(v7 + 64);
  v12 = *((unsigned int *)a1 + 22) - 71LL;
  if ( v12 < v11 )
  {
    v6 = WdLogNewEntry5_WdError(v12, v8, v9);
    *(_QWORD *)(v6 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v6 + 32) = 811LL;
    goto LABEL_3;
  }
  v13 = v11 + 71;
  memset(v22, 0, 0x30uLL);
  v22[0] = *(_QWORD *)(v10 + 56);
  if ( *(_DWORD *)(v10 + 64) )
  {
    v22[2] = v10 + 68;
    LODWORD(v22[1]) = *(_DWORD *)(v10 + 64);
  }
  HwQueueInternal = DxgkCreateHwQueueInternal(v22, 0LL);
  v18 = HwQueueInternal;
  *(_DWORD *)(v10 + 24) = HwQueueInternal;
  if ( HwQueueInternal < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v18;
    *(_QWORD *)(v19 + 32) = 845LL;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    *(_QWORD *)(v10 + 28) = v22[3];
    *(_QWORD *)(v10 + 48) = v22[5];
    *(_QWORD *)(v10 + 40) = v22[4];
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)v10, v13);
  v5 = 1;
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v5;
}
