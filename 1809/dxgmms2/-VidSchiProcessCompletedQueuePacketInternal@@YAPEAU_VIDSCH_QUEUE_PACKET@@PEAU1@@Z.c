/*
 * XREFs of ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0014210 (VidSchiSubmitSignalCommand.c)
 *     VidSchiSubmitSoftwareCommand @ 0x1C0014874 (VidSchiSubmitSoftwareCommand.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0015934 (VidSchiProcessCompletedQueuePacket.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0009DE0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017DA4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002964C (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0pp @ 0x1C002BB7C (McTemplateK0pp.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacketInternal(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // r14
  int v9; // r8d
  unsigned int v10; // r9d
  int v11; // eax
  struct _VIDSCH_QUEUE_PACKET **v12; // rdx
  struct _VIDSCH_QUEUE_PACKET **v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // ecx
  BOOL v22; // r15d
  __int64 v23; // r12
  int v24; // edi
  __int64 v25; // rcx
  struct _KEVENT *v26; // rdi
  KIRQL v27; // r15
  struct _KEVENT *v28; // r12
  volatile signed __int32 *v29; // rcx
  volatile signed __int32 *v30; // rcx
  unsigned int i; // ecx
  __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // ecx
  struct _KEVENT *v35; // rdi
  KIRQL v36; // r12
  struct _KEVENT *v37; // r15
  struct _KEVENT *v38; // rdi
  struct _KEVENT *v39; // r12
  KIRQL v40; // r15
  struct _KEVENT *v41; // r14
  int v42; // eax
  int v43; // edx
  KSPIN_LOCK *v44; // r12
  __int64 v45; // rax
  struct _KEVENT *v46; // rcx
  struct _KEVENT **v47; // rax
  KSPIN_LOCK *v48; // rcx
  struct _KEVENT **v49; // rax
  _QWORD **v50; // rbx
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  CRefCountedBuffer *v54; // rcx
  struct _KEVENT *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  struct _KEVENT *v58; // r15
  KIRQL v59; // r12
  struct _KEVENT *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r10
  int v64; // edx
  bool v65; // zf
  int v66; // ecx
  int v67; // ecx
  unsigned int v68; // edi
  int v69; // eax
  __int64 v70; // r8
  char v71; // r15
  __int64 v72; // rdx
  int v73; // ecx
  _QWORD *v74; // rax
  struct _KEVENT *v75; // rcx
  __int64 v76; // rcx
  void (__fastcall *v77)(_QWORD); // rax
  struct _KEVENT *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  int Flink; // ecx
  int v82; // ecx
  int v83; // ecx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // [rsp+40h] [rbp-C0h]
  _QWORD v87[2]; // [rsp+48h] [rbp-B8h] BYREF
  char v88; // [rsp+58h] [rbp-A8h]
  __int64 v89; // [rsp+60h] [rbp-A0h]
  int v90; // [rsp+68h] [rbp-98h]
  int v91; // [rsp+6Ch] [rbp-94h]
  int v92; // [rsp+70h] [rbp-90h]
  int v93; // [rsp+74h] [rbp-8Ch]
  __int64 v94; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v95; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v96; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v98; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v99; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v100; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+118h] [rbp+18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v102; // [rsp+130h] [rbp+30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  KIRQL v104; // [rsp+1B0h] [rbp+B0h]
  int v105; // [rsp+1B8h] [rbp+B8h]
  int v106; // [rsp+1C0h] [rbp+C0h]
  int v107; // [rsp+1C8h] [rbp+C8h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = 0;
  v106 = 0;
  v6 = 0;
  v105 = 0;
  v7 = *(_QWORD *)(v3 + 96);
  v86 = *(_QWORD *)(v3 + 104);
  v107 = 0;
  v8 = *(_QWORD *)(v7 + 24);
  v89 = 0LL;
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v76 = *(_QWORD *)(v3 + 56);
    if ( !v76 || (*(_DWORD *)(v3 + 112) & 0x40) != 0 )
      v76 = v3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v76, &AbortQueuePacket, a3, a1, v76);
  }
  if ( !*((_DWORD *)a1 + 12) )
  {
    v29 = (volatile signed __int32 *)*((_QWORD *)a1 + 37);
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v29, 0);
      *((_QWORD *)a1 + 37) = 0LL;
    }
    v30 = (volatile signed __int32 *)*((_QWORD *)a1 + 36);
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag((PVOID)v30, 0);
      *((_QWORD *)a1 + 36) = 0LL;
    }
  }
  v104 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1648), &LockHandle);
  v88 = 0;
  v87[1] = v87;
  v87[0] = v87;
  v11 = *((_DWORD *)a1 + 20);
  if ( (v11 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v11 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 11192LL) != -1 )
    {
      v77 = *(void (__fastcall **)(_QWORD))(v8 + 2464);
      if ( v77 )
        v77(*(_QWORD *)(v8 + 2496));
    }
  }
  if ( *((_DWORD *)a1 + 13) == 16 || !*((_DWORD *)a1 + 13) )
  {
    v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v85[3] = 281LL;
    v85[4] = 512LL;
    v85[5] = v8;
    v85[6] = v3;
    v85[7] = a1;
    WdLogEvent5_WdCriticalError(v85);
    __debugbreak();
    JUMPOUT(0x1C001D3FALL);
  }
  if ( (*((_DWORD *)a1 + 20) & 0x20) != 0 )
    VidSchiAdvanceContextSubmissionId((struct HwQueueStagingList *)v87, a1);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  v12 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 4);
  if ( v12[1] != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_223;
  v13 = (struct _VIDSCH_QUEUE_PACKET **)*((_QWORD *)a1 + 5);
  if ( *v13 != (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 32) )
    goto LABEL_223;
  *v13 = (struct _VIDSCH_QUEUE_PACKET *)v12;
  v12[1] = (struct _VIDSCH_QUEUE_PACKET *)v13;
  v14 = *(_QWORD *)(v3 + 656);
  if ( v14 == v3 + 656 )
  {
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0 )
    {
      v56 = 10LL;
      v57 = 12525LL;
      goto LABEL_117;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x10) == 0
      && (*(_DWORD *)(v3 + 184) & 0x40) == 0
      && (*(_DWORD *)(v3 + 184) & 0x100) == 0 )
    {
      v56 = 0LL;
      v57 = 12558LL;
LABEL_117:
      VidSchiUpdateContextStatus(v3, v56, v57);
    }
  }
  else
  {
    v15 = *(_DWORD *)(v14 + 48);
    v14 -= 32LL;
    if ( (v15 & 3) == 1 )
    {
      v89 = v14;
      *(_DWORD *)(v14 + 80) = v15 | 2;
    }
    if ( (*(_DWORD *)(v3 + 184) & 0x200) != 0
      && (((unsigned __int8)(*(_DWORD *)(v3 + 184) >> 9) | *(_BYTE *)(v3 + 184)) & 2) == 0 )
    {
      v56 = 10LL;
      v57 = 12506LL;
      goto LABEL_117;
    }
  }
  if ( *((_DWORD *)a1 + 12) != 5 || (*((_DWORD *)a1 + 20) & 4) != 0 )
    goto LABEL_27;
  v16 = *((_QWORD *)a1 + 99);
  v17 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL);
  if ( v16 )
  {
    *(_QWORD *)(v16 + 800) = *((_QWORD *)a1 + 100);
    v18 = *((_QWORD *)a1 + 100);
    if ( !v18 )
      goto LABEL_167;
  }
  else
  {
    v18 = *((_QWORD *)a1 + 100);
    if ( !v18 )
    {
      v19 = *((_DWORD *)a1 + 68);
      if ( (v19 & 2) != 0 )
      {
        v78 = (struct _KEVENT *)*((_QWORD *)a1 + 67);
        if ( (v19 & 8) != 0 )
        {
          DxgCoreInterface[63]((__int64)v78, v14);
        }
        else
        {
          KeSetEvent(v78, 0, 0);
          ObfDereferenceObject(*((PVOID *)a1 + 67));
        }
        *((_QWORD *)a1 + 67) = 0LL;
      }
      else if ( *((_DWORD *)a1 + 69) )
      {
        do
        {
          VidSchiCompleteSignalSyncObject(
            (unsigned int)v87,
            *((_QWORD *)a1 + v4 + 35),
            v9,
            (_DWORD)a1 + 536 + 8 * v4,
            1);
          ++v4;
        }
        while ( v4 < *((_DWORD *)a1 + 69) );
        v4 = 0;
      }
      goto LABEL_23;
    }
  }
  *(_QWORD *)(v18 + 792) = *((_QWORD *)a1 + 99);
LABEL_167:
  *((_QWORD *)a1 + 99) = 0LL;
  *((_QWORD *)a1 + 100) = 0LL;
LABEL_23:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 && *((_DWORD *)a1 + 69) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((PVOID *)a1 + v4++ + 35));
    while ( v4 < *((_DWORD *)a1 + 69) );
  }
  VidSchiCheckPendingDeviceCommand(v17);
  v6 = 0;
LABEL_27:
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 900));
  if ( !*((_DWORD *)a1 + 12) )
  {
    if ( (*((_DWORD *)a1 + 16) & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 2840));
      RtlSetBitEx(v8 + 472, *(unsigned __int16 *)(v7 + 4));
    }
    for ( i = 0; i < *((_DWORD *)a1 + 118); ++i )
    {
      if ( i >= 0x10 )
        break;
      v32 = *((_QWORD *)a1 + i + 60);
      *((_QWORD *)a1 + i + 60) = 0LL;
      if ( v32 )
        _InterlockedDecrement((volatile signed __int32 *)(v32 + 104));
    }
  }
  v20 = *((unsigned int *)a1 + 18);
  v21 = *((_DWORD *)a1 + 18) & 0x4000;
  if ( (*((_DWORD *)a1 + 18) & 0x40020) == 0x40000 || v21 )
  {
    v22 = (v20 & 0x400) == 0 || (v20 & 0x800) != 0;
    v23 = *((unsigned int *)a1 + 40);
    if ( (v20 & 0x40000) != 0 )
    {
      v24 = v22;
      if ( !v21 )
        v24 = 0;
    }
    else
    {
      if ( (v20 & 4) != 0 )
      {
        if ( *((_DWORD *)a1 + 100) != 1 )
        {
          if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
            goto LABEL_45;
          if ( !v22 )
          {
            v24 = 0;
            goto LABEL_193;
          }
          v24 = 1;
          v106 = 1;
          v105 = 1;
          v107 = 1;
LABEL_37:
          LOBYTE(v20) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(*((_QWORD *)a1 + 11), v20, 0LL);
          if ( !v107 )
          {
LABEL_38:
            if ( v24 && (_DWORD)v23 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v86 + 4 * v23 + 1140));
              v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v86 + 40) + 24LL)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(v86 + 32) + 4LL))
                              + 8 * v23
                              + 88);
              if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v23 + 5792) + 8LL));
                ++**(_DWORD **)(v8 + 8 * v23 + 5792);
              }
              _InterlockedDecrement((volatile signed __int32 *)(v25 + 8));
              ++*(_DWORD *)v25;
              if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1656), &v95);
                *(_DWORD *)(v86 + 4 * v23 + 508) = *((_DWORD *)a1 + 98);
                *(_QWORD *)(v86 + 8 * v23 + 576) = *((unsigned int *)a1 + 33);
                *(_QWORD *)(v86 + 8 * v23 + 704) = *((_QWORD *)a1 + 17);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v95);
              }
            }
LABEL_45:
            if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v22 )
            {
              v94 = 0LL;
              VidSchiSubmitPresentHistoryToken((unsigned int)v87, (_DWORD)a1, 0, 0, 0LL);
            }
            if ( v106 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v8 + 720));
              _InterlockedDecrement((volatile signed __int32 *)(v86 + 1268));
              _InterlockedDecrement((volatile signed __int32 *)(v86 + 4 * v23 + 1204));
            }
            v26 = (struct _KEVENT *)(v8 + 1608);
            v27 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1664), &v96);
            v28 = *(struct _KEVENT **)(v8 + 1608);
            if ( *(struct _KEVENT **)&v26->Header.Lock == v26 )
            {
LABEL_53:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v96);
              KeLowerIrql(v27);
              v6 = v105;
              if ( v105 )
                goto LABEL_71;
              goto LABEL_69;
            }
            while ( 1 )
            {
              if ( LODWORD(v28->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v28[1].Header.Lock + 4LL * LODWORD(v28[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v28[1].Header.Lock + 244LL) )
                  goto LABEL_203;
              }
              else if ( ((__int64)v28[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                Flink = (int)v28[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v28[5].Header.WaitListHead.Blink) = Flink;
                if ( Flink )
                  goto LABEL_203;
              }
              ++v28[5].Header.LockNV;
              KeSetEvent(v28 + 4, 0, 0);
LABEL_203:
              v28 = *(struct _KEVENT **)&v28->Header.Lock;
              if ( v28 == v26 )
                goto LABEL_53;
            }
          }
LABEL_193:
          if ( (*((_DWORD *)a1 + 208) & 0x3FF) != 0 )
          {
            v79 = *(unsigned int *)(v3 + 88);
            v80 = *(_QWORD *)(v8 + 616);
            if ( (unsigned int)v79 < *(_DWORD *)(v8 + 688) )
              v80 += 8 * v79;
            VidSchiUnreferencePrimaryAllocations(
              (struct HwQueueStagingList *)v87,
              (struct _VIDSCH_GLOBAL *)v8,
              v23,
              (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 832),
              *((_DWORD *)a1 + 104),
              1 << *(_BYTE *)(*(_QWORD *)v80 + 6LL),
              0,
              1);
          }
          goto LABEL_38;
        }
        v106 = v22;
      }
      v24 = v22;
    }
    v105 = v24;
    if ( !v24 )
      goto LABEL_45;
    goto LABEL_37;
  }
LABEL_69:
  if ( !*((_DWORD *)a1 + 12) )
    VidSchiUpdateLastCompletedPresentTimestamp(v3, 0LL, 0LL);
LABEL_71:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v61 = *((_QWORD *)a1 + 11);
    if ( v61 )
      v62 = *(_QWORD *)(v61 + 104);
    else
      v62 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 40LL) + 8LL);
    v63 = *(_QWORD *)(v62 + 32);
    v64 = *((_DWORD *)a1 + 18);
    if ( (v64 & 0x800000) != 0 )
      v10 = ((unsigned __int16)*((_DWORD *)a1 + 208) | (unsigned __int16)(*((_DWORD *)a1 + 208) >> 10)) & 0x3FF;
    else
      v10 = (1 << *(_DWORD *)(v63 + 140)) - 1;
    v65 = !_BitScanForward((unsigned int *)&v66, v10);
    v90 = v66;
    if ( v65 )
      LOBYTE(v66) = -1;
    if ( v10 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v63 + 8LL * *((unsigned int *)a1 + 40) + 2576)
                                    + 216LL * (char)v66
                                    + 168),
          0xFFFFFFFF);
        v10 &= ~(1 << v66);
        v65 = !_BitScanForward((unsigned int *)&v66, v10);
        v91 = v67;
        if ( v65 )
          LOBYTE(v66) = -1;
      }
      while ( v10 );
      v64 = *((_DWORD *)a1 + 18);
    }
    if ( (v64 & 0x800000) != 0 )
      v68 = ((unsigned __int16)*((_DWORD *)a1 + 208) | (unsigned __int16)(*((_DWORD *)a1 + 208) >> 10)) & 0x3FF;
    else
      v68 = (1 << *(_DWORD *)(v8 + 140)) - 1;
    v65 = !_BitScanForward((unsigned int *)&v69, v68);
    v92 = v69;
    if ( v65 )
      LOBYTE(v69) = -1;
    if ( v68 )
    {
      do
      {
        v70 = *((unsigned int *)a1 + 40);
        v71 = v69;
        v72 = *(int *)(*(_QWORD *)(v8 + 8 * v70 + 2576) + 216LL * (unsigned int)(char)v69 + 164);
        if ( (int)v72 > -1 && *(_DWORD *)(136 * v72 + *(_QWORD *)(v8 + 2704) + 112) == 1 )
          VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v87, (struct _VIDSCH_GLOBAL *)v8, v70, (char)v69);
        v68 &= ~(1 << v71);
        v65 = !_BitScanForward((unsigned int *)&v69, v68);
        v93 = v69;
        if ( v65 )
          LOBYTE(v69) = -1;
      }
      while ( v68 );
      v6 = v105;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(v8 + 708));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 2852));
  v33 = v86;
  _InterlockedDecrement((volatile signed __int32 *)(v86 + 1276));
  v34 = *((_DWORD *)a1 + 12);
  if ( (unsigned int)(v34 - 4) > 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v86 + 1280));
    v34 = *((_DWORD *)a1 + 12);
  }
  if ( !v34 && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v8 + 8LL * *((unsigned int *)a1 + 40) + 2576) + 2332LL),
      0xFFFFFFFF);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 776));
  VidSchiProfilePerformanceTick(9, v8, v7, v10, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand(v86);
  if ( v6 )
  {
    v58 = (struct _KEVENT *)(v86 + 120);
    v59 = KfRaiseIrql(2u);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1664), &v97);
    v60 = *(struct _KEVENT **)(v86 + 120);
    if ( *(struct _KEVENT **)&v58->Header.Lock == v58 )
    {
LABEL_125:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
      KeLowerIrql(v59);
      v33 = v86;
      goto LABEL_76;
    }
    while ( LODWORD(v60->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 4LL * LODWORD(v60[1].Header.WaitListHead.Blink) + 1140) < *(_DWORD *)(*(_QWORD *)&v60[1].Header.Lock + 244LL) )
        goto LABEL_123;
LABEL_124:
      v60 = *(struct _KEVENT **)&v60->Header.Lock;
      if ( v60 == v58 )
        goto LABEL_125;
    }
    if ( ((__int64)v60[1].Header.WaitListHead.Flink & 0x10) != 0 )
    {
      v82 = (int)v60[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v60[5].Header.WaitListHead.Blink) = v82;
      if ( v82 )
        goto LABEL_124;
    }
LABEL_123:
    ++v60[5].Header.LockNV;
    KeSetEvent(v60 + 4, 0, 0);
    goto LABEL_124;
  }
LABEL_76:
  if ( v106 )
  {
    VidSchiSignalRegisteredEvent(v8, v33 + 136);
    VidSchiSignalRegisteredEvent(v8, v8 + 1592);
    *(_QWORD *)(v8 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v8 + 1504), 0, 0);
  }
  v35 = (struct _KEVENT *)(v7 + 424);
  v36 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1664), &v98);
  v37 = *(struct _KEVENT **)(v7 + 424);
  if ( *(struct _KEVENT **)&v35->Header.Lock != v35 )
  {
    do
    {
      if ( LODWORD(v37->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v37[1].Header.Lock + 4LL * LODWORD(v37[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v37[1].Header.Lock + 244LL) )
          goto LABEL_217;
      }
      else if ( ((__int64)v37[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v83 = (int)v37[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v37[5].Header.WaitListHead.Blink) = v83;
        if ( v83 )
          goto LABEL_217;
      }
      ++v37[5].Header.LockNV;
      KeSetEvent(v37 + 4, 0, 0);
LABEL_217:
      v37 = *(struct _KEVENT **)&v37->Header.Lock;
    }
    while ( v37 != v35 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v98);
  KeLowerIrql(v36);
  v38 = (struct _KEVENT *)(v8 + 1576);
  v39 = (struct _KEVENT *)v8;
  v40 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1664), &v99);
  v41 = *(struct _KEVENT **)(v8 + 1576);
  if ( *(struct _KEVENT **)&v38->Header.Lock != v38 )
  {
    do
    {
      if ( LODWORD(v41->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 4LL * LODWORD(v41[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v41[1].Header.Lock + 244LL) )
          goto LABEL_157;
      }
      else if ( ((__int64)v41[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v73 = (int)v41[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v41[5].Header.WaitListHead.Blink) = v73;
        if ( v73 )
          goto LABEL_157;
      }
      ++v41[5].Header.LockNV;
      KeSetEvent(v41 + 4, 0, 0);
LABEL_157:
      v41 = *(struct _KEVENT **)&v41->Header.Lock;
    }
    while ( v41 != v38 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v99);
  KeLowerIrql(v40);
  *(_QWORD *)(v7 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 296), 0, 0);
  v39[59].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeSetEvent(v39 + 58, 0, 0);
  if ( (*((_DWORD *)a1 + 16) & 1) == 0 )
  {
    v42 = *((_DWORD *)a1 + 12);
    if ( !v42 || v42 == 7 )
    {
      v55 = (struct _KEVENT *)*((_QWORD *)a1 + 46);
      if ( v55 )
      {
        KeSetEvent(v55, 0, 0);
        ObfDereferenceObject(*((PVOID *)a1 + 46));
      }
    }
    else if ( v42 == 6 )
    {
      v75 = (struct _KEVENT *)*((_QWORD *)a1 + 38);
      if ( v75 )
        KeSetEvent(v75, 0, 0);
    }
  }
  v43 = *((_DWORD *)a1 + 12);
  if ( !v43 || v43 == 7 || v43 == 3 )
  {
    v54 = (CRefCountedBuffer *)*((_QWORD *)a1 + 39);
    if ( v54 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v54);
      v43 = *((_DWORD *)a1 + 12);
      *((_QWORD *)a1 + 39) = 0LL;
    }
  }
  v44 = *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 96) + 24LL);
  if ( !v43 && (*((_QWORD *)a1 + 77) || *((_QWORD *)a1 + 33)) )
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v84[3] = 281LL;
    v84[4] = 2560LL;
    v84[5] = a1;
    v84[6] = *((_QWORD *)a1 + 77);
    v84[7] = *((_QWORD *)a1 + 33);
    WdLogEvent5_WdCriticalError(v84);
    __debugbreak();
LABEL_222:
    VidSchiInterlockedInsertTailList(v48, v3 + 728, v38, (_DWORD *)(v3 + 744));
    goto LABEL_97;
  }
  v45 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v45 + 24) = a1;
  *(_QWORD *)(v45 + 32) = v3;
  WdLogEvent5_WdEvent(v45);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v44 += 207;
  *((_DWORD *)a1 + 13) = 0;
  v38 = (struct _KEVENT *)((char *)a1 + 8);
  KeAcquireInStackQueuedSpinLock(v44, &v100);
  v46 = (struct _KEVENT *)*((_QWORD *)a1 + 1);
  if ( *(struct _KEVENT **)(*(_QWORD *)&v38->Header.Lock + 8LL) != v38 )
    goto LABEL_223;
  v47 = (struct _KEVENT **)*((_QWORD *)a1 + 2);
  if ( *v47 != v38 )
    goto LABEL_223;
  *v47 = v46;
  v46->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v47;
  if ( v3 != -768 )
    --*(_DWORD *)(v3 + 768);
  KeReleaseInStackQueuedSpinLock(&v100);
  v48 = v44;
  if ( (*((_DWORD *)a1 + 16) & 0x40) != 0 )
    goto LABEL_222;
  KeAcquireInStackQueuedSpinLock(v44, &v101);
  v49 = *(struct _KEVENT ***)(v3 + 712);
  if ( *v49 != (struct _KEVENT *)(v3 + 704) )
LABEL_223:
    __fastfail(3u);
  *(_QWORD *)&v38->Header.Lock = v3 + 704;
  *((_QWORD *)a1 + 2) = v49;
  *v49 = v38;
  *(_QWORD *)(v3 + 712) = v38;
  if ( v3 != -720 )
    ++*(_DWORD *)(v3 + 720);
  KeReleaseInStackQueuedSpinLock(&v101);
LABEL_97:
  if ( (*((_DWORD *)a1 + 16) & 0x40) == 0 )
  {
    v50 = (_QWORD **)(v3 + 704);
    while ( 1 )
    {
      v51 = 0LL;
      KeAcquireInStackQueuedSpinLock(v44, &v102);
      v52 = *v50;
      if ( *v50 != v50 && *(_DWORD *)(v3 + 720) > 0x10u )
      {
        v51 = *v50;
        if ( (_QWORD **)v52[1] != v50 )
          goto LABEL_223;
        v74 = (_QWORD *)*v52;
        if ( (_QWORD *)v74[1] != v51 )
          goto LABEL_223;
        *v50 = v74;
        v74[1] = v50;
        --*(_DWORD *)(v3 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v102);
      if ( !v51 )
        break;
      ExFreePoolWithTag(v51 - 1, 0);
    }
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v87);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql(v104);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v87);
  return (struct _VIDSCH_QUEUE_PACKET *)v89;
}
