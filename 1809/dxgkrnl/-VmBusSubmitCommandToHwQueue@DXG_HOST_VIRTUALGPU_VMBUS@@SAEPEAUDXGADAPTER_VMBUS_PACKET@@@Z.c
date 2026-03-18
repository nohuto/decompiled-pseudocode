/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F9BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0217C78 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v6 = v5;
    if ( !v5 )
      goto LABEL_13;
    v15 = 0;
    v7 = *(_DWORD *)(v5 + 64);
    if ( v7 <= 0x10 )
    {
      v10 = *((unsigned int *)a1 + 22);
      v11 = 4 * v7;
      if ( v10 - 80 >= v11 )
      {
        if ( v10 - v11 - 80 >= *(unsigned int *)(v6 + 52) )
        {
          *(_QWORD *)(v6 + 72) = v6 + 80;
          *(_QWORD *)(v6 + 56) = v11 + v6 + 80;
          v9 = DxgkSubmitCommandToHwQueueInternal((struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v6 + 24));
          goto LABEL_12;
        }
        v8 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 22);
        *(_QWORD *)(v8 + 32) = 4057LL;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 22);
      }
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = 4042LL;
    }
    WdLogEvent5_WdError(v8);
    v9 = -1073741811;
LABEL_12:
    v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v15 = v9;
    VmBusCompletePacket(v12, &v15, 4u);
    v3 = 1;
    goto LABEL_13;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 4033LL;
  WdLogEvent5_WdError(v4);
LABEL_13:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
