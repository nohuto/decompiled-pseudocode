/*
 * XREFs of KeRequestTerminationThread @ 0x1400F13C8
 * Callers:
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1408445CC (KeRequestTerminationProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KeForceResumeThread @ 0x1400F1C1C (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x1400F2004 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400F21A0 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  char v5; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  char v16[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+48h] [rbp-90h]
  __int64 v18; // [rsp+50h] [rbp-88h]

  result = *(_QWORD *)(a1 + 544);
  v4 = a1;
  if ( (*(_BYTE *)(result + 720) & 1) != 0 )
  {
    v11 = *(unsigned int *)(a1 + 796);
    LOBYTE(a1) = 2;
    v17 = v11;
    v18 = v4;
    result = VslpEnterIumSecureMode(a1, 9LL, 0LL, v16);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xFu) )
  {
    v5 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v15[0] = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[5];
          SchedulerAssist[5] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
        break;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v13[5] - 1;
          v13[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(v15, a2, a3);
      while ( *(_QWORD *)(v4 + 64) );
    }
    v9 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(v4 + 116) & 0x4000) != 0 )
    {
      v5 = 1;
      if ( !*(_BYTE *)(v4 + 730) )
      {
        *(_BYTE *)(v4 + 730) = 1;
        KiInsertQueueApc(v4 + 648);
        LOBYTE(v10) = CurrentIrql;
        KiSignalThreadForApc(v9, v4 + 648, v10);
      }
    }
    KiReleaseThreadLockSafe(v4);
    result = KiExitDispatcher((__int64)v9, 0LL, 1LL, 0, CurrentIrql);
    if ( v5 )
    {
      KeAlertThread(v4, 0LL);
      return KeForceResumeThread(v4);
    }
  }
  return result;
}
