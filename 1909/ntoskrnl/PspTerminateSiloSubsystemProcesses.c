/*
 * XREFs of PspTerminateSiloSubsystemProcesses @ 0x1408C59D0
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     PsGetProcessSessionId @ 0x1400C8670 (PsGetProcessSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 */

void *__fastcall PspTerminateSiloSubsystemProcesses(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  int ServerSiloServiceSessionId; // ebp
  struct _KPROCESS *i; // r9
  int v5; // edx
  unsigned int ProcessSessionId; // eax
  struct _KPROCESS *NextJobProcess; // rax
  struct _KPROCESS *v8; // rbx
  void *result; // rax
  struct _LIST_ENTRY *v10; // rcx
  struct _KPROCESS *v11; // r8
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  memset(v12, 0, 24);
  PspEnumJobsAndProcessesInJobHierarchy(a1, 0, (int)PspWaitOnAllProcessesJobCallback, 0, (__int64)&v13, 2);
  CurrentThread = KeGetCurrentThread();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a1);
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = (struct _KPROCESS *)PspGetNextJobProcess((__int64)a1, (__int64)CurrentThread, v12, i);
    v8 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    v5 = HIDWORD(NextJobProcess[2].ActiveProcessors.Bitmap[4]);
    if ( ((v5 & 0x40) != 0 || (NextJobProcess[1].DirectoryTableBase & 1) == 0) && (v5 & 0x1000) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionId((__int64)NextJobProcess);
      if ( ProcessSessionId != ServerSiloServiceSessionId )
        PspShutdownCsrProcess(a1, ProcessSessionId, v8);
    }
  }
  result = PsGetServerSiloGlobals((__int64)a1);
  v11 = (struct _KPROCESS *)*((_QWORD *)result + 110);
  if ( v11 )
    return (void *)PspShutdownCsrProcess(v10, **((_DWORD **)result + 138), v11);
  return result;
}
