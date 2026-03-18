/*
 * XREFs of PopDirectedDripsWorkerRoutine @ 0x1408A4E00
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsProcessWork @ 0x1408A47F0 (PopDirectedDripsProcessWork.c)
 *     PopDiagTraceDirectedDripsWorker @ 0x1408AEFC0 (PopDiagTraceDirectedDripsWorker.c)
 */

void __fastcall __noreturn PopDirectedDripsWorkerRoutine(volatile __int64 *StartContext)
{
  __int64 v2; // rbx
  int v3; // ecx
  char v4; // cl

  while ( 1 )
  {
    while ( KeWaitForSingleObject((PVOID)(StartContext + 3), Executive, 0, 0, 0LL) )
      ;
    v2 = _InterlockedExchange64(StartContext + 1, 0LL);
    PopDiagTraceDirectedDripsWorker(v2);
    while ( v2 )
    {
      if ( (_DWORD)v2 )
      {
        _BitScanForward((unsigned int *)&v3, v2);
      }
      else
      {
        _BitScanForward((unsigned int *)&v3, HIDWORD(v2));
        LOBYTE(v3) = v4 + 32;
      }
      v2 &= ~(1LL << v3);
      PopDirectedDripsProcessWork((__int64)StartContext, 1LL << v3);
    }
  }
}
