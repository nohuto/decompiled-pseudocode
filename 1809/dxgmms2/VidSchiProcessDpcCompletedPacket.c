/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0005960
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002E600 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0001098 (VidSchiMarkDeviceAsError.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C00128BC (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012A9C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0013920 (VidSchiCompleteRewindPacket.c)
 *     VidSchiStartNodeYield @ 0x1C0013E94 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0013F60 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C0026158 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppxx @ 0x1C0026D6C (McTemplateK0ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C00298FC (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A0B0 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002A794 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002AE80 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq @ 0x1C002CC94 (McTemplateK0pqxq.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  int v2; // eax
  struct _VIDSCH_DMA_PACKET *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // r15
  int v7; // ebx
  LARGE_INTEGER *v8; // rbx
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rdx
  __int64 v12; // rbx
  union _LARGE_INTEGER v13; // r13
  __int64 v14; // r12
  unsigned __int64 *v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  struct _VIDSCH_CONTEXT *v18; // rcx
  __int64 v19; // rax
  LONGLONG *v20; // rdx
  __int64 v21; // rbx
  _QWORD *v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rbx
  int v32; // ebx
  int v33; // r9d
  struct _KEVENT **v34; // r12
  KSPIN_LOCK *v35; // rbx
  KIRQL v36; // r13
  struct _KEVENT *v37; // r12
  struct _KEVENT *v38; // r13
  struct _KEVENT *v39; // r12
  struct _KEVENT *v40; // r13
  struct _KEVENT *v41; // rcx
  struct _KEVENT *v42; // rsi
  KIRQL v43; // r14
  struct _KEVENT *v44; // rbx
  struct _VIDSCH_QUEUE_PACKET *v45; // rax
  unsigned int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rcx
  LARGE_INTEGER *v49; // rax
  __int64 v50; // rax
  bool v51; // bl
  __int64 v52; // r12
  int v53; // eax
  bool v54; // zf
  int v55; // eax
  __int64 v56; // r12
  unsigned int i; // ebx
  __int64 v58; // r12
  struct _KEVENT *v59; // rbx
  __int64 v60; // r13
  __int64 v61; // r12
  LARGE_INTEGER v62; // rcx
  unsigned __int128 v63; // rax
  unsigned __int64 v64; // rbx
  int v65; // r8d
  unsigned __int64 *v66; // rcx
  __int64 v67; // rdx
  int v68; // eax
  int v69; // ecx
  char v70; // al
  unsigned int refreshed; // eax
  __int64 v72; // rax
  unsigned __int128 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned __int128 v76; // rtt
  int v77; // eax
  int v78; // ecx
  int v79; // r8d
  __int64 v80; // r9
  _QWORD *v81; // rax
  __int64 v82; // rax
  struct VIDMM_ALLOC *v83; // rcx
  __int64 v84; // rbx
  _QWORD *v85; // rax
  __int64 v86; // rax
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v88; // rdx
  PVOID v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  LARGE_INTEGER *v93; // rax
  int v94; // eax
  int Flink; // ecx
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v100; // [rsp+48h] [rbp-B8h]
  __int64 v101; // [rsp+50h] [rbp-B0h]
  _QWORD v102[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v103; // [rsp+68h] [rbp-98h]
  union _LARGE_INTEGER v104; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER *v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+88h] [rbp-78h]
  __int64 v108; // [rsp+90h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v110; // [rsp+B0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v111; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+F8h] [rbp-8h] BYREF
  KIRQL v115; // [rsp+160h] [rbp+60h]
  KIRQL v116; // [rsp+160h] [rbp+60h]
  __int64 v117; // [rsp+160h] [rbp+60h]
  char v118; // [rsp+168h] [rbp+68h]
  char v119; // [rsp+170h] [rbp+70h] BYREF
  int v120; // [rsp+178h] [rbp+78h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = *((_DWORD *)a1 + 18);
  v3 = a1;
  v118 = 0;
  LOBYTE(v120) = 0;
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v1 + 104);
  v101 = v5;
  v6 = *(_QWORD *)(v4 + 24);
  if ( v2 == 18 )
  {
    v99 = 9;
    v7 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v99 = 0;
    v7 = 13;
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = v7;
  if ( *((_QWORD *)v3 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v3 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v3 + 7) + 52LL) = v7;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1648), &LockHandle);
  v103 = 0;
  v102[1] = v102;
  v102[0] = v102;
  v106 = (LARGE_INTEGER *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  v8 = v106;
  memset(v106, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  v8->LowPart = 4;
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8[1] = v9;
  v11 = v9;
  v12 = *(unsigned int *)(v4 + 1552);
  v100 = v9;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v12 + 1560), 0LL, v1) )
  {
    v72 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v10.QuadPart,
            (LARGE_INTEGER)v9.QuadPart);
    *(_QWORD *)(v72 + 24) = v6;
    *(_QWORD *)(v72 + 32) = v5;
    WdLogEvent5_WdAssertion(v72);
    v11 = v100;
  }
  *(_QWORD *)(v4 + 224) = v1;
  *(_DWORD *)(v4 + 1552) = ((_BYTE)v12 + 1) & 0xF;
  if ( (*((_DWORD *)v3 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 732));
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 712));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2856));
  v13 = PerformanceFrequency;
  v14 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned __int64 *)(v4 + 1952 + 8 * v14);
    do
    {
      if ( *(v15 - 8) )
      {
        v16 = v11.QuadPart + *v15 - *(v15 - 4);
        *(v15 - 4) = 0LL;
        *v15 = v16;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v73 = v16 * (unsigned __int128)0x989680uLL;
          v107 = *((_QWORD *)&v73 + 1);
          if ( is_mul_ok(v16, 0x989680uLL) )
          {
            v76 = v73;
            v74 = v73 % (unsigned __int64)v13.QuadPart;
            v75 = v76 / (unsigned __int64)v13.QuadPart;
          }
          else
          {
            v10.QuadPart = v16 / v13.QuadPart;
            v74 = 10000000 * (v16 % v13.QuadPart) % v13.QuadPart;
            v75 = 10000000 * (v16 % v13.QuadPart) / v13.QuadPart + 10000000 * (v16 / v13.QuadPart);
          }
          McTemplateK0pqxq(
            v10.LowPart,
            v74,
            v75,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL),
            v14,
            v75,
            *(_WORD *)(v4 + 4));
          v11 = v100;
        }
      }
      --v15;
      LODWORD(v14) = v14 - 1;
    }
    while ( (_DWORD)v14 );
    v3 = a1;
  }
  v17 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
  if ( v17 )
  {
    v47 = *(unsigned int *)(v17 + 404);
    v48 = gulPriorityToYieldPriorityBand[v47];
    if ( gulPriorityToYieldPriorityBand[v47] )
    {
      v49 = (LARGE_INTEGER *)(v4 + 1920 + 8 * v48);
      do
      {
        if ( v49[-4].QuadPart )
          *v49 = v11;
        --v49;
        --v48;
      }
      while ( v48 );
    }
  }
  if ( *(int *)(v4 + 2840) > 0 )
    RtlSetBitEx(v6 + 472, *(unsigned __int16 *)(v4 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 780), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v68 = VidSchiCompleteRewindPacket(v1, 1LL);
      v69 = (unsigned __int8)v120;
      if ( v68 )
        v69 = 1;
      v120 = v69;
    }
    if ( v101 == *(_QWORD *)(v6 + 224) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 10924LL);
    }
    else if ( (*(_DWORD *)(v1 + 184) & 2) == 0 )
    {
      v18 = *(struct _VIDSCH_CONTEXT **)(v1 + 488);
      if ( v18 )
      {
        VidSchiDecrementContextReference(v18);
        *(_QWORD *)(v1 + 488) = 0LL;
      }
      *(_QWORD *)(v1 + 488) = 0LL;
    }
    --*(_DWORD *)(v4 + 4LL * *(unsigned int *)(v1 + 404) + 1760);
    v19 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v4 + 4 * v19 + 1760) )
      *(_DWORD *)(v4 + 1756) &= ~(1 << v19);
    if ( *(_QWORD *)(v1 + 496) )
    {
      v117 = *(_QWORD *)(v1 + 104);
      v60 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v61 = *(_QWORD *)(v117 + 40);
      v62 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v104) - *(_QWORD *)(v1 + 496));
      v63 = (unsigned __int64)v62.QuadPart * (unsigned __int128)0x989680uLL;
      v108 = *((_QWORD *)&v63 + 1);
      if ( is_mul_ok(v62.QuadPart, 0x989680uLL) )
        v64 = v63 / (unsigned __int64)v104.QuadPart;
      else
        v64 = 10000000 * (v62.QuadPart / (unsigned __int64)v104.QuadPart)
            + 10000000 * (v62.QuadPart % (unsigned __int64)v104.QuadPart) / v104.QuadPart;
      v65 = 8;
      v66 = (unsigned __int64 *)(v60 + 2248);
      v67 = 8LL;
      while ( v64 <= *v66 )
      {
        --v65;
        --v66;
        if ( --v67 < 0 )
          goto LABEL_114;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v61 + 8LL * v65 + 2672));
LABEL_114:
      if ( v64 >= *(_QWORD *)(v60 + 2176) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v61 + 2664));
        if ( v64 >= *(_QWORD *)(v60 + 2160) && !*(_BYTE *)(*(_QWORD *)(v117 + 40) + 2624LL) )
        {
          v77 = *(_DWORD *)(v117 + 48);
          if ( (v77 & 8) == 0
            && (v77 & 1) == 0
            && !*(_DWORD *)(v60 + 2404)
            && !*(_BYTE *)(v117 + 204)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v117 + 200), 0, 0)
            && (*(_DWORD *)(v60 + 1936) & 0x200) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 504), (LARGE_INTEGER)-*(_QWORD *)(v60 + 2168), (PKDPC)(v1 + 568));
            VidSchiUpdateContextStatus(v1, 7LL, 25848LL);
            if ( bTracingEnabled )
            {
              v80 = *(_QWORD *)(v1 + 56);
              if ( !v80 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v80) = v1;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0ppxx(
                  v78,
                  (unsigned int)&EventDelayContextScheduling,
                  v79,
                  v80,
                  *(_QWORD *)(v61 + 2632),
                  v64,
                  *(_QWORD *)(v60 + 2168));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 496) = 0LL;
    }
  }
  if ( *(_BYTE *)(v4 + 2008) )
  {
    if ( *(_QWORD *)(v4 + 1984) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v4,
        (LARGE_INTEGER)v100.QuadPart,
        &v119);
      v70 = v120;
      if ( v119 )
        v70 = 1;
      LOBYTE(v120) = v70;
    }
    else if ( ((-1 << (*(_BYTE *)(v6 + 184) + 1)) & *(_DWORD *)(v4 + 1756)) == 0 )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v4);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v4,
        (LARGE_INTEGER)v100.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
      LOBYTE(v120) = 1;
    }
  }
  v20 = (LONGLONG *)v106;
  v106[2] = *(LARGE_INTEGER *)((char *)v3 + 104);
  _m_prefetchw((const void *)(v4 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v4 + 96),
            *((_QWORD *)v3 + 13),
            *(_QWORD *)(v4 + 96)) != *((_QWORD *)v3 + 13) )
    ;
  v21 = *((_QWORD *)v3 + 7);
  if ( v21 )
  {
    v20[3] = *(_QWORD *)(v21 + 112);
    v22 = *(_QWORD **)(v21 + 88);
    v23 = v22[13];
    v24 = *(_QWORD *)(v22[12] + 24LL);
    v25 = v22[20];
    if ( v25 && *(_QWORD *)(v21 + 112) <= v25 )
    {
      if ( !*(_BYTE *)(v23 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v23 + 200), 0, 0)
        && (*(_BYTE *)(v24 + 2428) & 1) == 0 )
      {
        v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v81[3] = 281LL;
        v81[4] = 1792LL;
        v81[5] = *(_QWORD *)(v21 + 112);
        v81[6] = v22[20];
        v81[7] = 0LL;
        WdLogEvent5_WdCriticalError(v81);
        __debugbreak();
      }
      v82 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v82 + 24) = *(_QWORD *)(v21 + 112);
      WdLogEvent5_WdEvent(v82);
    }
    else
    {
      if ( *(_BYTE *)(v23 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 200), 0, 0)
        || (*(_BYTE *)(v24 + 2428) & 1) != 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v26[3] = v21;
        v26[4] = *(_QWORD *)(v21 + 112);
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v26[3] = v21;
        v26[4] = *(_QWORD *)(v21 + 112);
        v26[5] = v22[20];
      }
      WdLogEvent5_WdEvent(v26);
      *(_QWORD *)(*(_QWORD *)(v21 + 88) + 160LL) = *(_QWORD *)(v21 + 112);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 88) + 104LL) + 1272LL) )
        VidSchUnwaitFlipQueue(v102, v24);
    }
    *((_DWORD *)v3 + 23) |= 0x80u;
    v118 = 1;
  }
  v27 = *((_QWORD *)v3 + 8);
  if ( (*((_DWORD *)v3 + 23) & 2) != 0 )
  {
    v56 = *(_QWORD *)(v27 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v27;
    for ( i = 0; i < *(_DWORD *)(v27 + 144); ++i )
    {
      v83 = *(struct VIDMM_ALLOC **)(v56 + 8LL * i);
      if ( v83 )
        VIDMM_GLOBAL::RemoveDMAReferences(v83, 1);
    }
    v58 = *(_QWORD *)(v27 + 64);
    if ( v58 )
    {
      if ( *(int *)(v58 + 156) < 1 )
      {
        v84 = *(int *)(v58 + 156);
        v85 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v85[7] = 0LL;
        v85[3] = 270LL;
        v85[4] = 41LL;
        v85[5] = v58;
        v85[6] = v84;
        WdLogEvent5_WdCriticalError(v85);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v27 + 20);
  }
  if ( (*((_DWORD *)v3 + 23) & 1) != 0 )
  {
    v50 = *((_QWORD *)v3 + 7);
    v51 = v50 && *(_DWORD *)(v50 + 48) == 8;
    v52 = *(_QWORD *)(v27 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v86 = WdLogNewEntry5_WdTrace();
      *(_QWORD *)(v86 + 24) = v27;
      *(_QWORD *)(v86 + 32) = *(_QWORD *)(v52 + 16);
    }
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v27 + 24) = 0;
    }
    else
    {
      v53 = *(_DWORD *)(v27 + 32);
      v54 = v53 == 0;
      if ( v53 > 0 )
      {
        v55 = v53 - 1;
        *(_DWORD *)(v27 + 32) = v55;
        v54 = v55 == 0;
      }
      if ( v54 )
        *(_BYTE *)(v27 + 24) = 0;
    }
  }
  v28 = *((_QWORD *)v3 + 7);
  if ( v28 && *(_QWORD *)(v28 + 264) )
  {
    for ( j = 0; j < *(_DWORD *)(v28 + 624); ++j )
    {
      v88 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v28 + 264) + 16LL * j);
      if ( *(_QWORD *)v88 )
        VidSchiProcessHistoryBuffer(v3, v88);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v28);
  }
  v29 = v101;
  VidSchiUnwaitMonitoredFences(v102, *(_QWORD *)(v101 + 32));
  VidSchiCheckPendingDeviceCommand(v101);
  v30 = (unsigned __int8)v120;
  if ( _bittest64(*(const signed __int64 **)(v6 + 432), *(unsigned __int16 *)(v4 + 4)) )
    v30 = 1;
  v120 = v30;
  if ( bTracingEnabled )
  {
    v31 = *((_QWORD *)v3 + 6);
    if ( *(_DWORD *)(v31 + 968) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)v3 + 6));
    if ( *(_QWORD *)(v31 + 976)
      || (v89 = operator new[](0x400uLL, 0x61616956u, (POOL_TYPE)512), (*(_QWORD *)(v31 + 976) = v89) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v31 + 976) + 8LL * (unsigned int)(*(_DWORD *)(v31 + 968))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
    }
    else
    {
      v92 = WdLogNewEntry5_WdAssertion(v91, v90);
      WdLogEvent5_WdAssertion(v92);
    }
    v29 = v101;
  }
  if ( v99 )
  {
    v93 = v106;
    LOBYTE(v106[4].LowPart) = 1;
    *(_OWORD *)&v93[5].LowPart = *(_OWORD *)(v29 + 208);
    *(_OWORD *)&v93[7].LowPart = *(_OWORD *)(v29 + 224);
    v94 = *(_DWORD *)(v29 + 224);
    if ( (v94 & 4) != 0 )
    {
      *(_DWORD *)(v4 + 2016) = 1;
    }
    else if ( (v94 & 8) != 0 )
    {
      *(_DWORD *)(v4 + 2012) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v102, v29, v99, 0LL);
    v32 = 13;
  }
  else
  {
    v32 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v102);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v32, v6, v4, v33, 0LL, 0LL, (__int64)v3, 0LL);
  v34 = (struct _KEVENT **)(v1 + 376);
  v35 = (KSPIN_LOCK *)(v6 + 1664);
  v36 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1664), &v110);
  if ( *v34 != (struct _KEVENT *)v34 )
  {
    v59 = *v34;
    while ( 1 )
    {
      if ( LODWORD(v59->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 4LL * LODWORD(v59[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v59[1].Header.Lock + 244LL) )
          goto LABEL_102;
      }
      else if ( ((__int64)v59[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v59[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v59[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_102;
      }
      ++v59[5].Header.LockNV;
      KeSetEvent(v59 + 4, 0, 0);
LABEL_102:
      v59 = *(struct _KEVENT **)&v59->Header.Lock;
      if ( v59 == (struct _KEVENT *)v34 )
      {
        v35 = (KSPIN_LOCK *)(v6 + 1664);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v110);
  KeLowerIrql(v36);
  v37 = (struct _KEVENT *)(v4 + 408);
  v115 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v111);
  v38 = *(struct _KEVENT **)(v4 + 408);
  if ( *(struct _KEVENT **)&v37->Header.Lock != v37 )
  {
    do
    {
      if ( LODWORD(v38->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 4LL * LODWORD(v38[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v38[1].Header.Lock + 244LL) )
          goto LABEL_185;
      }
      else if ( ((__int64)v38[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v96 = (int)v38[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v38[5].Header.WaitListHead.Blink) = v96;
        if ( v96 )
          goto LABEL_185;
      }
      ++v38[5].Header.LockNV;
      KeSetEvent(v38 + 4, 0, 0);
LABEL_185:
      v38 = *(struct _KEVENT **)&v38->Header.Lock;
    }
    while ( v38 != v37 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v111);
  KeLowerIrql(v115);
  v39 = (struct _KEVENT *)(v6 + 1560);
  v116 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v112);
  v40 = *(struct _KEVENT **)(v6 + 1560);
  if ( *(struct _KEVENT **)&v39->Header.Lock != v39 )
  {
    do
    {
      if ( LODWORD(v40->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v40[1].Header.Lock + 4LL * LODWORD(v40[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v40[1].Header.Lock + 244LL) )
          goto LABEL_126;
      }
      else if ( ((__int64)v40[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v97 = (int)v40[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v40[5].Header.WaitListHead.Blink) = v97;
        if ( v97 )
          goto LABEL_126;
      }
      ++v40[5].Header.LockNV;
      KeSetEvent(v40 + 4, 0, 0);
LABEL_126:
      v40 = *(struct _KEVENT **)&v40->Header.Lock;
    }
    while ( v40 != v39 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
  KeLowerIrql(v116);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v4 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 240), 0, 0);
  *(_QWORD *)(v6 + 1368) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v6 + 1336), 0, 0);
  if ( (_BYTE)v120 )
  {
    *(_QWORD *)(v6 + 1144) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 1112), 0, 0);
  }
  v41 = (struct _KEVENT *)*((_QWORD *)v3 + 25);
  if ( v41 )
    KeSetEvent(v41, 0, 0);
  v42 = (struct _KEVENT *)(v6 + 1608);
  v43 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v35, &v113);
  v44 = *(struct _KEVENT **)(v6 + 1608);
  if ( *(struct _KEVENT **)&v42->Header.Lock != v42 )
  {
    do
    {
      if ( LODWORD(v44->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 4LL * LODWORD(v44[1].Header.WaitListHead.Blink) + 1140) >= *(_DWORD *)(*(_QWORD *)&v44[1].Header.Lock + 244LL) )
          goto LABEL_131;
      }
      else if ( ((__int64)v44[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v98 = (int)v44[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v44[5].Header.WaitListHead.Blink) = v98;
        if ( v98 )
          goto LABEL_131;
      }
      ++v44[5].Header.LockNV;
      KeSetEvent(v44 + 4, 0, 0);
LABEL_131:
      v44 = *(struct _KEVENT **)&v44->Header.Lock;
    }
    while ( v44 != v42 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v113);
  KeLowerIrql(v43);
  v45 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v3 + 7);
  v46 = -1;
  if ( v45 )
    v46 = *((_DWORD *)v45 + 40);
  if ( v118 )
  {
    do
      v45 = VidSchiProcessCompletedQueuePacketInternal(v45);
    while ( v45 );
  }
  *((_QWORD *)v3 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v3 + 18) = 16;
  if ( v46 != -1 && (*((_DWORD *)v3 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v6 + 8LL * v46 + 2576),
      (struct _VIDSCH_GLOBAL *)v6);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v102);
}
