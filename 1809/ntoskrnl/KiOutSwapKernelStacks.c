/*
 * XREFs of KiOutSwapKernelStacks @ 0x14013D0B8
 * Callers:
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateKernelStackSegments @ 0x14013D3E8 (KeEnumerateKernelStackSegments.c)
 *     KiWaitForContextSwap @ 0x14013D570 (KiWaitForContextSwap.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiOutSwapKernelStacks(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // r15d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // r8
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  int v26[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh]
  __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  _QWORD v32[5]; // [rsp+F8h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = KiProcessorBlock[KiLastProcessor];
  v5 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v26[0] = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[5];
        SchedulerAssist[5] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 22800), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v21[5] - 1;
        v21[5] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(v26, a2, a3);
    while ( *(_QWORD *)(v4 + 22800) );
  }
  v9 = *(_QWORD **)(v4 + 22784);
  while ( v9 != (_QWORD *)(v4 + 22784) )
  {
    if ( (unsigned int)v3 >= 5 )
      break;
    v10 = (unsigned __int64)(v9 - 27);
    v9 = (_QWORD *)*v9;
    if ( v5 < *(_DWORD *)(v10 + 436) )
      break;
    if ( *(char *)(v10 + 195) < 25 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v10 + 120), 0x11u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v10 + 120), 0x14u) )
        v32[v3] = v10 | 1;
      else
        v32[v3] = v10;
      v3 = (unsigned int)(v3 + 1);
    }
    v11 = *(_QWORD *)(v10 + 216);
    v12 = *(_QWORD **)(v10 + 224);
    if ( *(_QWORD *)(v11 + 8) != v10 + 216 || *v12 != v10 + 216 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(v10 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 22800), 0LL);
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v24 = v14[5] - 1;
      v14[5] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  if ( KiLastProcessor == KeQueryActiveProcessorCountEx(0xFFFFu) )
    KiLastProcessor = 0;
  if ( (_DWORD)v3 )
  {
    v15 = &v32[v3];
    do
    {
      --v15;
      LODWORD(v3) = v3 - 1;
      v16 = *v15 & 0xFFFFFFFFFFFFFFFEuLL;
      v17 = *v15 & 1;
      if ( !v17 )
        v16 = *v15;
      KiWaitForContextSwap(v16);
      if ( (unsigned int)v17 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v16 + 184));
      if ( (MiFlags & 0x40) != 0 )
      {
        v27 = 0;
        LOWORD(v28) = 0;
        v30 = 0LL;
        v31 = 0LL;
        v29 = 20LL;
        KeEnumerateKernelStackSegments(v16, MiOutPageSingleKernelStack, &v27);
        MiFlushTbList(&v27, v18, v19, v20);
      }
    }
    while ( (_DWORD)v3 );
  }
}
