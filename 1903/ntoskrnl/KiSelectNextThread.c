/*
 * XREFs of KiSelectNextThread @ 0x1400136A0
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140041AF0 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400F8088 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetSystemAffinityThread @ 0x1400F8B40 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiSelectLowestRankedThread @ 0x140013804 (KiSelectLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiCheckThreadAffinity @ 0x1400F9574 (KiCheckThreadAffinity.c)
 *     KiAddThreadToReadyQueue @ 0x1402AEF34 (KiAddThreadToReadyQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSelectNextThread(__int64 a1, __int64 *a2)
{
  __int64 ready; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // rdx
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // r9d
  char IsThreadRankNonZero; // al
  __int64 v16; // rdx

  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0LL, a1);
    }
    if ( !ready )
      break;
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
      goto LABEL_12;
    if ( !a2 )
    {
      LOBYTE(v14) = 1;
      KiAddThreadToReadyQueue(a1, 0, ready, v14, 1);
      break;
    }
    KiInsertDeferredReadyList(a2, ready);
  }
  v5 = *(_QWORD *)(a1 + 25016);
  ready = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 192);
  v7 = *(unsigned __int8 *)(a1 + 35);
  if ( v5 )
    *(_BYTE *)(v5 + 16) = 1;
  *(_BYTE *)(a1 + 11883) = 1;
  if ( (v7 & 1) != 0 )
  {
    v8 = v7 - 1;
    *(_BYTE *)(a1 + 35) = v8;
    if ( !v8 )
      _interlockedbittestandset64((volatile signed __int32 *)v6, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandset64((volatile signed __int32 *)(v6 + 16), *(unsigned __int8 *)(a1 + 209));
    v9 = *(_QWORD *)(a1 + 24920);
    if ( (*(_QWORD *)(v6 + 16) & v9) == v9 )
      _InterlockedOr64((volatile signed __int64 *)(v6 + 8), v9);
  }
LABEL_12:
  if ( (*(_BYTE *)(ready + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v10 = 1, !IsThreadRankNonZero) )
  {
    v10 = *(_BYTE *)(ready + 195);
  }
  **(_BYTE **)(a1 + 56) = v10;
  v11 = *(_QWORD *)(a1 + 25016);
  if ( v11 )
  {
    if ( ready == *(_QWORD *)(a1 + 24) )
      v16 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v16 = (unsigned int)v10;
    KiSetSchedulerAssistPriority(v11, v16, 0LL);
    v11 = *(_QWORD *)(a1 + 25016);
  }
  v12 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = ready;
  if ( v11 )
    *(_BYTE *)(v11 + 16) = ready == v12;
  result = *(unsigned __int8 *)(ready + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320]);
    *(_DWORD *)(ready + 132) = result;
  }
  *(_BYTE *)(ready + 388) = 3;
  return result;
}
