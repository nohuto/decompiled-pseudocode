/*
 * XREFs of ExpDebuggerWorker @ 0x140916030
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14018FB04 (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x1401C54B0 (DbgBreakPointWithStatus.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     PsQuitNextProcessThread @ 0x1406D1F30 (PsQuitNextProcessThread.c)
 *     EtwWmitraceWorker @ 0x1408BEA40 (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // rbp
  __int64 v1; // r14
  char v2; // r15
  char DefaultPagePriority; // al
  int v4; // ebx
  void *v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rcx
  ULONG_PTR NextProcess; // rax
  __int64 v9; // r9
  int v10; // eax
  ULONG_PTR v11; // rcx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  _BYTE v15[48]; // [rsp+30h] [rbp-58h] BYREF

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v13 = ExpDebuggerPageIn;
  v14 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v7);
      v5 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0LL, (__int64)v15);
        if ( v5 )
          goto LABEL_3;
        break;
      }
      v7 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess, 0x40010004u);
        goto LABEL_30;
      }
    }
    v9 = v1;
    if ( v0 )
      v9 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v9, v13, v14);
  }
LABEL_3:
  v6 = v13;
  if ( v13 )
  {
    LOBYTE(v10) = MmIsSessionAddress(v13);
    if ( v10 )
      v11 = -3LL;
    else
      v11 = -(__int64)(v13 < 0xFFFF800000000000uLL);
    v12 = MmPrefetchVirtualMemory(v11, 1uLL, (__int64)&v13, v4);
    if ( v12 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v12);
    v6 = v13;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v6 = v13;
  }
  if ( v0 || v1 || v6 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    KiUnstackDetachProcess((__int64)v15, 0LL);
LABEL_30:
    PsQuitNextProcessThread(v5);
  }
}
