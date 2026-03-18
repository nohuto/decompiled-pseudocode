/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA590
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003660C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C0117720 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C021A218 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  UINT v18; // esi
  unsigned int v19; // r12d
  __int64 v20; // rcx
  D3DKMT_HANDLE v21; // r13d
  unsigned int v22; // esi
  unsigned int v23; // edx
  int v24; // r8d
  int EntryType; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const unsigned __int64 *v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  _DWORD v34[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v35; // [rsp+38h] [rbp-71h]
  __int64 v36; // [rsp+40h] [rbp-69h]
  _BYTE v37[24]; // [rsp+48h] [rbp-61h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v38; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v39[80]; // [rsp+B0h] [rbp+7h] BYREF
  int v40; // [rsp+110h] [rbp+67h] BYREF
  struct DXGCONTEXT *v41; // [rsp+118h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v42; // [rsp+120h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v39,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v40 = 0;
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v5 )
      goto LABEL_37;
    v41 = 0LL;
    v42 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v8 = Current;
    if ( !Current )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = PsGetCurrentProcess(v11, v10);
      v12 = v9;
LABEL_34:
      WdLogEvent5_WdError(v12);
      goto LABEL_35;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, *(_DWORD *)(v5 + 24), Current, &v41, 0);
    if ( !v41 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
        (DXGHWQUEUEBYHANDLE *)v37,
        *(_DWORD *)(v5 + 24),
        (struct DXGPROCESS *)v8,
        &v42,
        0);
      if ( !v42 )
      {
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = *(unsigned int *)(v5 + 24);
        WdLogEvent5_WdError(v14);
        v40 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v37);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
LABEL_36:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v40, 4u);
        v3 = 1;
        goto LABEL_37;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v37);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
    v18 = *(_DWORD *)(v5 + 28);
    if ( v18 - 1 > 0xFFFE )
    {
      v12 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v12 + 24) = *(unsigned int *)(v5 + 28);
      goto LABEL_34;
    }
    v19 = 12 * v18 + 40;
    if ( *((_DWORD *)a1 + 22) < v19 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v20 + 24) = v19;
LABEL_13:
      WdLogEvent5_WdWarning(v20);
LABEL_35:
      v40 = -1073741811;
      goto LABEL_36;
    }
    v21 = *(_DWORD *)(v5 + 24);
    if ( v41 )
    {
      memset(&v38, 0, sizeof(v38));
      v38.hContext = v21;
      v38.ObjectCount = v18;
      v38.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 8 * v18 + 40);
      if ( *(_BYTE *)(v5 + 32) )
        v38.FenceValue = *(_QWORD *)(v5 + 40);
      else
        v38.FenceValue = 0LL;
      v22 = *(_DWORD *)(v5 + 8 * v18 + 40);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 26));
      v23 = (v22 >> 6) & 0xFFFFFF;
      if ( v23 < *((_DWORD *)v8 + 62)
        && (v24 = *((_DWORD *)v8[29] + 4 * v23 + 2), ((v22 >> 25) & 0x60) == (*((_BYTE *)v8[29] + 16 * v23 + 8) & 0x60))
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v8 + 29), v23);
      }
      else
      {
        EntryType = 0;
      }
      ExReleasePushLockSharedEx(v8 + 26, 0LL);
      KeLeaveCriticalRegion();
      if ( EntryType != 8 && *(_BYTE *)(v5 + 32) )
      {
        v20 = WdLogNewEntry5_WdWarning(v27, v26, v28);
        *(_QWORD *)(v20 + 24) = 3297LL;
        goto LABEL_13;
      }
      v29 = 0LL;
      if ( !*(_BYTE *)(v5 + 32) )
        v29 = (const unsigned __int64 *)(v5 + 40);
      v30 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v38, 0, 0LL, v29, 0);
    }
    else
    {
      v35 = v5 + 8 * v18 + 40;
      v34[0] = v21;
      v36 = v5 + 40;
      v34[1] = v18;
      v30 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v34, 0LL);
    }
    v40 = v30;
    if ( v30 < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v32 + 24) = v40;
      WdLogEvent5_WdError(v32);
    }
    goto LABEL_36;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 3241LL;
  WdLogEvent5_WdError(v4);
LABEL_37:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  return v3;
}
