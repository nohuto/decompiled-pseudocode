/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C0012BF0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002E600 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0013578 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C00135F4 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0013684 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0013920 (VidSchiCompleteRewindPacket.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  unsigned __int64 QuadPart; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 *v20; // rax
  int v21; // r15d
  struct _VIDSCH_CONTEXT *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  struct _KEVENT *v25; // rcx
  LONG result; // eax
  __int64 v27; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER v29; // [rsp+B8h] [rbp+10h]
  LARGE_INTEGER *v30; // [rsp+C0h] [rbp+18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
  v5 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v30 = v5;
  memset(v5, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v5->LowPart = 5;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5[1] = v6;
  QuadPart = v6.QuadPart;
  v9 = *(unsigned int *)(v3 + 1552);
  v10 = 0LL;
  v29 = v6;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v2) )
  {
    v27 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((LARGE_INTEGER)v7.QuadPart, 0LL);
    *(_QWORD *)(v27 + 24) = v4;
    *(_QWORD *)(v27 + 32) = v2;
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)(v3 + 224) = v2;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 88);
    *(_QWORD *)(v12 + 168) = *(_QWORD *)(v11 + 112);
    v5[3] = *(LARGE_INTEGER *)(v11 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 128), 1u);
    v13 = *(_QWORD *)(v11 + 88);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 96) + 24LL);
    if ( (*(_DWORD *)(v13 + 184) & 4) == 0 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v10);
      v15[3] = v14;
      v15[4] = v13;
      v15[5] = *(unsigned int *)(v11 + 112);
      WdLogEvent5_WdEvent(v15);
      v16 = *(_DWORD *)(v13 + 184) | 4;
      *(_QWORD *)(v13 + 648) = v11;
      *(_DWORD *)(v13 + 184) = v16;
    }
    v5 = v30;
    QuadPart = v29.QuadPart;
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v4 + 732), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 712), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2856), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v2 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v17 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 + 404);
    v19 = gulPriorityToYieldPriorityBand[v18];
    if ( gulPriorityToYieldPriorityBand[v18] )
    {
      v20 = (unsigned __int64 *)(v3 + 1920 + 8 * v19);
      do
      {
        if ( *(v20 - 4) )
          *v20 = QuadPart;
        --v20;
        --v19;
      }
      while ( v19 );
    }
  }
  if ( *(int *)(v3 + 2840) > 0 )
    RtlSetBitEx(v4 + 472, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 780), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v2 + 184) &= ~8u;
    if ( (*(_DWORD *)(v2 + 184) & 0x20) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x20u;
    if ( (*(_DWORD *)(v2 + 184) & 0x10) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x10u;
    if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x40u;
    *(_DWORD *)(v2 + 184) &= ~2u;
    v21 = VidSchiCompleteRewindPacket(v2, 1LL);
    if ( (*(_DWORD *)(v2 + 184) & 2) == 0 )
    {
      v22 = *(struct _VIDSCH_CONTEXT **)(v2 + 488);
      if ( v22 )
      {
        VidSchiDecrementContextReference(v22, 1);
        *(_QWORD *)(v2 + 488) = 0LL;
      }
      *(_QWORD *)(v2 + 488) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v2 + 404) + 1760);
    v23 = *(unsigned int *)(v2 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v23 + 1760) )
      *(_DWORD *)(v3 + 1756) &= ~(1 << v23);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  else
  {
    v21 = 0;
  }
  v5[2] = *(LARGE_INTEGER *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, v24, 0LL, 0LL, a1, 0LL);
  v25 = *(struct _KEVENT **)(a1 + 200);
  if ( v25 )
    KeSetEvent(v25, 0, 0);
  VidSchiSignalRegisteredEvent(v4, v2 + 376);
  VidSchiSignalRegisteredEvent(v4, v3 + 408);
  VidSchiSignalRegisteredEvent(v4, v4 + 1560);
  *(_QWORD *)(v2 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1368) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1336), 0, 0);
  if ( v21 )
  {
    *(_QWORD *)(v4 + 1144) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1112), 0, 0);
  }
  return result;
}
