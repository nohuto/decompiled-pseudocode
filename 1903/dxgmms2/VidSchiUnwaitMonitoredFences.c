/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000A000
 * Callers:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001220 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C00034F0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009E90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C00112C8 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002EBA0 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C00391B8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0008190 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009E00 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000A480 (VidSchUnwaitFlipQueue.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E8D0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E90 (VidSchiSubmitPresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqXR1PR1q @ 0x1C002C660 (McTemplateK0pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(struct HwQueueStagingList *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  unsigned int *v6; // rsi
  _QWORD *v7; // rsi
  unsigned int *v8; // r15
  __int64 v9; // rcx
  __int64 *v10; // r12
  __int64 v11; // r13
  unsigned __int64 *v12; // rax
  char v13; // al
  __int64 v14; // r15
  _QWORD *v15; // r13
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r12
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rax
  struct _KEVENT *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r12
  char *v23; // r9
  char *v24; // rcx
  unsigned __int64 v25; // r8
  size_t v26; // r13
  __int64 v27; // r10
  _QWORD *v28; // rax
  void **v29; // rcx
  unsigned int *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // r8
  __int64 v40; // rax
  char *PoolWithTag; // rax
  char *v42; // rax
  __int64 v43; // r15
  _QWORD *v44; // r12
  unsigned __int64 v45; // rcx
  _QWORD *v46; // r13
  unsigned __int64 *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // [rsp+40h] [rbp-29h]
  char *v52; // [rsp+48h] [rbp-21h]
  char v53; // [rsp+50h] [rbp-19h] BYREF
  int v54; // [rsp+58h] [rbp-11h]
  PVOID P; // [rsp+68h] [rbp-1h]
  char v56; // [rsp+70h] [rbp+7h] BYREF
  int v57; // [rsp+78h] [rbp+Fh]

  v2 = (_QWORD *)(a2 + 744);
  v3 = a2;
  v4 = *(_QWORD **)(a2 + 744);
  if ( v4 != (_QWORD *)(a2 + 744) )
  {
    while ( 1 )
    {
      v14 = *(v4 - 1);
      v15 = v4 - 36;
      v16 = v4[2];
      v17 = v4;
      v4 = (_QWORD *)*v4;
      if ( *(_BYTE *)(v14 + 28) )
        break;
      v18 = *(unsigned __int64 **)(v14 + 64);
      if ( *(_BYTE *)(v14 + 29) )
      {
        if ( *v18 >= v16 )
          break;
      }
      else if ( *(_DWORD *)v18 - (int)v16 >= 0 )
      {
        break;
      }
LABEL_18:
      if ( v4 == v2 )
        goto LABEL_2;
    }
    v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, a2);
    v31[3] = v14;
    v31[4] = **(_QWORD **)(v14 + 64);
    v31[5] = v15[38];
    v31[6] = *(unsigned __int8 *)(v14 + 28);
    WdLogEvent5_WdEvent(v31);
    v32 = v15[11];
    if ( v32 )
      v33 = *(_QWORD **)(v32 + 104);
    else
      v33 = *(_QWORD **)(*(_QWORD *)(v15[12] + 40LL) + 8LL);
    if ( (v15[34] & 4) != 0 )
    {
      if ( v32 )
        v34 = *(_QWORD *)(v32 + 104);
      else
        v34 = *(_QWORD *)(*(_QWORD *)(v15[12] + 40LL) + 8LL);
      v35 = *v17;
      v36 = *(_QWORD *)(v34 + 32);
      v37 = v15[35];
      if ( *(_QWORD **)(*v17 + 8LL) != v17
        || (v38 = (_QWORD *)v17[1], (_QWORD *)*v38 != v17)
        || (*v38 = v35, *(_QWORD *)(v35 + 8) = v38, v39 = *(_QWORD **)(v37 + 104), *v39 != v37 + 96) )
      {
LABEL_68:
        __fastfail(3u);
      }
      *v17 = v37 + 96;
      v17[1] = v39;
      *v39 = v17;
      *(_QWORD *)(v37 + 104) = v17;
      *((_DWORD *)v15 + 68) &= ~4u;
      --*(_DWORD *)(v37 + 36);
      v40 = v15[11];
      if ( v40 )
        --*(_DWORD *)(v40 + 788);
      --*(_DWORD *)(v34 + 1288);
      --*(_DWORD *)(v36 + 736);
    }
    VidSchiUnwaitWaitQueuePacket(a1, v15, 0LL);
    VidSchiCheckPendingDeviceCommand(v33);
    goto LABEL_18;
  }
LABEL_2:
  v6 = *(unsigned int **)(v3 + 760);
  while ( v6 != (unsigned int *)(v3 + 760) )
  {
    v8 = v6;
    v9 = 0LL;
    v6 = *(unsigned int **)v6;
    v51 = 0;
    if ( !v8[26] )
      continue;
    do
    {
      v10 = (__int64 *)(*((_QWORD *)v8 + 4) + 16LL * (unsigned int)v9);
      v11 = *v10;
      if ( *v10 )
      {
        a2 = v10[1];
        if ( !*(_BYTE *)(v11 + 28) )
        {
          v12 = *(unsigned __int64 **)(v11 + 64);
          if ( *(_BYTE *)(v11 + 29) )
          {
            if ( *v12 < a2 )
              goto LABEL_12;
          }
          else if ( *(_DWORD *)v12 - (int)a2 < 0 )
          {
LABEL_12:
            v13 = *((_BYTE *)v8 + 112);
            LOBYTE(a2) = 0;
            if ( (v13 & 1) == 0 )
              goto LABEL_13;
            goto LABEL_23;
          }
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, a2);
        v19[3] = v11;
        v19[4] = **(_QWORD **)(v11 + 64);
        v19[5] = v10[1];
        v19[6] = *(unsigned __int8 *)(v11 + 28);
        WdLogEvent5_WdEvent(v19);
        LODWORD(v9) = v51;
      }
      v13 = *((_BYTE *)v8 + 112);
      LOBYTE(a2) = 1;
      if ( (v13 & 1) != 0 )
        goto LABEL_25;
LABEL_23:
      v9 = (unsigned int)(v9 + 1);
      v51 = v9;
    }
    while ( (unsigned int)v9 < v8[26] );
    if ( !(_BYTE)a2 )
      continue;
LABEL_25:
    v20 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
    if ( (v13 & 4) != 0 )
      ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[63])(v20);
    else
      KeSetEvent(v20, 0, 0);
    if ( bTracingEnabled )
    {
      v22 = v8[26];
      v23 = 0LL;
      v24 = 0LL;
      v52 = 0LL;
      v54 = 0;
      v25 = (unsigned int)v22;
      P = 0LL;
      v57 = 0;
      if ( (unsigned int)v22 > 1 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v22 >= 8 )
        {
          v26 = 8 * v22;
          PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v22, 0x4B677844u);
          v24 = (char *)P;
          v25 = v22;
          v23 = PoolWithTag;
          v52 = PoolWithTag;
          goto LABEL_30;
        }
      }
      else
      {
        v23 = &v53;
        v52 = &v53;
        v26 = 8 * v22;
LABEL_30:
        v54 = v22;
        if ( v23 )
        {
          if ( (_DWORD)v22 )
          {
            memset(v23, 0, v26);
            v23 = v52;
            v25 = v22;
            v24 = (char *)P;
          }
          if ( v23 )
          {
            if ( (unsigned int)v22 > 1 )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v25 >= 8 )
              {
                v42 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v26, 0x4B677844u);
                v23 = v52;
                v24 = v42;
                P = v42;
                goto LABEL_36;
              }
            }
            else
            {
              v24 = &v56;
              P = &v56;
LABEL_36:
              v57 = v22;
              if ( v24 )
              {
                if ( (_DWORD)v22 )
                {
                  memset(v24, 0, v26);
                  v23 = v52;
                  v24 = (char *)P;
                }
                if ( v24 )
                {
                  if ( (_DWORD)v22 )
                  {
                    v21 = 0LL;
                    v27 = v22;
                    v25 = 0LL;
                    do
                    {
                      v21 += 8LL;
                      v25 += 16LL;
                      *(_QWORD *)&v23[v21 - 8] = *(_QWORD *)(v25 + *((_QWORD *)v8 + 4) - 16);
                      *(_QWORD *)((char *)P + v21 - 8) = *(_QWORD *)(v25 + *((_QWORD *)v8 + 4) - 8);
                      v23 = v52;
                      --v27;
                    }
                    while ( v27 );
                    v24 = (char *)P;
                  }
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    McTemplateK0pqXR1PR1q(
                      (_DWORD)v24,
                      v21,
                      v25,
                      *((_QWORD *)v8 + 2),
                      v22,
                      (__int64)v24,
                      (__int64)v23,
                      v8[28] & 1);
                    v23 = v52;
                    v24 = (char *)P;
                  }
                }
              }
            }
          }
        }
      }
      if ( v24 != &v56 && v24 )
      {
        ExFreePoolWithTag(v24, 0);
        v23 = v52;
      }
      P = 0LL;
      v57 = 0;
      if ( v23 != &v53 && v23 )
        ExFreePoolWithTag(v23, 0);
      v54 = 0;
    }
    if ( (v8[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v8 + 2));
    v28 = *(_QWORD **)v8;
    if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_68;
    v29 = (void **)*((_QWORD *)v8 + 1);
    if ( *v29 != v8 )
      goto LABEL_68;
    *v29 = v28;
    v28[1] = v29;
    v30 = (unsigned int *)*((_QWORD *)v8 + 4);
    if ( v30 != v8 + 10 && v30 )
      ExFreePoolWithTag(v30, 0);
    *((_QWORD *)v8 + 4) = 0LL;
    v8[26] = 0;
    ExFreePoolWithTag(v8, 0);
LABEL_13:
    ;
  }
  v7 = *(_QWORD **)(v3 + 776);
  while ( v7 != (_QWORD *)(v3 + 776) )
  {
    v43 = *(v7 - 2);
    v44 = v7 - 3;
    v45 = *(v7 - 1);
    v46 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_BYTE *)(v43 + 28) )
      goto LABEL_88;
    v47 = *(unsigned __int64 **)(v43 + 64);
    if ( *(_BYTE *)(v43 + 29) )
    {
      if ( *v47 < v45 )
        continue;
    }
    else if ( *(_DWORD *)v47 - (int)v45 < 0 )
    {
      continue;
    }
    if ( *(_BYTE *)(v43 + 28) )
LABEL_88:
      *((_DWORD *)v44 + 11) |= 1u;
    v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, a2);
    v48[3] = v43;
    v48[4] = **(_QWORD **)(v43 + 64);
    v48[5] = v44[2];
    v48[6] = *(unsigned __int8 *)(v43 + 28);
    WdLogEvent5_WdEvent(v48);
    VidSchiSubmitPresentHistoryToken(a1, v3);
    v49 = *v46;
    if ( *(_QWORD **)(*v46 + 8LL) != v46 )
      goto LABEL_68;
    v50 = (_QWORD *)v46[1];
    if ( (_QWORD *)*v50 != v46 )
      goto LABEL_68;
    *v50 = v49;
    *(_QWORD *)(v49 + 8) = v50;
    ++*(_DWORD *)(v3 + 828);
    if ( ExQueryDepthSList((PSLIST_HEADER)(v3 + 800)) < *(_WORD *)(v3 + 816) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 800), (PSLIST_ENTRY)v44);
    }
    else
    {
      ++*(_DWORD *)(v3 + 832);
      (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 856))(v44, v3 + 800);
    }
    --*(_DWORD *)(v43 + 40);
    VidSchiReleaseSyncObjectReference((char *)v43);
  }
  if ( *(_DWORD *)(v3 + 724) )
    VidSchUnwaitFlipQueue(a1, v3);
}
