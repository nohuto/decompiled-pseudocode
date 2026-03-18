/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033964
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00330C0 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033308 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00351A0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0036460 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0015664 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017DA4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C00261D8 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0pp @ 0x1C002BB7C (McTemplateK0pp.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034BD8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(
        struct HwQueueStagingList ***a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        const GUID *a3)
{
  __int64 v3; // r12
  BOOL v4; // edi
  BOOL v5; // r15d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  struct _VIDMM_DMA_BUFFER *v14; // rdx
  CRefCountedBuffer *v15; // rcx
  CRefCountedBuffer *v16; // rcx
  __int64 i; // rcx
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // r15
  int v21; // r14d
  BOOL v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r11
  int v29; // edx
  unsigned int v30; // r10d
  int v31; // eax
  char v32; // cl
  int v33; // eax
  unsigned int v34; // edi
  bool v35; // zf
  int v36; // eax
  char j; // cl
  __int64 v38; // r8
  char v39; // r14
  __int64 v40; // rdx
  int v41; // edx
  struct HwQueueStagingList *v42; // rax
  struct HwQueueStagingList **v43; // rdx
  __int64 v44; // [rsp+50h] [rbp-68h]
  __int64 v45; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  BOOL v47; // [rsp+C8h] [rbp+10h]
  BOOL v48; // [rsp+D0h] [rbp+18h]

  v3 = *((_QWORD *)a2 + 12);
  v4 = 0;
  v5 = 0;
  v47 = 0;
  v48 = 0;
  v45 = *(_QWORD *)(v3 + 40);
  v8 = *(_QWORD *)(v45 + 8);
  v9 = *(_QWORD *)(v45 + 16);
  v44 = v9;
  v10 = *(_QWORD *)(v8 + 32);
  if ( bTracingEnabled && (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    v11 = *((_QWORD *)a2 + 11);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 56);
      if ( !v12 || (*(_DWORD *)(v11 + 112) & 0x40) != 0 )
        v12 = v11;
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 48);
      if ( !v12 )
        v12 = v3;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v12, &AbortQueuePacket, a3, a2, v12);
    v9 = v44;
  }
  v13 = *((_DWORD *)a2 + 12);
  if ( v13 )
  {
    if ( v13 == 8 )
    {
      --*(_DWORD *)(v3 + 132);
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 1712));
      if ( (*((_DWORD *)a2 + 68) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          1);
    }
  }
  else
  {
    --*(_DWORD *)(v3 + 132);
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 1712));
    v14 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a2 + 35);
    if ( v14 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(v10 + 8) + 552LL), v14, 0);
      if ( (*((_DWORD *)a2 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          0);
    }
    v15 = (CRefCountedBuffer *)*((_QWORD *)a2 + 37);
    if ( v15 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v15);
      *((_QWORD *)a2 + 37) = 0LL;
    }
    v16 = (CRefCountedBuffer *)*((_QWORD *)a2 + 39);
    if ( v16 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v16);
      *((_QWORD *)a2 + 39) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 118); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      v18 = *((_QWORD *)a2 + i + 60);
      *((_QWORD *)a2 + i + 60) = 0LL;
      if ( v18 )
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 104));
    }
  }
  v19 = *((_DWORD *)a2 + 18);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a2 + 13) = 16;
  if ( (v19 & 0x40020) == 0x40000 || (v19 & 0x4000) != 0 )
  {
    v20 = *((unsigned int *)a2 + 40);
    v21 = v19 & 0xC00;
    if ( (v19 & 0x40000) != 0 )
    {
      v22 = (v19 & 0x4000) != 0 && v21 != 1024;
      goto LABEL_43;
    }
    if ( (v19 & 4) != 0 )
    {
      if ( *((_DWORD *)a2 + 100) != 1 )
      {
        if ( (*((_DWORD *)a2 + 16) & 2) != 0 )
        {
LABEL_52:
          if ( (*((_DWORD *)a2 + 18) & 0x40080) != 0 && *((_QWORD *)a2 + 18) && *((_QWORD *)a2 + 19) && v21 != 1024 )
            VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)a1, a2, 0LL, 0LL, 0LL);
          if ( v4 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v10 + 720));
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 1268));
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v20 + 1204));
          }
          VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1608));
          v5 = v48;
          goto LABEL_60;
        }
        v47 = v21 != 1024;
        v22 = v47;
        v48 = v47;
        if ( (*((_DWORD *)a2 + 208) & 0x3FF) == 0 )
        {
LABEL_44:
          if ( v22 && (_DWORD)v20 != -1 && (*((_DWORD *)a2 + 18) & 0x40000) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v20 + 1140));
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v8 + 32) + 4LL))
                            + 8 * v20
                            + 88);
            if ( (*((_DWORD *)a2 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8 * v20 + 5792) + 8LL));
              ++**(_DWORD **)(v10 + 8 * v20 + 5792);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v25 + 8));
            ++*(_DWORD *)v25;
            if ( (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1656), &LockHandle);
              *(_DWORD *)(v8 + 4 * v20 + 508) = *((_DWORD *)a2 + 98);
              *(_QWORD *)(v8 + 8 * v20 + 576) = *((unsigned int *)a2 + 33);
              *(_QWORD *)(v8 + 8 * v20 + 704) = *((_QWORD *)a2 + 17);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
          }
          v4 = v47;
          goto LABEL_52;
        }
        v23 = *(_QWORD *)(v10 + 616);
        v24 = *(unsigned __int16 *)(v44 + 4);
        if ( (unsigned int)v24 < *(_DWORD *)(v10 + 688) )
          v23 += 8 * v24;
        VidSchiUnreferencePrimaryAllocations(
          (struct HwQueueStagingList *)a1,
          (struct _VIDSCH_GLOBAL *)v10,
          v20,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 832),
          *((_DWORD *)a2 + 104),
          1 << *(_BYTE *)(*(_QWORD *)v23 + 6LL),
          0,
          1);
LABEL_43:
        v48 = v22;
        goto LABEL_44;
      }
      v47 = v21 != 1024;
    }
    v22 = v21 != 1024;
    v48 = v22;
    goto LABEL_44;
  }
LABEL_60:
  if ( *((_DWORD *)a2 + 12) == 3 && *((_DWORD *)a2 + 40) != -1 )
  {
    v26 = *((_QWORD *)a2 + 11);
    if ( v26 )
      v27 = *(_QWORD *)(v26 + 104);
    else
      v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
    v28 = *(_QWORD *)(v27 + 32);
    v29 = *((_DWORD *)a2 + 18);
    if ( (v29 & 0x800000) != 0 )
      v30 = ((unsigned __int16)*((_DWORD *)a2 + 208) | (unsigned __int16)(*((_DWORD *)a2 + 208) >> 10)) & 0x3FF;
    else
      v30 = (1 << *(_DWORD *)(v28 + 140)) - 1;
    v35 = !_BitScanForward((unsigned int *)&v31, v30);
    v32 = -1;
    if ( !v35 )
      v32 = v31;
    if ( v30 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v28 + 8LL * *((unsigned int *)a2 + 40) + 2576) + 216LL * v32 + 168),
          0xFFFFFFFF);
        v33 = 1 << v32;
        v32 = -1;
        v30 &= ~v33;
        v35 = !_BitScanForward((unsigned int *)&v33, v30);
        if ( !v35 )
          v32 = v33;
      }
      while ( v30 );
      v29 = *((_DWORD *)a2 + 18);
    }
    if ( (v29 & 0x800000) != 0 )
      v34 = ((unsigned __int16)*((_DWORD *)a2 + 208) | (unsigned __int16)(*((_DWORD *)a2 + 208) >> 10)) & 0x3FF;
    else
      v34 = (1 << *(_DWORD *)(v10 + 140)) - 1;
    v35 = !_BitScanForward((unsigned int *)&v36, v34);
    for ( j = -1; ; j = -1 )
    {
      if ( !v35 )
        j = v36;
      if ( !v34 )
        break;
      v38 = *((unsigned int *)a2 + 40);
      v39 = j;
      v40 = *(int *)(*(_QWORD *)(v10 + 8 * v38 + 2576) + 216LL * (unsigned int)j + 164);
      if ( (int)v40 <= -1 )
        v41 = 0;
      else
        v41 = *(_DWORD *)(136 * v40 + *(_QWORD *)(v10 + 2704) + 112);
      if ( v41 == 1 )
        VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v10, v38, j);
      v34 &= ~(1 << v39);
      v35 = !_BitScanForward((unsigned int *)&v36, v34);
    }
    v4 = v47;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1280));
  if ( v5 )
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v8 + 120));
  if ( v4 )
  {
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v8 + 136));
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1592));
    *(_QWORD *)(v10 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v10 + 1504), 0, 0);
  }
  if ( (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) == 0 )
  {
    v42 = (struct HwQueueStagingList *)(v3 + 152);
    if ( !*(_QWORD *)(v3 + 152) )
    {
      v43 = a1[1];
      if ( *v43 != (struct HwQueueStagingList *)a1 )
        __fastfail(3u);
      *(_QWORD *)v42 = a1;
      *(_QWORD *)(v3 + 160) = v43;
      *v43 = v42;
      a1[1] = (struct HwQueueStagingList **)v42;
      *((_BYTE *)a1 + 16) = 0;
    }
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v45 + 320));
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v44 + 408));
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1560));
    *(_QWORD *)(v45 + 296) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v45 + 264), 0, 0);
    *(_QWORD *)(v44 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v44 + 240), 0, 0);
    *(_QWORD *)(v10 + 1368) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v10 + 1336), 0, 0);
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}
