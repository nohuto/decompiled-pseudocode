/*
 * XREFs of KeRequestTerminationThread @ 0x1400AE89C
 * Callers:
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x14087EDEC (KeRequestTerminationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KeForceResumeThread @ 0x140081304 (KeForceResumeThread.c)
 *     KeAlertThread @ 0x1400AEA00 (KeAlertThread.c)
 *     KiSignalThreadForApc @ 0x1400AF130 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AF2B8 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1)
{
  __int64 result; // rax
  char v3; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v7; // rdi
  __int64 v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v14[14]; // [rsp+40h] [rbp-98h] BYREF

  result = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(result + 728) & 1) != 0 )
  {
    memset(v14, 0, 0x68uLL);
    v14[1] = *(unsigned int *)(a1 + 796);
    v14[2] = a1;
    LOBYTE(v10) = 2;
    result = VslpEnterIumSecureMode(v10, 9LL, 0LL, v14);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xFu) )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v13[0] = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v11 = SchedulerAssist[5];
          SchedulerAssist[5] = v11 + 1;
          if ( v11 == -1 )
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
          v12 = v9[5] - 1;
          v9[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v7 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v3 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        LOBYTE(v8) = CurrentIrql;
        KiSignalThreadForApc(v7, a1 + 648, v8);
      }
    }
    KiReleaseThreadLockSafe(a1);
    result = KiExitDispatcher((__int64)v7, 0LL, 1u, 0, CurrentIrql);
    if ( v3 )
    {
      KeAlertThread(a1, 0LL);
      return KeForceResumeThread(a1);
    }
  }
  return result;
}
