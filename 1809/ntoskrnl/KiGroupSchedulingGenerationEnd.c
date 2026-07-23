/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1400D312C
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1EF0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3300 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KiAddThreadToPrcbQueue @ 0x1401175DC (KiAddThreadToPrcbQueue.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThread; // rdi
  char v4; // si
  _KTHREAD *IdleThread; // r14
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _KTHREAD *NextThread; // rbp
  int v12; // esi
  bool IsThreadRankNonZero; // al
  char v14; // cl
  __int64 v15; // rdx
  int Priority; // r8d
  signed int v17; // ecx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  _KTHREAD *v21; // rax

  CurrentThread = (__int64)a1->CurrentThread;
  v4 = a3;
  IdleThread = a1->IdleThread;
  if ( !(_BYTE)a3 )
  {
    _disable();
    KiEndThreadCycleAccumulation((__int64)a1, CurrentThread, 0LL);
    _enable();
  }
  LOBYTE(a3) = v4;
  result = KiTransitionSchedulingGroupGeneration(a1, a2, a3);
  if ( !v4 )
  {
    NextThread = a1->NextThread;
    v12 = 0;
    if ( NextThread )
    {
      if ( NextThread == a1->IdleThread )
        goto LABEL_20;
      a1->NextThread = 0LL;
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, a1), v14 = 1, !IsThreadRankNonZero) )
      {
        v14 = *(_BYTE *)(CurrentThread + 195);
      }
      *a1->PriorityState = v14;
      if ( a1->SchedulerAssist )
      {
        v15 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != a1->IdleThread )
          v15 = (unsigned int)v14;
        KiSetSchedulerAssistPriority(a1->SchedulerAssist, v15, 0LL, v10);
      }
      KiSetThreadState(NextThread, 1LL);
      Priority = NextThread->Priority;
      NextThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
      KiAddThreadToPrcbQueue((_DWORD)a1, (_DWORD)NextThread, Priority, 1, 0);
      v12 = 1;
    }
    if ( NextThread != a1->IdleThread )
    {
      if ( (_KTHREAD *)CurrentThread == IdleThread )
      {
        v17 = 0;
      }
      else
      {
        v17 = *(char *)(CurrentThread + 195) + 1;
        if ( v17 > 31 )
          goto LABEL_20;
      }
      v18 = KiSelectReadyThread(v17, (__int64)a1, v9);
      if ( v18 )
      {
        KiUpdatePriorityMatrixThreadState(a1, v18, 2LL, 3LL);
        --v12;
      }
    }
LABEL_20:
    if ( (_KTHREAD *)CurrentThread != IdleThread )
    {
LABEL_31:
      _disable();
      result = KiStartThreadCycleAccumulation((__int64)a1, CurrentThread, CurrentThread == (_QWORD)IdleThread);
      _enable();
      return result;
    }
    if ( v12 <= 0 )
    {
      if ( v12 < 0 && (a1->IdleState & 1) == 0 )
      {
        v19 = 0LL;
        v20 = 0LL;
        goto LABEL_27;
      }
    }
    else if ( (a1->IdleState & 1) != 0 )
    {
      v19 = 1LL;
      v20 = 1LL;
LABEL_27:
      KiSetProcessorIdle(a1, v20, v19);
    }
    v21 = a1->NextThread;
    if ( !v21 || v21 == a1->IdleThread )
    {
      if ( (a1->IdleState & 1) == 0 )
        goto LABEL_31;
    }
    else if ( (a1->IdleState & 1) != 0 )
    {
      goto LABEL_31;
    }
    __fastfail(0x1Eu);
  }
  return result;
}
