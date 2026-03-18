/*
 * XREFs of EtwpStartTrace @ 0x1406B70FC
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1408FA35C (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 */

__int64 __fastcall EtwpStartTrace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KMUTANT *v5; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _KMUTANT *)(a1 + 4584);
  KeWaitForSingleObject((PVOID)(a1 + 4584), Executive, 0, 0, 0LL);
  LODWORD(a2) = EtwpStartLogger(a1, a2);
  KeReleaseMutex(v5, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)a2;
}
