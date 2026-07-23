/*
 * XREFs of KeTryToFreezeThreadStack @ 0x140160F24
 * Callers:
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsKernelStackSwappable @ 0x14029AE30 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  char result; // al
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int64 *v15; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[5];
        SchedulerAssist[5] = v10 + 1;
        if ( v10 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[5] - 1;
        v11[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13, (__int64)a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = KiAcquireThreadStateLock(a1, (__int64)&v14, (volatile signed __int32 **)&v15);
  if ( v7 <= 4u )
  {
LABEL_6:
    KiReleaseThreadStateLock(v8, v14, v15);
    KiReleaseThreadLockSafe(a1);
    return 0;
  }
  if ( v7 == 5 )
  {
    if ( !(unsigned int)KiIsKernelStackSwappable(a1) )
      goto LABEL_6;
    LOBYTE(v8) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v8 )
      goto LABEL_6;
  }
  else if ( v7 == 7 || v7 == 9 )
  {
    goto LABEL_6;
  }
  result = 1;
  *a2 = v14;
  return result;
}
