/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034380
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033AEC (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0033D34 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035BB0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E44 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0036E9C (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0012164 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E80 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013434 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0014300 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0016904 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017314 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0025974 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0pp @ 0x1C002C258 (McTemplateK0pp.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00355DC (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(
        struct HwQueueStagingList ***a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        const GUID *a3)
{
  __int64 v3; // r12
  BOOL v6; // esi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct _VIDMM_DMA_BUFFER *v13; // rdx
  CRefCountedBuffer *v14; // rcx
  CRefCountedBuffer *v15; // rcx
  unsigned int i; // ecx
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // r12
  int v20; // r15d
  BOOL v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r11
  int v28; // edx
  unsigned int v29; // r10d
  int v30; // eax
  char v31; // cl
  int v32; // eax
  unsigned int v33; // esi
  bool v34; // zf
  int v35; // eax
  char j; // cl
  __int64 v37; // r8
  char v38; // r15
  __int64 v39; // rdx
  int v40; // edx
  struct HwQueueStagingList *v41; // rax
  struct HwQueueStagingList **v42; // rdx
  __int64 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  BOOL v47; // [rsp+C8h] [rbp+10h]
  BOOL v48; // [rsp+D0h] [rbp+18h]

  v3 = *((_QWORD *)a2 + 12);
  v44 = v3;
  v6 = 0;
  v47 = 0;
  v45 = *(_QWORD *)(v3 + 40);
  v48 = 0;
  v7 = *(_QWORD *)(v45 + 8);
  v8 = *(_QWORD *)(v45 + 16);
  v43 = v8;
  v9 = *(_QWORD *)(v7 + 32);
  if ( bTracingEnabled && (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    v10 = *((_QWORD *)a2 + 11);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 56);
      if ( !v11 || (*(_DWORD *)(v10 + 112) & 0x40) != 0 )
        v11 = v10;
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 48);
      if ( !v11 )
        v11 = v3;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v11, &AbortQueuePacket, a3, a2, v11);
    v8 = v43;
  }
  v12 = *((_DWORD *)a2 + 12);
  if ( v12 )
  {
    if ( v12 == 8 )
    {
      --*(_DWORD *)(v3 + 132);
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1712));
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
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1712));
    v13 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a2 + 35);
    if ( v13 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(v9 + 8) + 552LL), v13, 0);
      if ( (*((_DWORD *)a2 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a2 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a2 + 35),
          0);
    }
    v14 = (CRefCountedBuffer *)*((_QWORD *)a2 + 37);
    if ( v14 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v14);
      *((_QWORD *)a2 + 37) = 0LL;
    }
    v15 = (CRefCountedBuffer *)*((_QWORD *)a2 + 39);
    if ( v15 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v15);
      *((_QWORD *)a2 + 39) = 0LL;
    }
    for ( i = 0; i < *((_DWORD *)a2 + 118); ++i )
    {
      if ( i >= 0x10 )
        break;
      v17 = *((_QWORD *)a2 + i + 60);
      *((_QWORD *)a2 + i + 60) = 0LL;
      if ( v17 )
        _InterlockedDecrement((volatile signed __int32 *)(v17 + 104));
    }
  }
  v18 = *((_DWORD *)a2 + 18);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a2 + 13) = 16;
  if ( (v18 & 0x40020) == 0x40000 || (v18 & 0x4000) != 0 )
  {
    v19 = *((unsigned int *)a2 + 40);
    v20 = v18 & 0xC00;
    if ( (v18 & 0x40000) != 0 )
    {
      v21 = (v18 & 0x4000) != 0 && v20 != 1024;
      goto LABEL_43;
    }
    if ( (v18 & 4) != 0 )
    {
      if ( *((_DWORD *)a2 + 100) != 1 )
      {
        if ( (*((_DWORD *)a2 + 16) & 2) != 0 )
        {
LABEL_52:
          if ( (*((_DWORD *)a2 + 18) & 0x40080) != 0 && *((_QWORD *)a2 + 18) && *((_QWORD *)a2 + 19) && v20 != 1024 )
            VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)a1, a2, 0LL, 0LL, 0LL);
          if ( v6 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 720));
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 1272));
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v19 + 1208));
          }
          VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1608));
          v3 = v44;
          goto LABEL_60;
        }
        v47 = v20 != 1024;
        v21 = v47;
        v48 = v47;
        if ( (*((_DWORD *)a2 + 206) & 0x3FF) == 0 )
        {
LABEL_44:
          if ( v21 && (_DWORD)v19 != -1 && (*((_DWORD *)a2 + 18) & 0x40000) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v19 + 1144));
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                            + 8 * v19
                            + 88);
            if ( (*((_DWORD *)a2 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v19 + 5792) + 8LL));
              ++**(_DWORD **)(v9 + 8 * v19 + 5792);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v24 + 8));
            ++*(_DWORD *)v24;
            if ( (*((_DWORD *)a2 + 18) & 0x20000) != 0 )
            {
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1656), &LockHandle);
              *(_DWORD *)(v7 + 4 * v19 + 508) = *((_DWORD *)a2 + 98);
              *(_QWORD *)(v7 + 8 * v19 + 576) = *((unsigned int *)a2 + 33);
              *(_QWORD *)(v7 + 8 * v19 + 704) = *((_QWORD *)a2 + 17);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
          }
          v6 = v47;
          goto LABEL_52;
        }
        v22 = *(_QWORD *)(v9 + 616);
        v23 = *(unsigned __int16 *)(v43 + 4);
        if ( (unsigned int)v23 < *(_DWORD *)(v9 + 688) )
          v22 += 8 * v23;
        VidSchiUnreferencePrimaryAllocations(
          (struct HwQueueStagingList *)a1,
          (struct _VIDSCH_GLOBAL *)v9,
          v19,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 824),
          *((_DWORD *)a2 + 104),
          1 << *(_BYTE *)(*(_QWORD *)v22 + 6LL),
          0,
          1);
LABEL_43:
        v48 = v21;
        goto LABEL_44;
      }
      v47 = v20 != 1024;
    }
    v21 = v20 != 1024;
    v48 = v21;
    goto LABEL_44;
  }
LABEL_60:
  if ( *((_DWORD *)a2 + 12) == 3 && *((_DWORD *)a2 + 40) != -1 )
  {
    v25 = *((_QWORD *)a2 + 11);
    if ( v25 )
      v26 = *(_QWORD *)(v25 + 104);
    else
      v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
    v27 = *(_QWORD *)(v26 + 32);
    v28 = *((_DWORD *)a2 + 18);
    if ( (v28 & 0x800000) != 0 )
      v29 = ((unsigned __int16)*((_DWORD *)a2 + 206) | (unsigned __int16)(*((_DWORD *)a2 + 206) >> 10)) & 0x3FF;
    else
      v29 = (1 << *(_DWORD *)(v27 + 140)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v30, v29);
    v31 = -1;
    if ( !v34 )
      v31 = v30;
    if ( v29 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v27 + 8LL * *((unsigned int *)a2 + 40) + 2576) + 216LL * v31 + 176),
          0xFFFFFFFF);
        v32 = 1 << v31;
        v31 = -1;
        v29 &= ~v32;
        v34 = !_BitScanForward((unsigned int *)&v32, v29);
        if ( !v34 )
          v31 = v32;
      }
      while ( v29 );
      v28 = *((_DWORD *)a2 + 18);
    }
    if ( (v28 & 0x800000) != 0 )
      v33 = ((unsigned __int16)*((_DWORD *)a2 + 206) | (unsigned __int16)(*((_DWORD *)a2 + 206) >> 10)) & 0x3FF;
    else
      v33 = (1 << *(_DWORD *)(v9 + 140)) - 1;
    v34 = !_BitScanForward((unsigned int *)&v35, v33);
    for ( j = -1; ; j = -1 )
    {
      if ( !v34 )
        j = v35;
      if ( !v33 )
        break;
      v37 = *((unsigned int *)a2 + 40);
      v38 = j;
      v39 = *(int *)(*(_QWORD *)(v9 + 8 * v37 + 2576) + 216LL * (unsigned int)j + 172);
      if ( (int)v39 <= -1 )
        v40 = 0;
      else
        v40 = *(_DWORD *)(136 * v39 + *(_QWORD *)(v9 + 2704) + 112);
      if ( v40 == 1 )
        VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)a1, (struct _VIDSCH_GLOBAL *)v9, v37, j);
      v33 &= ~(1 << v38);
      v34 = !_BitScanForward((unsigned int *)&v35, v33);
    }
    v6 = v47;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1284));
  if ( v48 )
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 120));
  if ( v6 )
  {
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 136));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1592));
    *(_QWORD *)(v9 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1504), 0, 0);
  }
  if ( (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) == 0 )
  {
    v41 = (struct HwQueueStagingList *)(v3 + 152);
    if ( !*(_QWORD *)(v3 + 152) )
    {
      v42 = a1[1];
      if ( *v42 != (struct HwQueueStagingList *)a1 )
        __fastfail(3u);
      *(_QWORD *)v41 = a1;
      *(_QWORD *)(v3 + 160) = v42;
      *v42 = v41;
      a1[1] = (struct HwQueueStagingList **)v41;
      *((_BYTE *)a1 + 16) = 0;
    }
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v45 + 320));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v43 + 408));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1560));
    *(_QWORD *)(v45 + 296) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v45 + 264), 0, 0);
    *(_QWORD *)(v43 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v43 + 240), 0, 0);
    *(_QWORD *)(v9 + 1368) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1336), 0, 0);
  }
  VidSchiFreeCompletedHwQueuePacket(a2);
}
