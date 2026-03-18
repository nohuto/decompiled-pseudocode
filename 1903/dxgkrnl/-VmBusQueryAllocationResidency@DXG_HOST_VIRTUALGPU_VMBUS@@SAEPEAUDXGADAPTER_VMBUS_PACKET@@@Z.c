/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C02094E0 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // di
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int *v19; // rsi
  const GUID *v20; // r8
  int AllocationResidency; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v27,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = 2388LL;
LABEL_24:
    WdLogEvent5_WdError(v5);
    goto LABEL_25;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v8 = v6;
  if ( !v6 )
  {
LABEL_25:
    v13 = 0;
    goto LABEL_26;
  }
  v9 = *(unsigned int *)(v6 + 28);
  if ( (_DWORD)v9 )
    v10 = 0LL;
  else
    v10 = *(unsigned int *)(v6 + 40);
  v11 = 4 * v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v5 = WdLogNewEntry5_WdError(v9, v7, 0xFFFFFFFFLL);
    *(_QWORD *)(v5 + 24) = 2395LL;
    goto LABEL_24;
  }
  v12 = (unsigned int)(v11 + 56);
  if ( (unsigned int)v11 >= 0xFFFFFFC8 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12, 0xFFFFFFFFLL);
    *(_QWORD *)(v5 + 24) = 2401LL;
    goto LABEL_24;
  }
  if ( (unsigned int)v12 > *((_DWORD *)a1 + 22) )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12, 0xFFFFFFFFLL);
    *(_QWORD *)(v5 + 24) = 2406LL;
    goto LABEL_24;
  }
  v13 = 1;
  v14 = 1LL;
  if ( !(_DWORD)v9 )
    v14 = *(unsigned int *)(v8 + 40);
  v15 = 4 * v14;
  if ( v15 > 0xFFFFFFFF )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12, 0xFFFFFFFFLL);
    *(_QWORD *)(v5 + 24) = 2415LL;
    goto LABEL_24;
  }
  v16 = v15 + 4;
  if ( (unsigned int)v15 >= 0xFFFFFFFC )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12, 0xFFFFFFFFLL);
    *(_QWORD *)(v5 + 24) = 2420LL;
    goto LABEL_24;
  }
  v19 = (int *)operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v19 )
  {
    v5 = WdLogNewEntry5_WdError(v18, v17, v20);
    *(_QWORD *)(v5 + 24) = 2427LL;
    goto LABEL_24;
  }
  *(_QWORD *)(v8 + 32) = v8 + 56;
  *(_QWORD *)(v8 + 48) = v19 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v8 + 24, v17, v20);
  *v19 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = *v19;
    WdLogEvent5_WdError(v25);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v19, v16);
  operator delete[](v19);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  return v13;
}
