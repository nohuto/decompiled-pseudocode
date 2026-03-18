/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0003A50
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004498 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C00113A4 (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178EC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00159F8 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pq @ 0x1C00261CC (McTemplateK0pq.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0029E44 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F14 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F40 (-GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0029FC8 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BAFC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C002E058 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchiCompletePendingFlip @ 0x1C003A45C (VidSchiCompletePendingFlip.c)
 *     VidSchControlVSyncDevice @ 0x1C007CD70 (VidSchControlVSyncDevice.c)
 *     VidSchiFlushPendingFlips @ 0x1C00C9B70 (VidSchiFlushPendingFlips.c)
 *     VidSchIsVSyncAvailable @ 0x1C00CB7D0 (VidSchIsVSyncAvailable.c)
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
  __int64 v7; // r14
  __int64 v9; // r13
  int v10; // r12d
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // r9
  struct _VIDSCH_GLOBAL *v19; // rdx
  unsigned __int16 v20; // r9
  int v21; // r15d
  __int64 v22; // rsi
  int v23; // r14d
  struct VIDSCH_FLIP_QUEUE *v24; // rax
  unsigned int v25; // edx
  _QWORD *v26; // rax
  int v27; // r14d
  int v28; // eax
  char *v29; // rax
  void *v30; // r15
  bool v31; // zf
  struct VIDSCH_FLIP_QUEUE **v32; // rdx
  unsigned int v33; // r15d
  _QWORD *v34; // rsi
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char *v37; // rbx
  __int64 v38; // rax
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v40; // edx
  struct _VIDSCH_GLOBAL *v41; // [rsp+30h] [rbp-30h] BYREF
  struct _VIDSCH_GLOBAL **v42; // [rsp+38h] [rbp-28h]
  char v43; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  struct VIDSCH_FLIP_QUEUE **FlipQueueRef; // [rsp+A0h] [rbp+40h]
  struct _ERESOURCE *Resource; // [rsp+B0h] [rbp+50h]

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
      LODWORD(v42) = v7;
      v27 = -1;
      v28 = -1;
      v41 = a1;
      while ( 1 )
      {
        HIDWORD(v42) = v28;
        if ( v28 == *((_DWORD *)a1 + 35) )
          break;
        FlipQueueRef = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v41);
        v29 = (char *)operator new[](0x14850uLL, 0x39616956u, (POOL_TYPE)512);
        v30 = v29;
        if ( v29 )
        {
          v31 = HIDWORD(v42) == -1;
          *((_DWORD *)v29 + 15) = HIDWORD(v42);
          *((_DWORD *)v29 + 8) = 0;
          *((_DWORD *)v29 + 9) = 0;
          *((_DWORD *)v29 + 10) = 0;
          *((_DWORD *)v29 + 11) = 0;
          *((_DWORD *)v29 + 12) = 0;
          *((_DWORD *)v29 + 13) = 0;
          *((_QWORD *)v29 + 8) = 0LL;
          *((_QWORD *)v29 + 9) = 0LL;
          v29[56] = v31;
          memset(v29 + 80, 0, 0x14800uLL);
          memset(v30, 0, 0x20uLL);
        }
        else
        {
          v30 = 0LL;
        }
        v32 = FlipQueueRef;
        *FlipQueueRef = (struct VIDSCH_FLIP_QUEUE *)v30;
        if ( !v30 )
        {
          v10 = -1073741801;
          break;
        }
        v33 = 0;
        while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                       (struct VIDSCH_FLIP_QUEUE *)((char *)*v32 + 1312 * v33 + 80),
                       a1) >= 0 )
        {
          v32 = FlipQueueRef;
          if ( ++v33 >= 0x40 )
            goto LABEL_46;
        }
        v10 = -1073741801;
LABEL_46:
        if ( v10 < 0 )
          goto LABEL_55;
        *((_DWORD *)*FlipQueueRef + 13) = 63;
        v28 = HIDWORD(v42) + 1;
      }
      if ( v10 >= 0 )
      {
        *(_BYTE *)(v12 + 8) = a6;
        *(_DWORD *)(v12 + 4) = v9;
        *(_QWORD *)(v12 + 16) = a3;
        goto LABEL_51;
      }
LABEL_55:
      LODWORD(v42) = a2;
      v41 = a1;
      while ( 1 )
      {
        HIDWORD(v42) = v27;
        if ( v27 == *((_DWORD *)a1 + 35) )
          break;
        FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v41);
        if ( FlipQueue )
        {
          VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(FlipQueue, v40);
          *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v41) = 0LL;
        }
        ++v27;
      }
LABEL_51:
      v34 = (_QWORD *)(a3 + 104);
      v35 = *v34;
      if ( *(_QWORD **)(*v34 + 8LL) != v34
        || (v36 = (_QWORD *)v34[1], (_QWORD *)*v36 != v34)
        || (*v36 = v35,
            v37 = (char *)a1 + 280,
            *(_QWORD *)(v35 + 8) = v36,
            v38 = *(_QWORD *)v37,
            *(char **)(*(_QWORD *)v37 + 8LL) != v37) )
      {
        __fastfail(3u);
      }
      *v34 = v38;
      v34[1] = v37;
      *(_QWORD *)(v38 + 8) = v34;
      *(_QWORD *)v37 = v34;
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
    v41 = (struct _VIDSCH_GLOBAL *)&v41;
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
    v20 = *(_WORD *)(v12 + 33152);
    v21 = *(_DWORD *)(v12 + 4);
    v22 = *(_QWORD *)(v12 + 16);
    v42 = &v41;
    v41 = (struct _VIDSCH_GLOBAL *)&v41;
    v43 = 0;
    VidSchiUnreferenceDisplayingAllocations(
      (struct HwQueueStagingList *)&v41,
      v19,
      (struct _VIDSCH_PRESENT_INFO *)v12,
      v20);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v41);
    LODWORD(v42) = v7;
    v23 = -1;
    v41 = a1;
    while ( 1 )
    {
      HIDWORD(v42) = v23;
      if ( v23 == *((_DWORD *)a1 + 35) )
        break;
      v24 = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v41);
      if ( v24 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v24, v25);
        *VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef((VIDSCH_FLIP_QUEUE_ITERATOR *)&v41) = 0LL;
      }
      ++v23;
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
