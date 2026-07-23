/*
 * XREFs of PspUserThreadStartup @ 0x1405F7E40
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MmGetSessionLocaleId @ 0x1405F72C4 (MmGetSessionLocaleId.c)
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1405F82AC (PspWriteTebIdealProcessor.c)
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
 *     PfProcessCreateNotification @ 0x140667D1C (PfProcessCreateNotification.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x1408125AC (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // r8
  LARGE_INTEGER Process; // r14
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v6; // rdi
  ULONG LowPart; // ebx
  int v8; // r8d
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  LARGE_INTEGER v13[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[112]; // [rsp+50h] [rbp-98h] BYREF

  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v13[1].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (LARGE_INTEGER)CurrentThread->ApcState.Process;
  v13[2] = Process;
  if ( (*(_DWORD *)(Process.QuadPart + 1740) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId();
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process.QuadPart + 772) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process.QuadPart + 772), 0x13u) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))PfProcessCreateNotification)(
        (LARGE_INTEGER)Process.QuadPart,
        *(_QWORD *)(Process.QuadPart + 952));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v13);
    v6 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v8 = ExGenRandom(1);
    v9 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v13[0].LowPart ^ v13[0].HighPart ^ LowPart ^ v9 ^ v8 ^ v6->MmPageFaultCount ^ v6->InterruptCount ^ v6->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process.QuadPart + 720) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    v11 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v14);
    LOBYTE(v12) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v11, v12);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process.QuadPart + 1740);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
