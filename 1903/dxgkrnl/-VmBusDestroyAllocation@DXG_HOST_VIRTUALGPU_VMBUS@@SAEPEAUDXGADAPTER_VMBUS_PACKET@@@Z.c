/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E240
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C9F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkDestroyAllocation2 @ 0x1C0138950 (DxgkDestroyAllocation2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  int v10; // eax
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+34h] [rbp-24h]
  _BYTE v17[32]; // [rsp+38h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v17,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v7 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v7 )
      goto LABEL_9;
    v9 = (unsigned int)v7[8];
    if ( !(_DWORD)v9 || ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) / v9 >= 4 )
    {
      v13[0] = v7[6];
      v13[1] = v7[7];
      v14 = v7 + 10;
      v16 = v7[9];
      v15 = v9;
      v10 = DxgkDestroyAllocation2((ULONG64)v13);
      v11 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
      v18 = v10;
      VmBusCompletePacket(v11, &v18, 4u);
      v5 = 1;
      goto LABEL_9;
    }
    v6 = WdLogNewEntry5_WdError(v8, ((unsigned __int64)*((unsigned int *)a1 + 22) - 44) % v9, v7);
    *(_QWORD *)(v6 + 24) = 1127LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 1120LL;
  }
  WdLogEvent5_WdError(v6);
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v5;
}
