/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x1400CE670
 * Callers:
 *     ExpQueueWorkItem @ 0x1400B7260 (ExpQueueWorkItem.c)
 *     KiWakePriQueueWaiter @ 0x1400D1698 (KiWakePriQueueWaiter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rbx
  unsigned __int8 v7; // si
  __int64 SchedulerAssist; // rdx
  unsigned __int8 v11; // al
  __int64 v12; // r8
  struct _KPRCB *v13; // rcx
  int v14; // edx
  char v15; // al
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // edx
  struct _SINGLE_LIST_ENTRY *v21; // r9
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // [rsp+58h] [rbp+10h] BYREF
  int v31; // [rsp+68h] [rbp+20h]

  v31 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v30 = 0;
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v25 = *(_DWORD *)(SchedulerAssist + 20);
      *(_DWORD *)(SchedulerAssist + 20) = v25 + 1;
      if ( v25 == -1 )
LABEL_30:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v23[5] - 1;
        v23[5] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v30, SchedulerAssist, a3);
    while ( *(_QWORD *)(v5 + 64) );
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v24[5];
        v24[5] = v27 + 1;
        if ( v27 == -1 )
          goto LABEL_30;
      }
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v11 = v31;
    v12 = (unsigned __int8)*(_DWORD *)(v5 + 540);
    if ( (_DWORD)v12 != v31 )
    {
      v20 = *(_DWORD *)(v5 + 540) & 0x100;
      if ( !v20 )
      {
        v28 = *(_QWORD *)(v5 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v28 + 4 * v12 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 4LL * v31 + 536));
        v11 = v31;
      }
      *(_DWORD *)(v5 + 540) = v20 | v11;
    }
    v7 = KiSignalThread(a1, v5, a3, a2);
    if ( v7 )
    {
      *(_BYTE *)(v5 + 645) = 0;
      v13 = KeGetCurrentPrcb();
      v14 = v31;
      if ( (char)v31 < *(char *)(v5 + 563) )
      {
        if ( *(_BYTE *)(v5 + 1423) )
        {
          v21 = (struct _SINGLE_LIST_ENTRY *)(v5 + 1384);
          if ( *(_QWORD *)(v5 + 1384) == 1LL )
          {
            p_AbSelfIoBoostsList = &v13->AbSelfIoBoostsList;
            if ( v13 != (struct _KPRCB *)-25712LL )
            {
              v21->Next = p_AbSelfIoBoostsList->Next;
              p_AbSelfIoBoostsList->Next = v21;
              _InterlockedIncrement16((volatile signed __int16 *)(v5 + 1420));
              KiAbQueueAutoBoostDpc(v13);
              v14 = v31;
            }
          }
        }
      }
      v15 = *(_BYTE *)(v5 + 564);
      *(_BYTE *)(v5 + 563) = v14;
      if ( v15 )
      {
        if ( (v15 & 0xF) != 0 )
        {
          v14 = v31;
          *(_DWORD *)(v5 + 1424) = MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v5 + 564) = 0;
      }
      if ( v14 != *(char *)(v5 + 195) )
      {
        v19 = *(_QWORD *)(v5 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v19;
        KiSetPriorityThread(v5, 0LL);
      }
    }
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  v16 = KeGetCurrentPrcb();
  v17 = v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v29 = v17[5] - 1;
      v17[5] = v29;
      if ( !v29 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  result = v7;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
