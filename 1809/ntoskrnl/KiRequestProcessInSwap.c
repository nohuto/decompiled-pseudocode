/*
 * XREFs of KiRequestProcessInSwap @ 0x14010CB00
 * Callers:
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14010CA40 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14010CCA8 (MmNotifyProcessInSwapTrigger.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v6; // bp
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  signed __int64 v16; // rax
  signed __int64 *v17; // rdx
  signed __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  v20 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[5];
        SchedulerAssist[5] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[5] - 1;
        v9[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v13 = v12[5] - 1;
      v12[5] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  v14 = (_QWORD *)(a1 + 216);
  v15 = *(_QWORD **)(a2 + 256);
  if ( *v15 != a2 + 248 )
    __fastfail(3u);
  *v14 = a2 + 248;
  v14[1] = v15;
  *v15 = v14;
  *(_QWORD *)(a2 + 256) = v14;
  LOBYTE(v16) = *(_DWORD *)(a2 + 572) & 7;
  if ( (_BYTE)v16 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 572), 3u);
    v6 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v6 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v17 = (signed __int64 *)(a2 + 264);
    _m_prefetchw(&KiProcessInSwapListHead);
    v16 = KiProcessInSwapListHead;
    do
    {
      *v17 = v16;
      v18 = v16;
      v16 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v17, v16);
    }
    while ( v16 != v18 );
    if ( !v16 )
      LOBYTE(v16) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v16;
}
