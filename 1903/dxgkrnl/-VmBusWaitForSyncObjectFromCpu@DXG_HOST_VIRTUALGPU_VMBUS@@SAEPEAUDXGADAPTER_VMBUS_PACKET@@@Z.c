/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A510
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C8DC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F2030 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  GUID *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  GUID *PoolWithTag; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  _BYTE v28[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v29; // [rsp+38h] [rbp-28h] BYREF
  int v30; // [rsp+80h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v28,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v6 + 24) = 3100LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_24;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  if ( !v7 )
    goto LABEL_24;
  v30 = -1073741811;
  memset(&v29, 0, sizeof(v29));
  v10 = *(unsigned int *)(v7 + 28);
  v11 = 0LL;
  v12 = *(_QWORD *)(v7 + 40);
  if ( (_DWORD)v10
    && (v8 = (unsigned int)v10, v9 = 0xFFFFFFFFLL, v13 = 4 * v10, v13 <= 0xFFFFFFFF)
    && (v8 *= 8LL, v8 <= 0xFFFFFFFF) )
  {
    v14 = v13 + 56;
    if ( v14 < 0x38 )
    {
      v16 = WdLogNewEntry5_WdWarning(v8, v12, 0xFFFFFFFFLL);
      *(_QWORD *)(v16 + 24) = 3120LL;
    }
    else
    {
      v15 = v14 + (unsigned int)v8;
      if ( (unsigned int)v15 < v14 )
      {
        v16 = WdLogNewEntry5_WdWarning(v15, v12, 0xFFFFFFFFLL);
        *(_QWORD *)(v16 + 24) = 3125LL;
      }
      else if ( *((_DWORD *)a1 + 22) >= (unsigned int)v15 )
      {
        if ( v12 )
        {
          PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
          v11 = PoolWithTag;
          if ( PoolWithTag )
          {
            *(_QWORD *)&PoolWithTag->Data1 = 0LL;
            *(_QWORD *)PoolWithTag->Data4 = 0LL;
            *(_QWORD *)&PoolWithTag[1].Data1 = 0LL;
            *(_QWORD *)&PoolWithTag->Data1 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
            *(_QWORD *)PoolWithTag->Data4 = *(_QWORD *)(v7 + 40);
            LOBYTE(PoolWithTag[1].Data1) = *(_BYTE *)(v7 + 48);
            v29.ObjectHandleArray = (const D3DKMT_HANDLE *)(v7 + 56);
            v29.FenceValueArray = (const UINT64 *)(v7 + 4 * (*(unsigned int *)(v7 + 28) + 14LL));
            v29.Flags.Value = *(_DWORD *)(v7 + 32);
            v29.hDevice = *(_DWORD *)(v7 + 24);
            v29.ObjectCount = *(_DWORD *)(v7 + 28);
            v29.hAsyncEvent = PoolWithTag;
            v30 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v29, 0, PoolWithTag);
          }
          else
          {
            v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
            *(_QWORD *)(v22 + 24) = 3146LL;
            WdLogEvent5_WdLowResource(v22);
            v30 = -1073741801;
          }
          goto LABEL_20;
        }
        v16 = WdLogNewEntry5_WdWarning(v15, 0LL, 0xFFFFFFFFLL);
        *(_QWORD *)(v16 + 24) = 3139LL;
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(v15, v12, 0xFFFFFFFFLL);
        *(_QWORD *)(v16 + 24) = 3130LL;
      }
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v8, v12, v9);
    *(_QWORD *)(v16 + 24) = 3115LL;
  }
  WdLogEvent5_WdWarning(v16);
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v30, 4u);
  if ( v30 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = 3174LL;
    WdLogEvent5_WdWarning(v26);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x4B677844u);
  }
  v5 = 1;
LABEL_24:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v5;
}
