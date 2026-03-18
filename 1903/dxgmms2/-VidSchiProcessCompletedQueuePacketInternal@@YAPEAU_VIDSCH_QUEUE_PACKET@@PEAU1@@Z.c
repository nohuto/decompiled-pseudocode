/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00074C0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0006A10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000F1E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012420 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0012AB0 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C00136B4 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0014CA4 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0008190 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0008AF0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009E00 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009E90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A930 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000AF50 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0012174 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E90 (VidSchiSubmitPresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013444 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0016914 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017324 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A1F0 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp @ 0x1C002C258 (McTemplateK0pp.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r13
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // r12
  int v8; // r8d
  unsigned int v9; // r9d
  int v10; // eax
  struct _VIDSCH_QUEUE_PACKET **v11; // rdx
  struct _VIDSCH_QUEUE_PACKET **v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  BOOL v17; // r14d
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  unsigned int i; // esi
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rcx
  unsigned int j; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r15d
  __int64 v31; // rsi
  __int64 v32; // r14
  int v33; // ecx
  struct _KEVENT **v34; // rsi
  KIRQL v35; // al
  __int64 v36; // r14
  KIRQL v37; // r12
  struct _KEVENT *k; // r15
  struct _KEVENT *v39; // rsi
  struct _KEVENT *v40; // r12
  KIRQL v41; // r15
  struct _KEVENT *v42; // r14
  int v43; // eax
  int v44; // edx
  KSPIN_LOCK *v45; // r12
  __int64 v46; // rax
  struct _KEVENT *v47; // rcx
  struct _KEVENT **v48; // rax
  KSPIN_LOCK *v49; // rcx
  struct _KEVENT **v50; // rax
  _QWORD **v51; // rdi
  _QWORD *v52; // rsi
  _QWORD *v53; // rax
  CRefCountedBuffer *v55; // rcx
  struct _KEVENT *v56; // rcx
  struct _KEVENT *v57; // rsi
  KIRQL v58; // r14
  struct _KEVENT *v59; // r15
  __int64 v60; // rcx
  struct _KEVENT *v61; // r14
  KIRQL v62; // r15
  struct _KEVENT *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r10
  int v67; // edx
  bool v68; // zf
  int v69; // eax
  char v70; // cl
  int v71; // eax
  unsigned int v72; // esi
  int v73; // eax
  __int64 v74; // r8
  char v75; // r14
  __int64 v76; // rdx
  int v77; // ecx
  struct _KEVENT *v78; // rcx
  _QWORD *v79; // rax
  __int64 v80; // rcx
  void (__fastcall *v81)(_QWORD); // rax
  struct _KEVENT *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  int Flink; // ecx
  int v86; // ecx
  int v87; // ecx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // [rsp+40h] [rbp-C0h]
  __int64 v91; // [rsp+48h] [rbp-B8h]
  _QWORD v92[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h]
  __int64 v95; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+78h] [rbp-88h]
  int v97; // [rsp+7Ch] [rbp-84h]
  int v98; // [rsp+80h] [rbp-80h]
  int v99; // [rsp+84h] [rbp-7Ch]
  struct _KLOCK_QUEUE_HANDLE v100; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v102; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v103; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v105; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v106; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v107; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  KIRQL v109; // [rsp+1B0h] [rbp+B0h]
  int v110; // [rsp+1B8h] [rbp+B8h]
  int v111; // [rsp+1C0h] [rbp+C0h]
  int v112; // [rsp+1C8h] [rbp+C8h]

  v3 = *((_QWORD *)a1 + 11);
  v111 = 0;
  v5 = 0;
  v110 = 0;
  v6 = *(_QWORD *)(v3 + 96);
  v90 = *(_QWORD *)(v3 + 104);
  v91 = v6;
  v7 = *(_QWORD *)(v6 + 24);
  v94 = v7;
  v112 = 0;
  v95 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v80 = *(_QWORD *)(v3 + 56);
    if ( !v80 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v80 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v80, &AbortQueuePacket, a3, a1, v80);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v24 = (volatile signed __int32 *)*((_QWORD *)a1 + 37);
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v24, 0);
      *((_QWORD *)a1 + 37) = 0LL;
    }
    v25 = (volatile signed __int32 *)*((_QWORD *)a1 + 36);
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v25, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
  v109 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1648), &LockHandle);
  v93 = 0;
  v92[1] = v92;
  v92[0] = v92;
  v10 = *((_DWORD *)a1 + 20);
  if ( (v10 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v10 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 11192LL) != -1 )
    {
      v81 = *(void (__fastcall **)(_QWORD))(v7 + 2464);
      if ( v81 )
        v81(*(_QWORD *)(v7 + 2496));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v89[3] = 281LL;
    v89[4] = 512LL;
    v89[5] = v7;
    v89[6] = v3;
    v89[7] = a1;
    WdLogEvent5_WdCriticalError(v89);
    __debugbreak();
    JUMPOUT(0x1C001B92DLL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)v92, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v11 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v11[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_222;
  v12 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v12 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_222;
  *v12 = (struct _VIDSCH_QUEUE_PACKET *)v11;
  v11[1] = (struct _VIDSCH_QUEUE_PACKET *)v12;
  v13 = *(_QWORD *)(v3 + 656);
  if ( v13 == v3 + 656 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v28 = 10LL;
      v29 = 12650LL;
      goto LABEL_53;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v28 = 0LL;
      v29 = 12683LL;
LABEL_53:
      VidSchiUpdateContextStatus(v3, v28, v29);
    }
  }
  else
  {
    v14 = *(_DWORD *)(v13 + 48);
    v13 -= 32LL;
    if ( (v14 & 3) == 1 )
    {
      v95 = v13;
      *(_DWORD *)(v13 + 80) = v14 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v28 = 10LL;
      v29 = 12631LL;
      goto LABEL_53;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_16;
  v19 = *((_QWORD *)a1 + 99);
  v20 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v19 )
  {
    *(_QWORD *)(v19 + 800) = *((_QWORD *)a1 + 100);
    v21 = *((_QWORD *)a1 + 100);
    if ( !v21 )
      goto LABEL_169;
  }
  else
  {
    v21 = *((_QWORD *)a1 + 100);
    if ( !v21 )
    {
      v22 = *((_DWORD *)a1 + 68);
      if ( (v22 & 2) != 0 )
      {
        v82 = (struct _KEVENT *)*((_QWORD *)a1 + 67);
        if ( (v22 & 8) != 0 )
        {
          DxgCoreInterface[63]((__int64)v82, v13);
        }
        else
        {
          KeSetEvent(v82, 0, 0);
          ObfDereferenceObject(*((PVOID *)a1 + 67));
        }
        *((_QWORD *)a1 + 67) = 0LL;
      }
      else if ( *((_DWORD *)a1 + 69) )
      {
        do
        {
          VidSchiCompleteSignalSyncObject(
            (unsigned int)v92,
            *((_QWORD *)a1 + v5 + 35),
            v8,
            (_DWORD)a1 + 536 + 8 * v5,
            1);
          ++v5;
        }
        while ( v5 < *((_DWORD *)a1 + 69) );
      }
      goto LABEL_31;
    }
  }
  *(_QWORD *)(v21 + 792) = *((_QWORD *)a1 + 99);
LABEL_169:
  *((_QWORD *)a1 + 99) = 0LL;
  *((_QWORD *)a1 + 100) = 0LL;
LABEL_31:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + i + 35));
  }
  VidSchiCheckPendingDeviceCommand(v20);
  v5 = 0;
LABEL_16:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 900));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 2840));
      RtlSetBitEx(v7 + 472, *(unsigned __int16 *)(v6 + 4));
    }
    for ( j = 0; j < *((_DWORD *)a1 + 118); ++j )
    {
      if ( j >= 0x10 )
        break;
      v27 = *((_QWORD *)a1 + j + 60);
      *((_QWORD *)a1 + j + 60) = 0LL;
      if ( v27 )
        _InterlockedDecrement((volatile signed __int32 *)(v27 + 104));
    }
  }
  v15 = *((unsigned int *)a1 + 18);
  v16 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v16 )
  {
    v17 = (v15 & 0x400) == 0 || (v15 & 0x800) != 0;
    v18 = *((unsigned int *)a1 + 40);
    if ( (v15 & 0x40000) != 0 )
    {
      v5 = v17;
      if ( !v16 )
        v5 = 0;
    }
    else
    {
      if ( (v15 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 100) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
            goto LABEL_102;
          if ( !v17 )
            goto LABEL_194;
          v5 = 1;
          v111 = 1;
          v110 = 1;
          v112 = 1;
LABEL_112:
          LOBYTE(v15) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v15, 0LL);
          if ( !v112 )
          {
LABEL_113:
            if ( v5 && (_DWORD)v18 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v90 + 4 * v18 + 1144));
              v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 40) + 24LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v90 + 32) + 4LL))
                              + 8 * v18
                              + 88);
              if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v18 + 5792) + 8LL));
                ++**(_DWORD **)(v7 + 8 * v18 + 5792);
              }
              _InterlockedDecrement((volatile signed __int32 *)(v60 + 8));
              ++*(_DWORD *)v60;
              if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1656), &v100);
                *(_DWORD *)(v90 + 4 * v18 + 508) = *((_DWORD *)a1 + 98);
                *(_QWORD *)(v90 + 8 * v18 + 576) = *((unsigned int *)a1 + 33);
                *(_QWORD *)(v90 + 8 * v18 + 704) = *((_QWORD *)a1 + 17);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v100);
              }
            }
LABEL_102:
            if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v17 )
              VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v92, 0LL);
            if ( v111 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 720));
              _InterlockedDecrement((volatile signed __int32 *)(v90 + 1272));
              _InterlockedDecrement((volatile signed __int32 *)(v90 + 4 * v18 + 1208));
            }
            v57 = (struct _KEVENT *)(v7 + 1608);
            v58 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1664), &v101);
            v59 = *(struct _KEVENT **)(v7 + 1608);
            if ( *(struct _KEVENT **)&v57->Header.Lock == v57 )
            {
LABEL_110:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
              KeLowerIrql(v58);
              v30 = v110;
              if ( v110 )
                goto LABEL_58;
              goto LABEL_56;
            }
            while ( 1 )
            {
              if ( LODWORD(v59->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 4LL * LODWORD(v59[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 244LL) )
                  goto LABEL_204;
              }
              else if ( ((__int64)v59[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                Flink = (int)v59[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v59[5].Header.WaitListHead.Blink) = Flink;
                if ( Flink )
                  goto LABEL_204;
              }
              ++v59[5].Header.LockNV;
              KeSetEvent(v59 + 4, 0, 0);
LABEL_204:
              v59 = *(struct _KEVENT **)&v59->Header.Lock;
              if ( v59 == v57 )
                goto LABEL_110;
            }
          }
LABEL_194:
          if ( (*((_DWORD *)a1 + 206) & 0x3FF) != 0 )
          {
            v83 = *(unsigned int *)(v3 + 88);
            v84 = *(_QWORD *)(v7 + 616);
            if ( (unsigned int)v83 < *(_DWORD *)(v7 + 688) )
              v84 += 8 * v83;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)v92,
              (struct _VIDSCH_GLOBAL *)v7,
              v18,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 824),
              *((_DWORD *)a1 + 104),
              1 << *(_BYTE *)(*(_QWORD *)v84 + 6LL),
              0,
              1);
          }
          goto LABEL_113;
        }
        v111 = v17;
      }
      v5 = v17;
    }
    v110 = v5;
    if ( !v5 )
      goto LABEL_102;
    goto LABEL_112;
  }
  v30 = 0;
LABEL_56:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
LABEL_58:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v64 = *((_QWORD *)a1 + 11);
    if ( v64 )
      v65 = *(_QWORD *)(v64 + 104);
    else
      v65 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v66 = *(_QWORD *)(v65 + 32);
    v67 = *((_DWORD *)a1 + 18);
    if ( (v67 & 0x800000) != 0 )
      v9 = ((unsigned __int16)*((_DWORD *)a1 + 206) | (unsigned __int16)(*((_DWORD *)a1 + 206) >> 10)) & 0x3FF;
    else
      v9 = (1 << *(_DWORD *)(v66 + 140)) - 1;
    v68 = !_BitScanForward((unsigned int *)&v69, v9);
    v70 = -1;
    v96 = v69;
    if ( !v68 )
      v70 = v69;
    if ( v9 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v66 + 8LL * *((unsigned int *)a1 + 40) + 2576) + 216LL * v70 + 176),
          0xFFFFFFFF);
        v71 = 1 << v70;
        v70 = -1;
        v9 &= ~v71;
        v68 = !_BitScanForward((unsigned int *)&v71, v9);
        v97 = v71;
        if ( !v68 )
          v70 = v71;
      }
      while ( v9 );
      v67 = *((_DWORD *)a1 + 18);
    }
    if ( (v67 & 0x800000) != 0 )
      v72 = ((unsigned __int16)*((_DWORD *)a1 + 206) | (unsigned __int16)(*((_DWORD *)a1 + 206) >> 10)) & 0x3FF;
    else
      v72 = (1 << *(_DWORD *)(v7 + 140)) - 1;
    v68 = !_BitScanForward((unsigned int *)&v73, v72);
    v98 = v73;
    if ( v68 )
      LOBYTE(v73) = -1;
    while ( v72 )
    {
      v74 = *((unsigned int *)a1 + 40);
      v75 = v73;
      v76 = *(int *)(*(_QWORD *)(v7 + 8 * v74 + 2576) + 216LL * (unsigned int)(char)v73 + 172);
      if ( (int)v76 > -1 && *(_DWORD *)(136 * v76 + *(_QWORD *)(v7 + 2704) + 112) == 1 )
        VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v92, (struct _VIDSCH_GLOBAL *)v7, v74, (char)v73);
      v72 &= ~(1 << v75);
      v68 = !_BitScanForward((unsigned int *)&v73, v72);
      v99 = v73;
      if ( v68 )
        LOBYTE(v73) = -1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 708));
  v31 = v91;
  v32 = v90;
  _InterlockedDecrement((volatile signed __int32 *)(v91 + 2852));
  _InterlockedDecrement((volatile signed __int32 *)(v90 + 1280));
  v33 = *((_DWORD *)a1 + 12);
  if ( (unsigned int)(v33 - 4) > 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v90 + 1284));
    v33 = *((_DWORD *)a1 + 12);
  }
  if ( !v33 && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *((unsigned int *)a1 + 40) + 2576) + 2340LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 776));
  VidSchiProfilePerformanceTick(9, v7, v91, v9, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v90);
  if ( v30 )
  {
    v61 = (struct _KEVENT *)(v90 + 120);
    v62 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1664), &v102);
    v63 = *(struct _KEVENT **)(v90 + 120);
    if ( *(struct _KEVENT **)&v61->Header.Lock == v61 )
    {
LABEL_125:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v102);
      KeLowerIrql(v62);
      v31 = v91;
      v32 = v90;
      goto LABEL_63;
    }
    while ( LODWORD(v63->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v63[1].Header.Lock + 4LL * LODWORD(v63[1].Header.WaitListHead.Blink) + 1144) < *(_DWORD *)(*(_QWORD *)&v63[1].Header.Lock + 244LL) )
        goto LABEL_123;
LABEL_124:
      v63 = *(struct _KEVENT **)&v63->Header.Lock;
      if ( v63 == v61 )
        goto LABEL_125;
    }
    if ( ((__int64)v63[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v86 = (int)v63[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v63[5].Header.WaitListHead.Blink) = v86;
      if ( v86 )
        goto LABEL_124;
    }
LABEL_123:
    ++v63[5].Header.LockNV;
    KeSetEvent(v63 + 4, 0, 0);
    goto LABEL_124;
  }
LABEL_63:
  if ( v111 )
  {
    VidSchiSignalRegisteredEvent(v7, v32 + 136);
    VidSchiSignalRegisteredEvent(v7, v7 + 1592);
    *(_QWORD *)(v7 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1504), 0, 0);
  }
  v34 = (struct _KEVENT **)(v31 + 424);
  v35 = KfRaiseIrql(2u);
  v36 = v94;
  v37 = v35;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v94 + 1664), &v103);
  for ( k = *v34; k != (struct _KEVENT *)v34; k = *(struct _KEVENT **)&k->Header.Lock )
  {
    if ( LODWORD(k->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 4LL * LODWORD(k[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&k[1].Header.Lock + 244LL) )
        continue;
    }
    else if ( ((__int64)k[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v87 = (int)k[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(k[5].Header.WaitListHead.Blink) = v87;
      if ( v87 )
        continue;
    }
    ++k[5].Header.LockNV;
    KeSetEvent(k + 4, 0, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v103);
  KeLowerIrql(v37);
  v39 = (struct _KEVENT *)(v36 + 1576);
  v40 = (struct _KEVENT *)v36;
  v41 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v36 + 1664), &v104);
  v42 = *(struct _KEVENT **)(v36 + 1576);
  if ( *(struct _KEVENT **)&v39->Header.Lock != v39 )
  {
    do
    {
      if ( LODWORD(v42->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v42[1].Header.Lock + 4LL * LODWORD(v42[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v42[1].Header.Lock + 244LL) )
          goto LABEL_159;
      }
      else if ( ((__int64)v42[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v77 = (int)v42[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v42[5].Header.WaitListHead.Blink) = v77;
        if ( v77 )
          goto LABEL_159;
      }
      ++v42[5].Header.LockNV;
      KeSetEvent(v42 + 4, 0, 0);
LABEL_159:
      v42 = *(struct _KEVENT **)&v42->Header.Lock;
    }
    while ( v42 != v39 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
  KeLowerIrql(v41);
  *(_QWORD *)(v91 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v91 + 296), 0, 0);
  v40[59].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeSetEvent(v40 + 58, 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v43 = *((_DWORD *)a1 + 12);
    if ( !v43 || v43 == 7 )
    {
      v56 = (struct _KEVENT *)*((_QWORD *)a1 + 46);
      if ( v56 )
      {
        KeSetEvent(v56, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 46));
      }
    }
    else if ( v43 == 6 )
    {
      v78 = (struct _KEVENT *)*((_QWORD *)a1 + 38);
      if ( v78 )
        KeSetEvent(v78, 0, 0);
    }
  }
  v44 = *((_DWORD *)a1 + 12);
  if ( !v44 || v44 == 7 || v44 == 3 )
  {
    v55 = (CRefCountedBuffer *)*((_QWORD *)a1 + 39);
    if ( v55 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v55);
      v44 = *((_DWORD *)a1 + 12);
      *((_QWORD *)a1 + 39) = 0LL;
    }
  }
  v45 = *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !v44 && (*((_QWORD *)a1 + 77) || *((_QWORD *)a1 + 33)) )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v88[3] = 281LL;
    v88[4] = 2560LL;
    v88[5] = a1;
    v88[6] = *((_QWORD *)a1 + 77);
    v88[7] = *((_QWORD *)a1 + 33);
    WdLogEvent5_WdCriticalError(v88);
    __debugbreak();
LABEL_221:
    VidSchiInterlockedInsertTailList(v49, v3 + 728, v39, (_DWORD *)(v3 + 744));
    goto LABEL_84;
  }
  v46 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v46 + 24) = a1;
  *(_QWORD *)(v46 + 32) = v3;
  WdLogEvent5_WdEvent(v46);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v45 += 207;
  *((_DWORD *)a1 + 13) = 0;
  v39 = (struct _KEVENT *)((char *)a1 + 8);
  KeAcquireInStackQueuedSpinLock(v45, &v105);
  v47 = (struct _KEVENT *)*((_QWORD *)a1 + 1);
  if ( *(struct _KEVENT **)(*(_QWORD *)&v39->Header.Lock + 8LL) != v39 )
    goto LABEL_222;
  v48 = (struct _KEVENT **)*((_QWORD *)a1 + 2);
  if ( *v48 != v39 )
    goto LABEL_222;
  *v48 = v47;
  v47->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v48;
  if ( v3 != -768 )
    --*(_DWORD *)(v3 + 768);
  KeReleaseInStackQueuedSpinLock(&v105);
  v49 = v45;
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
    goto LABEL_221;
  KeAcquireInStackQueuedSpinLock(v45, &v106);
  v50 = *(struct _KEVENT ***)(v3 + 712);
  if ( *v50 != (struct _KEVENT *)(v3 + 704) )
LABEL_222:
    __fastfail(3u);
  *(_QWORD *)&v39->Header.Lock = v3 + 704;
  *((_QWORD *)a1 + 2) = v50;
  *v50 = v39;
  *(_QWORD *)(v3 + 712) = v39;
  if ( v3 != -720 )
    ++*(_DWORD *)(v3 + 720);
  KeReleaseInStackQueuedSpinLock(&v106);
LABEL_84:
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v51 = (_QWORD **)(v3 + 704);
    while ( 1 )
    {
      v52 = 0LL;
      KeAcquireInStackQueuedSpinLock(v45, &v107);
      v53 = *v51;
      if ( *v51 != v51 && *(_DWORD *)(v3 + 720) > 0x10u )
      {
        v52 = *v51;
        if ( (_QWORD **)v53[1] != v51 )
          goto LABEL_222;
        v79 = (_QWORD *)*v53;
        if ( (_QWORD *)v79[1] != v52 )
          goto LABEL_222;
        *v51 = v79;
        v79[1] = v51;
        --*(_DWORD *)(v3 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v107);
      if ( !v52 )
        break;
      ExFreePoolWithTag(v52 - 1, 0);
    }
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v92);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v109);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v92);
  return (struct _VIDSCH_QUEUE_PACKET *)v95;
}
