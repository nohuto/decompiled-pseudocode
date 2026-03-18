/*
 * XREFs of KiRequestProcessInSwap @ 0x140109310
 * Callers:
 *     KiReadyThread @ 0x140068140 (KiReadyThread.c)
 *     KiInSwapSingleProcess @ 0x140109250 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140109484 (MmNotifyProcessInSwapTrigger.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  char v4; // si
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v7; // rcx
  _DWORD *v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  signed __int64 v11; // rax
  signed __int64 *v12; // rdi
  signed __int64 v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v21 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v16 = SchedulerAssist[5];
      SchedulerAssist[5] = v16 + 1;
      if ( v16 == -1 )
LABEL_21:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v14[5] - 1;
        v14[5] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21);
    while ( *(_QWORD *)(a1 + 64) );
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v15[5];
        v15[5] = v18 + 1;
        if ( v18 == -1 )
          goto LABEL_21;
      }
    }
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v7 = KeGetCurrentPrcb();
  v8 = v7->SchedulerAssist;
  if ( v8 )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v19 = v8[5] - 1;
      v8[5] = v19;
      if ( !v19 )
        KiRemoveSystemWorkPriorityKick(v7);
    }
  }
  v9 = (_QWORD *)(a1 + 216);
  v10 = *(_QWORD **)(a2 + 256);
  if ( *v10 != a2 + 248 )
    __fastfail(3u);
  *v9 = a2 + 248;
  v9[1] = v10;
  *v10 = v9;
  *(_QWORD *)(a2 + 256) = v9;
  LOBYTE(v11) = *(_DWORD *)(a2 + 576) & 7;
  if ( (_BYTE)v11 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 576), 3u);
    v4 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v4 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v12 = (signed __int64 *)(a2 + 264);
    _m_prefetchw(&KiProcessInSwapListHead);
    v11 = KiProcessInSwapListHead;
    do
    {
      *v12 = v11;
      v13 = v11;
      v11 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v12, v11);
    }
    while ( v11 != v13 );
    if ( !v11 )
      LOBYTE(v11) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v11;
}
