/*
 * XREFs of PopDirectedDripsWorkerRoutine @ 0x140869A50
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 *     PopDiagTraceDirectedDripsWorker @ 0x140873474 (PopDiagTraceDirectedDripsWorker.c)
 */

void __fastcall __noreturn PopDirectedDripsWorkerRoutine(volatile __int64 *StartContext)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  char v6; // cl

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
        _BitScanForward((unsigned int *)&v5, v2);
      }
      else
      {
        _BitScanForward((unsigned int *)&v5, HIDWORD(v2));
        LOBYTE(v5) = v6 + 32;
      }
      v2 &= ~(1LL << v5);
      PopDirectedDripsProcessWork((__int64)StartContext, 1LL << v5, v3, v4);
    }
  }
}
