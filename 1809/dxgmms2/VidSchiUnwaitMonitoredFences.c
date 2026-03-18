/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C0008E90
 * Callers:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001218 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C00021B0 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C00117EC (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqXR1PR1q @ 0x1C002BF84 (McTemplateK0pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(__int64 a1, unsigned __int64 a2)
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
  __int64 v20; // rdx
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  struct _KEVENT *v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // r12
  char *p_P; // r9
  char *v34; // r10
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  SIZE_T v37; // r13
  __int64 v38; // r11
  _QWORD *v39; // rax
  void **v40; // rcx
  unsigned int *v41; // rcx
  char *PoolWithTag; // rax
  char *v43; // rax
  __int64 v44; // r15
  _QWORD *v45; // r12
  unsigned __int64 v46; // rcx
  _QWORD *v47; // r13
  unsigned __int64 *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  int v52; // [rsp+40h] [rbp-29h]
  __int64 v53; // [rsp+40h] [rbp-29h]
  char *v54; // [rsp+48h] [rbp-21h]
  char P; // [rsp+50h] [rbp-19h] BYREF
  int v56; // [rsp+58h] [rbp-11h]
  char *v57; // [rsp+68h] [rbp-1h]
  char v58; // [rsp+70h] [rbp+7h] BYREF
  int v59; // [rsp+78h] [rbp+Fh]

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
LABEL_17:
      if ( v4 == v2 )
        goto LABEL_2;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, a2);
    v19[3] = v14;
    v19[4] = **(_QWORD **)(v14 + 64);
    v19[5] = v15[38];
    v19[6] = *(unsigned __int8 *)(v14 + 28);
    WdLogEvent5_WdEvent(v19);
    v20 = v15[11];
    if ( v20 )
      v21 = *(_QWORD **)(v20 + 104);
    else
      v21 = *(_QWORD **)(*(_QWORD *)(v15[12] + 40LL) + 8LL);
    if ( (v15[34] & 4) != 0 )
    {
      if ( v20 )
        v22 = *(_QWORD *)(v20 + 104);
      else
        v22 = *(_QWORD *)(*(_QWORD *)(v15[12] + 40LL) + 8LL);
      v23 = *v17;
      v24 = *(_QWORD *)(v22 + 32);
      v25 = v15[35];
      if ( *(_QWORD **)(*v17 + 8LL) != v17
        || (v26 = (_QWORD *)v17[1], (_QWORD *)*v26 != v17)
        || (*v26 = v23, *(_QWORD *)(v23 + 8) = v26, v27 = *(_QWORD **)(v25 + 104), *v27 != v25 + 96) )
      {
LABEL_97:
        __fastfail(3u);
      }
      *v17 = v25 + 96;
      v17[1] = v27;
      *v27 = v17;
      *(_QWORD *)(v25 + 104) = v17;
      *((_DWORD *)v15 + 68) &= ~4u;
      --*(_DWORD *)(v25 + 36);
      v28 = v15[11];
      if ( v28 )
        --*(_DWORD *)(v28 + 788);
      --*(_DWORD *)(v22 + 1284);
      --*(_DWORD *)(v24 + 736);
    }
    VidSchiUnwaitWaitQueuePacket(a1, v15, 0LL);
    VidSchiCheckPendingDeviceCommand(v21);
    goto LABEL_17;
  }
LABEL_2:
  v6 = *(unsigned int **)(v3 + 760);
  while ( v6 != (unsigned int *)(v3 + 760) )
  {
    v8 = v6;
    v9 = 0LL;
    v6 = *(unsigned int **)v6;
    v52 = 0;
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
            {
LABEL_11:
              v13 = *((_BYTE *)v8 + 112);
              LOBYTE(a2) = 0;
              if ( (v13 & 1) == 0 )
                goto LABEL_12;
              goto LABEL_34;
            }
          }
          else if ( *(_DWORD *)v12 - (int)a2 < 0 )
          {
            goto LABEL_11;
          }
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, a2);
        v29[3] = v11;
        v29[4] = **(_QWORD **)(v11 + 64);
        v29[5] = v10[1];
        v29[6] = *(unsigned __int8 *)(v11 + 28);
        WdLogEvent5_WdEvent(v29);
        LODWORD(v9) = v52;
      }
      v13 = *((_BYTE *)v8 + 112);
      LOBYTE(a2) = 1;
      if ( (v13 & 1) != 0 )
        goto LABEL_36;
LABEL_34:
      v9 = (unsigned int)(v9 + 1);
      v52 = v9;
    }
    while ( (unsigned int)v9 < v8[26] );
    if ( !(_BYTE)a2 )
      continue;
LABEL_36:
    v30 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
    if ( (v13 & 4) != 0 )
      ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[63])(v30);
    else
      KeSetEvent(v30, 0, 0);
    if ( bTracingEnabled )
    {
      v32 = v8[26];
      p_P = 0LL;
      v34 = 0LL;
      v54 = 0LL;
      v56 = 0;
      LODWORD(v35) = v32;
      v57 = 0LL;
      v59 = 0;
      if ( (unsigned int)v32 > 1 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 >= 8 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v32, 0x4B677844u);
          v34 = v57;
          LODWORD(v35) = v32;
          p_P = PoolWithTag;
          v54 = PoolWithTag;
          v36 = v32;
          goto LABEL_41;
        }
      }
      else
      {
        p_P = &P;
        v36 = (unsigned int)v32;
        v54 = &P;
LABEL_41:
        v53 = v36;
        v56 = v32;
        if ( p_P )
        {
          v37 = 8 * v36;
          if ( (_DWORD)v32 )
          {
            memset(p_P, 0, 8 * v36);
            p_P = v54;
            LODWORD(v35) = v32;
            v34 = v57;
            v36 = v53;
          }
          if ( p_P )
          {
            if ( (unsigned int)v32 <= 1 )
            {
              v34 = &v58;
              v57 = &v58;
              v37 = 8 * v36;
              goto LABEL_47;
            }
            if ( 0xFFFFFFFFFFFFFFFFuLL / v36 >= 8 )
            {
              v43 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x4B677844u);
              p_P = v54;
              LODWORD(v35) = v32;
              v34 = v43;
              v57 = v43;
LABEL_47:
              v59 = v32;
              if ( v34 )
              {
                if ( (_DWORD)v32 )
                {
                  memset(v34, 0, v37);
                  p_P = v54;
                  v34 = v57;
                  v38 = v53;
                }
                else
                {
                  v38 = (unsigned int)v35;
                }
                if ( v34 )
                {
                  if ( (_DWORD)v32 )
                  {
                    v31 = 0LL;
                    v35 = 0LL;
                    do
                    {
                      v31 += 8LL;
                      v35 += 16LL;
                      *(_QWORD *)&p_P[v31 - 8] = *(_QWORD *)(v35 + *((_QWORD *)v8 + 4) - 16);
                      v36 = *(_QWORD *)(v35 + *((_QWORD *)v8 + 4) - 8);
                      *(_QWORD *)&v57[v31 - 8] = v36;
                      p_P = v54;
                      --v38;
                    }
                    while ( v38 );
                    v34 = v57;
                  }
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    McTemplateK0pqXR1PR1q(
                      v36,
                      v31,
                      v35,
                      *((_QWORD *)v8 + 2),
                      v32,
                      (__int64)v34,
                      (__int64)p_P,
                      v8[28] & 1);
                    p_P = v54;
                    v34 = v57;
                  }
                }
              }
            }
          }
        }
      }
      if ( v34 != &v58 && v34 )
      {
        ExFreePoolWithTag(v34, 0);
        p_P = v54;
      }
      v57 = 0LL;
      v59 = 0;
      if ( p_P != &P && p_P )
        ExFreePoolWithTag(p_P, 0);
      v56 = 0;
    }
    if ( (v8[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v8 + 2));
    v39 = *(_QWORD **)v8;
    if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_97;
    v40 = (void **)*((_QWORD *)v8 + 1);
    if ( *v40 != v8 )
      goto LABEL_97;
    *v40 = v39;
    v39[1] = v40;
    v41 = (unsigned int *)*((_QWORD *)v8 + 4);
    if ( v41 != v8 + 10 && v41 )
      ExFreePoolWithTag(v41, 0);
    *((_QWORD *)v8 + 4) = 0LL;
    v8[26] = 0;
    ExFreePoolWithTag(v8, 0);
LABEL_12:
    ;
  }
  v7 = *(_QWORD **)(v3 + 776);
  while ( v7 != (_QWORD *)(v3 + 776) )
  {
    v44 = *(v7 - 2);
    v45 = v7 - 3;
    v46 = *(v7 - 1);
    v47 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_BYTE *)(v44 + 28) )
      goto LABEL_88;
    v48 = *(unsigned __int64 **)(v44 + 64);
    if ( *(_BYTE *)(v44 + 29) )
    {
      if ( *v48 < v46 )
        continue;
    }
    else if ( *(_DWORD *)v48 - (int)v46 < 0 )
    {
      continue;
    }
    if ( *(_BYTE *)(v44 + 28) )
LABEL_88:
      *((_DWORD *)v45 + 11) |= 1u;
    v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, a2);
    v49[3] = v44;
    v49[4] = **(_QWORD **)(v44 + 64);
    v49[5] = v45[2];
    v49[6] = *(unsigned __int8 *)(v44 + 28);
    WdLogEvent5_WdEvent(v49);
    VidSchiSubmitPresentHistoryToken(a1, 0, (_DWORD)v45 + 40, 0, v3);
    v50 = *v47;
    if ( *(_QWORD **)(*v47 + 8LL) != v47 )
      goto LABEL_97;
    v51 = (_QWORD *)v47[1];
    if ( (_QWORD *)*v51 != v47 )
      goto LABEL_97;
    *v51 = v50;
    *(_QWORD *)(v50 + 8) = v51;
    ++*(_DWORD *)(v3 + 828);
    if ( ExQueryDepthSList((PSLIST_HEADER)(v3 + 800)) < *(_WORD *)(v3 + 816) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 800), (PSLIST_ENTRY)v45);
    }
    else
    {
      ++*(_DWORD *)(v3 + 832);
      (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 856))(v45, v3 + 800);
    }
    --*(_DWORD *)(v44 + 40);
    VidSchiReleaseSyncObjectReference((char *)v44);
  }
  if ( *(_DWORD *)(v3 + 724) )
    VidSchUnwaitFlipQueue(a1, v3);
}
