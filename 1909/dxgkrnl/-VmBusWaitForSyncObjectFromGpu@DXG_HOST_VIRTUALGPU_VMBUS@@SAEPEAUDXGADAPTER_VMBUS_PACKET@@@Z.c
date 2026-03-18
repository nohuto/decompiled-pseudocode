/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022AE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017EF8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0018020 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CB54 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C011B100 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C024E888 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD **v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  UINT v27; // esi
  unsigned int v28; // r15d
  __int64 v29; // rax
  D3DKMT_HANDLE v30; // r13d
  char v31; // cl
  const unsigned __int64 *v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _DWORD v39[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v40; // [rsp+38h] [rbp-71h]
  __int64 v41; // [rsp+40h] [rbp-69h]
  _BYTE v42[24]; // [rsp+48h] [rbp-61h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v43; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v44[80]; // [rsp+B0h] [rbp+7h] BYREF
  int v45; // [rsp+110h] [rbp+67h] BYREF
  struct DXGCONTEXT *v46; // [rsp+118h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v47; // [rsp+120h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v44,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v45 = 0;
    v9 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v9 )
      goto LABEL_26;
    v46 = 0LL;
    v47 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
    v14 = Current;
    if ( Current )
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, *(_DWORD *)(v9 + 24), Current, &v46, 0);
      if ( !v46 )
      {
        DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, *(_DWORD *)(v9 + 24), v14, &v47, 0);
        if ( !v47 )
        {
          v22 = WdLogNewEntry5_WdError(v20, v19, v21);
          *(_QWORD *)(v22 + 24) = *(unsigned int *)(v9 + 24);
          WdLogEvent5_WdError(v22);
          v45 = -1073741811;
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v23);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
LABEL_25:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v45, 4u);
          v5 = 1;
          goto LABEL_26;
        }
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v42, v19);
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
      v27 = *(_DWORD *)(v9 + 28);
      if ( v27 - 1 <= 0xFFFE )
      {
        v28 = 12 * v27 + 40;
        if ( *((_DWORD *)a1 + 22) >= v28 )
        {
          v30 = *(_DWORD *)(v9 + 24);
          if ( v46 )
          {
            memset(&v43, 0, sizeof(v43));
            v31 = *(_BYTE *)(v9 + 32);
            v43.hContext = v30;
            v43.ObjectCount = v27;
            v43.ObjectHandleArray = (const D3DKMT_HANDLE *)(v9 + 8 * v27 + 40);
            if ( v31 )
              v43.FenceValue = *(_QWORD *)(v9 + 40);
            else
              v43.FenceValue = 0LL;
            v32 = 0LL;
            if ( !v31 )
              v32 = (const unsigned __int64 *)(v9 + 40);
            v33 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v43, 0, 0LL, v32, 0);
          }
          else
          {
            v39[0] = *(_DWORD *)(v9 + 24);
            v39[1] = v27;
            v40 = v9 + 8 * v27 + 40;
            v41 = v9 + 40;
            v33 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v39, 0LL);
          }
          v45 = v33;
          if ( v33 < 0 )
          {
            v37 = WdLogNewEntry5_WdError(v35, v34, v36);
            *(_QWORD *)(v37 + 24) = v45;
            WdLogEvent5_WdError(v37);
          }
        }
        else
        {
          v29 = WdLogNewEntry5_WdWarning(v25, v24, v26);
          *(_QWORD *)(v29 + 24) = v28;
          WdLogEvent5_WdWarning(v29);
        }
        goto LABEL_25;
      }
      v18 = WdLogNewEntry5_WdError(v25, v24, v26);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(v9 + 28);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = PsGetCurrentProcess(v17, v16);
      v18 = v15;
    }
    WdLogEvent5_WdError(v18);
    v45 = -1073741811;
    goto LABEL_25;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 3188LL;
  WdLogEvent5_WdError(v6);
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
  return v5;
}
