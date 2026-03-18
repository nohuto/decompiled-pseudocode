/*
 * XREFs of ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00166A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017DA4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002EA14 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002ECD0 (VidSchiPropagateCrossAdapterSignal.c)
 */

__int64 __fastcall VidSchiSignalSyncObjectsFromCpu(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        char *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r15
  struct _VIDSCH_SYNC_OBJECT **v7; // r13
  unsigned int v8; // ebp
  char *v9; // r12
  signed __int64 v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  struct _VIDSCH_SYNC_OBJECT **v15; // rdi
  char *v16; // r14
  __int64 v17; // r12
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  unsigned __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct HwQueueStagingList *v30; // [rsp+80h] [rbp+8h]

  v30 = a1;
  v5 = 0;
  v6 = (unsigned int)a2;
  v7 = a3;
  if ( (*(_BYTE *)&a4.0 & 4) != 0 )
  {
LABEL_20:
    if ( (_DWORD)v6 )
    {
      v15 = v7;
      v16 = (char *)(a5 - (char *)v7);
      v17 = v6;
      do
      {
        if ( !*((_BYTE *)*v15 + 28) )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
          v18[3] = *v15;
          v18[4] = **((_QWORD **)*v15 + 8);
          v18[5] = *(struct _VIDSCH_SYNC_OBJECT **)((char *)v15 + (_QWORD)v16);
          WdLogEvent5_WdEvent(v18);
          v19 = *v15;
          v20 = *(unsigned __int64 *)((char *)v15 + (_QWORD)v16);
          if ( *((_BYTE *)*v15 + 27) )
          {
            v21 = v19[26];
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v21 + 8), &LockHandle);
            if ( *(_QWORD *)(v21 + 40) >= v20 )
            {
              v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22);
              v26[3] = v19[2];
              v26[4] = *(_QWORD *)(v21 + 40);
              v26[5] = v20;
              WdLogEvent5_WdWarning(v26);
            }
            else
            {
              *(_QWORD *)(v21 + 40) = v20;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else
          {
            v19[11] = v20;
          }
          v27 = *(__int64 *)((char *)v15 + (_QWORD)v16);
          a2 = (_QWORD *)*((_QWORD *)*v15 + 8);
          if ( *((_BYTE *)*v15 + 29) )
            *a2 = v27;
          else
            *(_DWORD *)a2 = v27;
          a1 = *v15;
          if ( *((_BYTE *)*v15 + 27) )
            VidSchiPropagateCrossAdapterSignal(a1);
        }
        ++v15;
        --v17;
      }
      while ( v17 );
    }
    goto LABEL_38;
  }
  v8 = 0;
  if ( !(_DWORD)a2 )
  {
LABEL_38:
    VidSchiUnwaitMonitoredFences((__int64)v30, *((_QWORD *)*v7 + 1));
    return v5;
  }
  v9 = a5;
  v10 = (char *)a3 - a5;
  while ( 1 )
  {
    v11 = *(_QWORD *)&v9[v10];
    if ( *(_BYTE *)(v11 + 28) )
      goto LABEL_18;
    v12 = *(_QWORD *)v9;
    LOBYTE(a1) = *(_BYTE *)(v11 + 29);
    if ( *(_BYTE *)(v11 + 27) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 208) + 40LL);
    }
    else if ( *(_DWORD *)(v11 + 44) == 2 )
    {
      v13 = *(_QWORD *)(v11 + 64);
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 88);
    }
    if ( (_BYTE)a1 )
    {
      if ( v12 < v13 )
      {
        v24 = WdLogNewEntry5_WdWarning(a1, a2);
        *(_QWORD *)(v24 + 24) = v12;
        *(_QWORD *)(v24 + 32) = v13;
        goto LABEL_28;
      }
      if ( v12 == v13 )
      {
        v14 = WdLogNewEntry5_WdWarning(a1, a2);
        *(_QWORD *)(v14 + 24) = v12;
LABEL_17:
        WdLogEvent5_WdWarning(v14);
        goto LABEL_18;
      }
      goto LABEL_18;
    }
    if ( (int)v13 - (int)v12 > 0 )
      break;
    if ( (_DWORD)v13 == (_DWORD)v12 )
    {
      v14 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v14 + 24) = (unsigned int)v12;
      goto LABEL_17;
    }
LABEL_18:
    ++v8;
    v9 += 8;
    if ( v8 >= (unsigned int)v6 )
    {
      v7 = a3;
      goto LABEL_20;
    }
  }
  v24 = WdLogNewEntry5_WdWarning(a1, a2);
  *(_QWORD *)(v24 + 24) = (unsigned int)v12;
  *(_QWORD *)(v24 + 32) = (unsigned int)v13;
LABEL_28:
  WdLogEvent5_WdWarning(v24);
  v5 = -1073741811;
  v25 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v25 + 24) = *(_QWORD *)&a5[8 * v8];
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v25);
  return v5;
}
