/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A380
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  struct VMBPACKETCOMPLETION__ *v17; // rcx
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v10 = v7;
    if ( !v7 )
      goto LABEL_13;
    v11 = *(_DWORD *)(v7 + 64);
    if ( v11 <= 0x10 )
    {
      v14 = *((unsigned int *)a1 + 22);
      v15 = 4 * v11;
      if ( v14 - 80 >= v15 )
      {
        v16 = v14 - v15 - 80;
        if ( v16 >= *(unsigned int *)(v10 + 52) )
        {
          *(_QWORD *)(v10 + 72) = v10 + 80;
          *(_QWORD *)(v10 + 56) = v15 + v10 + 80;
          v13 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v10 + 24));
          goto LABEL_12;
        }
        v12 = WdLogNewEntry5_WdError(v10, v16, v15);
        *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v12 + 32) = 4002LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v10, v14, v15);
        *(_QWORD *)(v12 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v10, v8, v9);
      *(_QWORD *)(v12 + 24) = 3987LL;
    }
    WdLogEvent5_WdError(v12);
    v13 = -1073741811;
LABEL_12:
    v17 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v20 = v13;
    VmBusCompletePacket(v17, &v20, 4u);
    v5 = 1;
    goto LABEL_13;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3978LL;
  WdLogEvent5_WdError(v6);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v5;
}
