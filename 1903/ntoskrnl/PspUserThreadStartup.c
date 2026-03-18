/*
 * XREFs of PspUserThreadStartup @ 0x1405E6CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x140082040 (KeQuerySystemTimePrecise.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7130 (PspWriteTebIdealProcessor.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1405E79CC (PspInitializeThunkContext.c)
 *     MmGetSessionLocaleId @ 0x1405E9D88 (MmGetSessionLocaleId.c)
 *     PfProcessCreateNotification @ 0x140658BEC (PfProcessCreateNotification.c)
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x14084AD94 (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rcx
  __int64 Process; // r14
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v6; // rdi
  ULONG LowPart; // ebx
  int v8; // r8d
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS v11; // eax
  __int64 v12[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[112]; // [rsp+50h] [rbp-98h] BYREF

  v12[0] = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v12[1] = (__int64)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, -1073741749);
  Process = (__int64)CurrentThread->ApcState.Process;
  v12[2] = Process;
  if ( (*(_DWORD *)(Process + 1788) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId(v1, CurrentThread->Teb);
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process + 780) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process + 780), 0x13u) )
    {
      PfProcessCreateNotification(Process, *(_QWORD *)(Process + 960));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v12);
    v6 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v8 = ExGenRandom(1);
    v9 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      LODWORD(v12[0]) ^ HIDWORD(v12[0]) ^ LowPart ^ v9 ^ v8 ^ v6->MmPageFaultCount ^ v6->InterruptCount ^ v6->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process + 728) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v13, 0, 0x68uLL);
    v11 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v13);
    return PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, v11);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process + 1788);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
