/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1402A4998
 * Callers:
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x14000FCA0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14000FFF0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsKernelStackSwappable @ 0x1402B1C04 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  char result; // al
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int64 *v14; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = SchedulerAssist[5];
        SchedulerAssist[5] = v6 + 1;
        if ( v6 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v7[5] - 1;
        v7[5] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = KiAcquireThreadStateLock(a1, &v13, (volatile signed __int32 **)&v14);
  if ( v9 <= 4u )
  {
LABEL_18:
    KiReleaseThreadStateLock(v10, v13, v14);
    KiReleaseThreadLockSafe(a1);
    return 0;
  }
  if ( v9 == 5 )
  {
    if ( !(unsigned int)KiIsKernelStackSwappable(a1) )
      goto LABEL_18;
    LOBYTE(v10) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v10 )
      goto LABEL_18;
  }
  else if ( v9 == 7 || v9 == 9 )
  {
    goto LABEL_18;
  }
  result = 1;
  *a2 = v13;
  return result;
}
