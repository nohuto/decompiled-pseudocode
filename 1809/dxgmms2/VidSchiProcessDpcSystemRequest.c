/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C001306C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002E600 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C00135F4 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C002B3E0 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  __int64 v9; // r15
  unsigned __int64 QuadPart; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  struct _KEVENT *v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rax
  __int64 **v19; // rdx
  __int64 v20; // rdx
  __int64 **v21; // rax
  __int64 v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = *(unsigned int *)(v3 + 1552);
  QuadPart = v6.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v1) )
  {
    v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart);
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 32) = v1;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 712), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2856), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v11 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v11 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v11 + 404), QuadPart);
  if ( *(int *)(v3 + 2840) > 0 )
    RtlSetBitEx(v5 + 472, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 780), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 184) & 1) != 0 )
      *(_DWORD *)(v1 + 184) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 11596LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1760);
    v12 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v12 + 1760) )
      *(_DWORD *)(v3 + 1756) &= ~(1 << v12);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2868), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2864), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 716), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 708), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2852), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1276), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 776), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, v13, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 376);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1560);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1368) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1336), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1576);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1424) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1392), 0, 0);
  v14 = *(struct _KEVENT **)(a1 + 200);
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v15 = *(_QWORD *)(v3 + 232);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 184) & 1) != 0 )
      {
        v17 = (__int64 *)(v15 + 8);
        v18 = *(__int64 **)(v15 + 8);
        if ( v18[1] != v15 + 8
          || (v19 = *(__int64 ***)(v15 + 16), *v19 != v17)
          || (*v19 = v18,
              v18[1] = (__int64)v19,
              v20 = 16LL * *(unsigned int *)(v15 + 404) + v3 + 2024,
              v21 = *(__int64 ***)(v20 + 8),
              *v21 != (__int64 *)v20) )
        {
          __fastfail(3u);
        }
        *v17 = v20;
        *(_QWORD *)(v15 + 16) = v21;
        *v21 = v17;
        *(_QWORD *)(v20 + 8) = v17;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v15, 1);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 708) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1144LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1112LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
