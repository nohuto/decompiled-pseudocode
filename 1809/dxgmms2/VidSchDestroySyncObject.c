/*
 * XREFs of VidSchDestroySyncObject @ 0x1C006D920
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FE90 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D40C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A7E34 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0018260 (VidSchTimeoutSyncObject.c)
 *     McTemplateK0ppqqpx @ 0x1C001913C (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C00191F4 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C00192CC (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C0019388 (McTemplateK0ppqqpt.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidSchDestroySyncObject(_VIDSCH_SYNC_OBJECT *P, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  const EVENT_DESCRIPTOR *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+38h] [rbp-21h]
  __int64 v26; // [rsp+38h] [rbp-21h]
  __int64 v27; // [rsp+40h] [rbp-19h]
  int v28; // [rsp+40h] [rbp-19h]
  __int64 v29; // [rsp+40h] [rbp-19h]
  int v30; // [rsp+40h] [rbp-19h]
  int v31; // [rsp+48h] [rbp-11h]
  int v32; // [rsp+48h] [rbp-11h]
  __int64 v33; // [rsp+50h] [rbp-9h]
  _QWORD v34[10]; // [rsp+60h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((int *)P + 8) > 1 )
      VidSchTimeoutSyncObject(P, a2, a3);
    v4 = *((_QWORD *)P + 2);
    if ( v4 )
    {
      if ( !bTracingEnabled )
        goto LABEL_18;
      v5 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v4 + 168) != 1 )
      {
        if ( *(_DWORD *)(v4 + 168) != 2 )
        {
          if ( *(_DWORD *)(v4 + 168) != 3 )
          {
            if ( *(_DWORD *)(v4 + 168) != 4 )
            {
              v6 = (unsigned int)(*(_DWORD *)(v4 + 168) - 5);
              if ( *(_DWORD *)(v4 + 168) == 5 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v6 = *(unsigned int *)(v4 + 240);
                  v27 = *(_QWORD *)(v4 + 176);
                  v7 = *(_DWORD *)(v4 + 172);
                  v25 = v6;
LABEL_13:
                  v8 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
LABEL_14:
                  McTemplateK0ppqqpx(v6, v8, (const GUID *)v4, v5, P, 1, v7, v25, v27);
                }
LABEL_18:
                VidSchiReleaseSyncObjectReference((char *)P);
                return 0LL;
              }
              if ( *(_DWORD *)(v4 + 168) == 6 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_18;
                v18 = *(unsigned int *)(v4 + 176);
                v19 = *(unsigned int *)(v4 + 240);
                v33 = *(_QWORD *)(v4 + 184);
                v31 = *(_DWORD *)(v4 + 180);
                v20 = *(_DWORD *)(v4 + 172);
                goto LABEL_40;
              }
              goto LABEL_48;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_18;
            v6 = *(unsigned int *)(v4 + 240);
            v29 = *(_QWORD *)(v4 + 176);
            v21 = *(_DWORD *)(v4 + 172);
            v26 = v6;
            goto LABEL_51;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_18;
          v6 = *(unsigned int *)(v4 + 240);
          v27 = *(_QWORD *)(v4 + 176);
          v7 = *(_DWORD *)(v4 + 172);
          v25 = v6;
          goto LABEL_52;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_18;
        v22 = *(unsigned int *)(v4 + 240);
        v32 = *(_DWORD *)(v4 + 180);
        v30 = *(_DWORD *)(v4 + 176);
        v23 = *(_DWORD *)(v4 + 172);
        goto LABEL_55;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_18;
      v9 = *(unsigned int *)(v4 + 240);
      v28 = *(_DWORD *)(v4 + 176);
      v10 = *(_DWORD *)(v4 + 172);
    }
    else
    {
      memset(v34, 0, sizeof(v34));
      if ( *((_DWORD *)P + 11) == 4 )
      {
        v4 = 4294962295LL;
        v12 = 5;
        v34[1] = 4294962295LL;
      }
      else
      {
        v4 = v34[1];
        v12 = 3;
      }
      if ( !bTracingEnabled )
        goto LABEL_18;
      v6 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL);
      v5 = *(_QWORD *)(v6 + 16);
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              a2 = (unsigned int)(v16 - 1);
              if ( !(_DWORD)a2 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_18;
                v27 = v4;
                v25 = LODWORD(v34[9]);
                v7 = HIDWORD(v34[0]);
                goto LABEL_13;
              }
              if ( (_DWORD)a2 == 1 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_18;
                v18 = LODWORD(v34[1]);
                v19 = LODWORD(v34[9]);
                v33 = v34[2];
                v31 = HIDWORD(v34[1]);
                v20 = HIDWORD(v34[0]);
LABEL_40:
                McTemplateK0ppqqppqi(
                  v18,
                  &EventDestroyPeriodicMonitoredFence,
                  (const GUID *)v4,
                  v5,
                  P,
                  1,
                  v20,
                  v19,
                  v18,
                  v31,
                  v33);
                goto LABEL_18;
              }
LABEL_48:
              v24 = WdLogNewEntry5_WdAssertion(v6, a2);
              *(_QWORD *)(v24 + 24) = 971LL;
              WdLogEvent5_WdAssertion(v24);
              goto LABEL_18;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_18;
            v29 = v4;
            v26 = LODWORD(v34[9]);
            v21 = HIDWORD(v34[0]);
LABEL_51:
            McTemplateK0ppqqpx(v6, &EventDestroyCPUNotification, (const GUID *)v4, v5, P, 1, v21, v26, v29);
            goto LABEL_18;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_18;
          v27 = v4;
          v25 = LODWORD(v34[9]);
          v7 = HIDWORD(v34[0]);
LABEL_52:
          v8 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
          goto LABEL_14;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_18;
        v22 = LODWORD(v34[9]);
        v32 = HIDWORD(v34[1]);
        v30 = v34[1];
        v23 = HIDWORD(v34[0]);
LABEL_55:
        McTemplateK0ppqqpqq(v22, &EventDestroySemaphore, (const GUID *)v4, v5, P, 1, v23, v22, v30, v32);
        goto LABEL_18;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_18;
      v9 = LODWORD(v34[9]);
      v28 = v34[1];
      v10 = HIDWORD(v34[0]);
    }
    McTemplateK0ppqqpt(v9, &EventDestroySynchronizationMutex, (const GUID *)v4, v5, P, 1, v10, v9, v28);
    goto LABEL_18;
  }
  v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v17 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v17);
  return 3221225485LL;
}
