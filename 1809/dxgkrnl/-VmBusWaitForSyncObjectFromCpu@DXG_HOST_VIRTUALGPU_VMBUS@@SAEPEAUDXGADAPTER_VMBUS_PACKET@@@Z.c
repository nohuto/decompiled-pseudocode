/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00364F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  GUID *v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  GUID *PoolWithTag; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _BYTE v26[24]; // [rsp+20h] [rbp-40h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v27; // [rsp+38h] [rbp-28h] BYREF
  int v28; // [rsp+80h] [rbp+20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v26,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = 3153LL;
    WdLogEvent5_WdError(v4);
    goto LABEL_25;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  if ( !v5 )
    goto LABEL_25;
  v28 = -1073741811;
  memset(&v27, 0, sizeof(v27));
  v9 = *(unsigned int *)(v5 + 28);
  v10 = 0LL;
  if ( !(_DWORD)v9 )
    goto LABEL_19;
  v7 = 0xFFFFFFFFLL;
  v8 = (unsigned int)v9;
  v11 = 4 * v9;
  v6 = 0xFFFFFFFFLL;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_19;
  v6 = (unsigned int)v11;
  v12 = (unsigned int)v8;
  v8 = 0xFFFFFFFFLL;
  v13 = 8 * v12;
  if ( v13 <= 0xFFFFFFFF )
  {
    v14 = (unsigned int)v13;
    if ( (unsigned int)(v6 + 56) < 0x38 )
    {
      v16 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 0xFFFFFFFFLL, (unsigned int)v13);
      *(_QWORD *)(v16 + 24) = 3173LL;
    }
    else
    {
      v15 = (unsigned int)(v6 + 56);
      v17 = v13 + v15;
      if ( (int)v14 + (int)v15 >= (unsigned int)v15 )
      {
        if ( *((_DWORD *)a1 + 22) >= v17 )
        {
          if ( *(_QWORD *)(v5 + 40) )
          {
            PoolWithTag = (GUID *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
            v10 = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_QWORD *)&PoolWithTag->Data1 = 0LL;
              *(_QWORD *)PoolWithTag->Data4 = 0LL;
              *(_QWORD *)&PoolWithTag[1].Data1 = 0LL;
              *(_QWORD *)&PoolWithTag->Data1 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 96LL) + 88LL);
              *(_QWORD *)PoolWithTag->Data4 = *(_QWORD *)(v5 + 40);
              LOBYTE(PoolWithTag[1].Data1) = *(_BYTE *)(v5 + 48);
              v27.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 56);
              v27.FenceValueArray = (const UINT64 *)(v5 + 4 * (*(unsigned int *)(v5 + 28) + 14LL));
              v27.Flags.Value = *(_DWORD *)(v5 + 32);
              v27.hDevice = *(_DWORD *)(v5 + 24);
              v27.ObjectCount = *(_DWORD *)(v5 + 28);
              v27.hAsyncEvent = PoolWithTag;
              v28 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v27, 0, PoolWithTag);
            }
            else
            {
              v20 = WdLogNewEntry5_WdLowResource(v19);
              *(_QWORD *)(v20 + 24) = 3199LL;
              WdLogEvent5_WdLowResource(v20);
              v28 = -1073741801;
            }
            goto LABEL_21;
          }
          v16 = WdLogNewEntry5_WdWarning(v17, v15, v14);
          *(_QWORD *)(v16 + 24) = 3192LL;
        }
        else
        {
          v16 = WdLogNewEntry5_WdWarning(v17, v15, v14);
          *(_QWORD *)(v16 + 24) = 3183LL;
        }
      }
      else
      {
        v16 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v15, v14);
        *(_QWORD *)(v16 + 24) = 3178LL;
      }
    }
  }
  else
  {
LABEL_19:
    v16 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v16 + 24) = 3168LL;
  }
  WdLogEvent5_WdWarning(v16);
LABEL_21:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v28, 4u);
  if ( v28 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = 3227LL;
    WdLogEvent5_WdWarning(v24);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B677844u);
  }
  v3 = 1;
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v3;
}
