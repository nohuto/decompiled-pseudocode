/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0002548
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0002CD0 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C00118C8 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001843C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00166A8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pq @ 0x1C002672C (McTemplateK0pq.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029304 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002943C (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002D948 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchiCompletePendingFlip @ 0x1C0039A40 (VidSchiCompletePendingFlip.c)
 *     VidSchControlVSyncDevice @ 0x1C007C340 (VidSchControlVSyncDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00C6AFC (VidSchiFlushPendingFlips.c)
 *     VidSchIsVSyncAvailable @ 0x1C00C8720 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v7; // r12
  __int64 v9; // r14
  int v10; // r15d
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // r9
  struct _VIDSCH_GLOBAL *v19; // rdx
  unsigned __int16 v20; // r9
  int v21; // r13d
  __int64 v22; // r12
  unsigned int v23; // edx
  unsigned int j; // esi
  void *v25; // rcx
  _QWORD *v26; // rax
  unsigned int v27; // edx
  __int64 v28; // r13
  PVOID v29; // rax
  void *v30; // r12
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 i; // r14
  void *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  char *v38; // rdi
  __int64 v39; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v42; // [rsp+50h] [rbp-10h]
  char v43; // [rsp+58h] [rbp-8h]
  struct _ERESOURCE *Resource; // [rsp+90h] [rbp+30h]

  v7 = a2;
  v9 = a4;
  v10 = 0;
  Resource = (struct _ERESOURCE *)((char *)a1 + 904);
  v12 = *((_QWORD *)a1 + a2 + 322);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 904), 1u);
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v13[3] = a3;
  v13[4] = v7;
  v13[5] = v9;
  WdLogEvent5_WdEvent(v13);
  if ( (_DWORD)v9 )
  {
    v16 = *(_QWORD *)(v12 + 16);
    if ( v16 )
    {
      if ( v16 == a3 && *(_DWORD *)(v12 + 4) == (_DWORD)v9 )
        goto LABEL_5;
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v26[3] = 281LL;
      v26[4] = 0x10000LL;
      v26[5] = a1;
      v26[6] = a3;
      v26[7] = v7;
      WdLogEvent5_WdCriticalError(v26);
      __debugbreak();
    }
    if ( ((int)v9 >= 4 || *((_BYTE *)a1 + 144))
      && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7)
        ? (v10 = -1073741823)
        : (v10 = VidSchControlVSyncDevice(a3, 1LL)),
          v10 < 0)
      || (int)v9 < 3 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 206, &LockHandle);
      *(_BYTE *)(v12 + 8) = a6;
      *(_DWORD *)(v12 + 4) = v9;
      *(_QWORD *)(v12 + 16) = a3;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 206, &LockHandle);
      v28 = 0LL;
      if ( *((_DWORD *)a1 + 35) )
      {
        while ( 1 )
        {
          v29 = operator new[](0x14438uLL, 0x39616956u, (POOL_TYPE)512);
          v30 = v29;
          if ( v29 )
            memset(v29, 0, 0x14438uLL);
          else
            v30 = 0LL;
          *(_QWORD *)(v12 + 8 * v28 + 24) = v30;
          if ( !v30 )
            break;
          memset(v30, 0, 0x14438uLL);
          v31 = 0;
          while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                         (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v12 + 8 * v28 + 24) + 56LL + 1296LL * v31),
                         a1) >= 0 )
          {
            if ( ++v31 >= 0x40 )
              goto LABEL_44;
          }
          v10 = -1073741801;
LABEL_44:
          if ( v10 < 0 )
            goto LABEL_50;
          v32 = *(_QWORD *)(v12 + 8 * v28 + 24);
          v28 = (unsigned int)(v28 + 1);
          *(_DWORD *)(v32 + 52) = 63;
          if ( (unsigned int)v28 >= *((_DWORD *)a1 + 35) )
            goto LABEL_48;
        }
        v10 = -1073741801;
      }
LABEL_48:
      if ( v10 < 0 )
      {
LABEL_50:
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 35); i = (unsigned int)(i + 1) )
        {
          v34 = *(void **)(v12 + 8 * i + 24);
          if ( v34 )
          {
            VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v34, v27);
            *(_QWORD *)(v12 + 8 * i + 24) = 0LL;
          }
        }
      }
      else
      {
        *(_BYTE *)(v12 + 8) = a6;
        *(_DWORD *)(v12 + 4) = v9;
        *(_QWORD *)(v12 + 16) = a3;
      }
      v35 = (_QWORD *)(a3 + 104);
      v36 = *(_QWORD *)(a3 + 104);
      if ( *(_QWORD *)(v36 + 8) != a3 + 104
        || (v37 = *(_QWORD **)(a3 + 112), (_QWORD *)*v37 != v35)
        || (*v37 = v36,
            v38 = (char *)a1 + 280,
            *(_QWORD *)(v36 + 8) = v37,
            v39 = *(_QWORD *)v38,
            *(char **)(*(_QWORD *)v38 + 8LL) != v38) )
      {
        __fastfail(3u);
      }
      *v35 = v39;
      *(_QWORD *)(a3 + 112) = v38;
      *(_QWORD *)(v39 + 8) = v35;
      *(_QWORD *)v38 = v35;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else if ( !a3 || a3 == *(_QWORD *)(v12 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v18 = *(_QWORD *)(a3 + 8);
        if ( !v18 )
          v18 = a3;
      }
      else
      {
        v18 = 0LL;
      }
      McTemplateK0pq(v14, &EventClearFlipDevice, v15, v18, v7);
    }
    VidSchiClearPeriodicFrameNotifications(a1, (unsigned int)v7);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 206, &LockHandle);
    v42 = &v41;
    v43 = 0;
    v41 = (__int64)&v41;
    VidSchiCompletePendingFlip(&v41, a1, (unsigned int)v7, a5);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v41);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v12);
      if ( a7 )
      {
        VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v7);
        VidSchiFlushPendingFlips(a1, v12);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 206, &LockHandle);
    }
    v20 = *(_WORD *)(v12 + 33144);
    v21 = *(_DWORD *)(v12 + 4);
    v22 = *(_QWORD *)(v12 + 16);
    v42 = &v41;
    v43 = 0;
    v41 = (__int64)&v41;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v41,
      v19,
      (struct _VIDSCH_PRESENT_INFO *)v12,
      v20);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v41);
    for ( j = 0; j < *((_DWORD *)a1 + 35); ++j )
    {
      v25 = *(void **)(v12 + 8LL * j + 24);
      if ( v25 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v25, v23);
        *(_QWORD *)(v12 + 8LL * j + 24) = 0LL;
      }
    }
    *(_BYTE *)(v12 + 8) = a6;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 16) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v22 && (v21 >= 4 || *((_BYTE *)a1 + 144)) )
      v10 = VidSchControlVSyncDevice(v22, 1LL);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v10;
}
