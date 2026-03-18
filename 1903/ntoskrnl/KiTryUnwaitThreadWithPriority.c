/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x14010D5E8
 * Callers:
 *     KiWakePriQueueWaiter @ 0x14010D55C (KiWakePriQueueWaiter.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14005BDF0 (KiSignalThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400E45FC (KiSetBasePriorityAndClearDecrement.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v5; // bp
  __int64 v7; // rbx
  _DWORD *SchedulerAssist; // r9
  int v11; // edi
  __int64 v12; // rax
  char result; // al
  __int64 v14; // r8
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+58h] [rbp+10h] BYREF
  int v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v23 = 0;
  v7 = *(_QWORD *)(a2 + 24);
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
    goto LABEL_2;
  v16 = SchedulerAssist[5];
  v17 = v16 == -1;
  SchedulerAssist[5] = v16 + 1;
LABEL_16:
  if ( v17 )
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_2:
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
  {
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[5] - 1;
        v19[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23);
    while ( *(_QWORD *)(v7 + 64) );
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 && CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = v21[5];
      v17 = v18 == -1;
      v21[5] = v18 + 1;
      goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(v7 + 388) == 5 )
  {
    v11 = v24;
    v12 = (unsigned __int8)*(_DWORD *)(v7 + 540);
    if ( (_DWORD)v12 != v24 )
    {
      v15 = *(_DWORD *)(v7 + 540) & 0x100;
      if ( !v15 )
      {
        v22 = *(_QWORD *)(v7 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 4 * v12 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v22 + 4LL * v24 + 536));
        v11 = v24;
      }
      *(_DWORD *)(v7 + 540) = v15 | (unsigned __int8)v11;
    }
    v5 = KiSignalThread(a1, v7, a3, a2);
    if ( v5 )
    {
      *(_BYTE *)(v7 + 645) = 0;
      KiSetBasePriorityAndClearDecrement(v7, (char *)&v24, 0);
      if ( v11 != *(char *)(v7 + 195) )
      {
        v14 = *(_QWORD *)(v7 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v7 + 651);
        if ( (*(_DWORD *)(v7 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 5u);
        *(_QWORD *)(v7 + 32) = v14;
        KiSetPriorityThread((_BYTE *)v7, 0LL, v24);
      }
    }
  }
  KiReleaseThreadLockSafe(v7);
  result = v5;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
