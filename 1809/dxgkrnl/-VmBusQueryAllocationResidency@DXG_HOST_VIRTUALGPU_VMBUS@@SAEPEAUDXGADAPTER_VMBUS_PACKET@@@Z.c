/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C01DAFC0 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // eax
  char v11; // bp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  int *v20; // rsi
  int AllocationResidency; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 2426LL;
LABEL_21:
    WdLogEvent5_WdError(v3);
    goto LABEL_22;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v5 = v4;
  if ( !v4 )
  {
LABEL_22:
    v11 = 0;
    goto LABEL_23;
  }
  v6 = *(unsigned int *)(v4 + 28);
  if ( (_DWORD)v6 )
    v7 = 0LL;
  else
    v7 = *(unsigned int *)(v4 + 40);
  v8 = 4 * v7;
  if ( v8 > 0xFFFFFFFF )
  {
    v3 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v3 + 24) = 2433LL;
    goto LABEL_21;
  }
  v9 = v8;
  v10 = v8 + 56;
  if ( (unsigned int)(v9 + 56) < 0x38 )
  {
    v3 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v3 + 24) = 2439LL;
    goto LABEL_21;
  }
  if ( v10 > *((_DWORD *)a1 + 22) )
  {
    v3 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v3 + 24) = 2444LL;
    goto LABEL_21;
  }
  v11 = 1;
  v12 = 1LL;
  if ( !(_DWORD)v6 )
    v12 = *(unsigned int *)(v5 + 40);
  v13 = 4 * v12;
  if ( v13 > 0xFFFFFFFF )
  {
    v3 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v3 + 24) = 2453LL;
    goto LABEL_21;
  }
  if ( (unsigned int)v13 >= 0xFFFFFFFC )
  {
    v3 = WdLogNewEntry5_WdError((unsigned int)v13);
    *(_QWORD *)(v3 + 24) = 2458LL;
    goto LABEL_21;
  }
  v14 = v13 + 4;
  v16 = (int *)operator new((unsigned int)(v13 + 4), 0x4B677844u, 1, (POOL_TYPE)512);
  v20 = v16;
  if ( !v16 )
  {
    v3 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v3 + 24) = 2465LL;
    goto LABEL_21;
  }
  *(_QWORD *)(v5 + 32) = v5 + 56;
  *(_QWORD *)(v5 + 48) = v16 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v5 + 24, v17, v19);
  *v20 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = *v20;
    WdLogEvent5_WdError(v23);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v20, v14);
  operator delete[](v20);
LABEL_23:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v11;
}
