/*
 * XREFs of VidSchDestroySyncObject @ 0x1C0061F20
 * Callers:
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C0061A0C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006D3E0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB554 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009E00 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0016F7C (VidSchTimeoutSyncObject.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0ppqqpx @ 0x1C0025EC8 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C0025F80 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C0026058 (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C0026114 (McTemplateK0ppqqpt.c)
 */

__int64 __fastcall VidSchDestroySyncObject(_VIDSCH_SYNC_OBJECT *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  const EVENT_DESCRIPTOR *v7; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+38h] [rbp-21h]
  __int64 v25; // [rsp+38h] [rbp-21h]
  __int64 v26; // [rsp+40h] [rbp-19h]
  int v27; // [rsp+40h] [rbp-19h]
  __int64 v28; // [rsp+40h] [rbp-19h]
  int v29; // [rsp+40h] [rbp-19h]
  int v30; // [rsp+48h] [rbp-11h]
  int v31; // [rsp+48h] [rbp-11h]
  __int64 v32; // [rsp+50h] [rbp-9h]
  _QWORD v33[10]; // [rsp+60h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((int *)P + 8) > 1 )
      VidSchTimeoutSyncObject(P);
    v3 = *((_QWORD *)P + 2);
    if ( v3 )
    {
      if ( !bTracingEnabled )
        goto LABEL_15;
      v4 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 192) != 1 )
      {
        if ( *(_DWORD *)(v3 + 192) != 2 )
        {
          if ( *(_DWORD *)(v3 + 192) != 3 )
          {
            if ( *(_DWORD *)(v3 + 192) != 4 )
            {
              v5 = (unsigned int)(*(_DWORD *)(v3 + 192) - 5);
              if ( *(_DWORD *)(v3 + 192) == 5 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v5 = *(unsigned int *)(v3 + 264);
                  v26 = *(_QWORD *)(v3 + 200);
                  v6 = *(_DWORD *)(v3 + 196);
                  v24 = v5;
LABEL_13:
                  v7 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
LABEL_14:
                  McTemplateK0ppqqpx(v5, v7, (const GUID *)v3, v4, P, 1, v6, v24, v26);
                }
LABEL_15:
                VidSchiReleaseSyncObjectReference((char *)P);
                return 0LL;
              }
              if ( *(_DWORD *)(v3 + 192) == 6 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_15;
                v17 = *(unsigned int *)(v3 + 200);
                v18 = *(unsigned int *)(v3 + 264);
                v32 = *(_QWORD *)(v3 + 208);
                v30 = *(_DWORD *)(v3 + 204);
                v19 = *(_DWORD *)(v3 + 196);
                goto LABEL_44;
              }
              goto LABEL_50;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            v5 = *(unsigned int *)(v3 + 264);
            v28 = *(_QWORD *)(v3 + 200);
            v20 = *(_DWORD *)(v3 + 196);
            v25 = v5;
            goto LABEL_53;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_15;
          v5 = *(unsigned int *)(v3 + 264);
          v26 = *(_QWORD *)(v3 + 200);
          v6 = *(_DWORD *)(v3 + 196);
          v24 = v5;
          goto LABEL_54;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_15;
        v22 = *(unsigned int *)(v3 + 264);
        v31 = *(_DWORD *)(v3 + 204);
        v29 = *(_DWORD *)(v3 + 200);
        v23 = *(_DWORD *)(v3 + 196);
        goto LABEL_55;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_15;
      v9 = *(unsigned int *)(v3 + 264);
      v27 = *(_DWORD *)(v3 + 200);
      v10 = *(_DWORD *)(v3 + 196);
    }
    else
    {
      memset(v33, 0, sizeof(v33));
      if ( *((_DWORD *)P + 11) == 4 )
      {
        v3 = 4294962295LL;
        v11 = 5;
        v33[1] = 4294962295LL;
      }
      else
      {
        v3 = v33[1];
        v11 = 3;
      }
      if ( !bTracingEnabled )
        goto LABEL_15;
      v5 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL);
      v4 = *(_QWORD *)(v5 + 16);
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              a2 = (unsigned int)(v15 - 1);
              if ( !(_DWORD)a2 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_15;
                v26 = v3;
                v24 = LODWORD(v33[9]);
                v6 = HIDWORD(v33[0]);
                goto LABEL_13;
              }
              if ( (_DWORD)a2 == 1 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_15;
                v17 = LODWORD(v33[1]);
                v18 = LODWORD(v33[9]);
                v32 = v33[2];
                v30 = HIDWORD(v33[1]);
                v19 = HIDWORD(v33[0]);
LABEL_44:
                McTemplateK0ppqqppqi(
                  v17,
                  &EventDestroyPeriodicMonitoredFence,
                  (const GUID *)v3,
                  v4,
                  P,
                  1,
                  v19,
                  v18,
                  v17,
                  v30,
                  v32);
                goto LABEL_15;
              }
LABEL_50:
              v21 = WdLogNewEntry5_WdAssertion(v5, a2);
              *(_QWORD *)(v21 + 24) = 971LL;
              WdLogEvent5_WdAssertion(v21);
              goto LABEL_15;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_15;
            v28 = v3;
            v25 = LODWORD(v33[9]);
            v20 = HIDWORD(v33[0]);
LABEL_53:
            McTemplateK0ppqqpx(v5, &EventDestroyCPUNotification, (const GUID *)v3, v4, P, 1, v20, v25, v28);
            goto LABEL_15;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_15;
          v26 = v3;
          v24 = LODWORD(v33[9]);
          v6 = HIDWORD(v33[0]);
LABEL_54:
          v7 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
          goto LABEL_14;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_15;
        v22 = LODWORD(v33[9]);
        v31 = HIDWORD(v33[1]);
        v29 = v33[1];
        v23 = HIDWORD(v33[0]);
LABEL_55:
        McTemplateK0ppqqpqq(v22, &EventDestroySemaphore, (const GUID *)v3, v4, P, 1, v23, v22, v29, v31);
        goto LABEL_15;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_15;
      v9 = LODWORD(v33[9]);
      v27 = v33[1];
      v10 = HIDWORD(v33[0]);
    }
    McTemplateK0ppqqpt(v9, &EventDestroySynchronizationMutex, (const GUID *)v3, v4, P, 1, v10, v9, v27);
    goto LABEL_15;
  }
  v16 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v16 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v16);
  return 3221225485LL;
}
