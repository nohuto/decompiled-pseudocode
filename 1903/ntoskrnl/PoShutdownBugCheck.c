/*
 * XREFs of PoShutdownBugCheck @ 0x1408A87D0
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036B70 (PsGetCurrentThreadProcessId.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     PsGetCurrentThreadId @ 0x140119770 (PsGetCurrentThreadId.c)
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 *     ZwInitiatePowerAction @ 0x1401C2050 (ZwInitiatePowerAction.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402ED910 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PoShutdownBugCheck(
        char a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6)
{
  unsigned __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  _QWORD v13[10]; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+30h] BYREF

  memset(v13, 0, 0x48uLL);
  if ( PopCriticalShutdownInProgress )
  {
    Interval.QuadPart = -300000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  v13[1] = KeGetCurrentThread()->ApcState.Process;
  if ( !a1 )
  {
    v13[1] = 0LL;
    IoConfigureCrashDump(0, 0);
  }
  v13[0] = KeGetCurrentThread();
  v13[2] = PsGetCurrentThreadId();
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v11 = BugCheckParameter3;
  BugCheckParameter4 = a6;
  v13[3] = CurrentThreadProcessId;
  LODWORD(v13[4]) = a2;
  v13[5] = a3;
  v13[6] = a4;
  v13[7] = BugCheckParameter3;
  v13[8] = a6;
  *(_QWORD *)&qword_140443070 = v13;
  ZwInitiatePowerAction(PowerActionShutdown, PowerSystemSleeping3, 0xC0000004, 0);
  KeBugCheckEx(a2, a3, a4, v11, BugCheckParameter4);
}
