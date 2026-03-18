/*
 * XREFs of KiOutSwapKernelStacks @ 0x1400E3280
 * Callers:
 *     KeSwapProcessOrStack @ 0x140189BA0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     MmOutPageKernelStack @ 0x1400E3478 (MmOutPageKernelStack.c)
 *     KiWaitForContextSwap @ 0x1400E3744 (KiWaitForContextSwap.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG KiOutSwapKernelStacks()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  unsigned int v2; // r14d
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // r8
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  ULONG result; // eax
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  struct _KPRCB *v21; // rcx
  _DWORD v22[12]; // [rsp+20h] [rbp-58h] BYREF

  v0 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v22[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[5];
        SchedulerAssist[5] = v17 + 1;
        if ( v17 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 22800), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v18[5] - 1;
        v18[5] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(v22);
    while ( *(_QWORD *)(v1 + 22800) );
  }
  v6 = *(_QWORD **)(v1 + 22784);
  while ( v6 != (_QWORD *)(v1 + 22784) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v7 = (__int64)(v6 - 27);
    v6 = (_QWORD *)*v6;
    if ( v2 < *(_DWORD *)(v7 + 436) )
      break;
    if ( *(char *)(v7 + 195) < 25 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 0x11u);
      v8 = v7;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x14u) )
        v8 = v7 | 1;
      *(_QWORD *)&v22[2 * v0 + 2] = v8;
      v0 = (unsigned int)(v0 + 1);
    }
    v9 = *(_QWORD *)(v7 + 216);
    v10 = *(_QWORD **)(v7 + 224);
    if ( *(_QWORD *)(v9 + 8) != v7 + 216 || *v10 != v7 + 216 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v7 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 22800), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v20 = v12[5] - 1;
      v12[5] = v20;
      if ( !v20 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v14 = (unsigned __int64 *)&v22[2 * v0 + 2];
    do
    {
      --v14;
      LODWORD(v0) = v0 - 1;
      v15 = *v14 & 0xFFFFFFFFFFFFFFFEuLL;
      v16 = *v14 & 1;
      if ( !v16 )
        v15 = *v14;
      KiWaitForContextSwap(v15);
      if ( (unsigned int)v16 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v15 + 184));
      result = MmOutPageKernelStack(v15);
    }
    while ( (_DWORD)v0 );
  }
  return result;
}
