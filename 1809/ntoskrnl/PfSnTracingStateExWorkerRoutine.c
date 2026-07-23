/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406D1E20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_14043D324 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_14043D324 = 1;
    while ( qword_14043D2D8 != &qword_14043D2D8 )
    {
      v2 = qword_14043D2E0;
      if ( *(PVOID **)qword_14043D2E0 != &qword_14043D2D8
        || (v3 = (PVOID *)*((_QWORD *)qword_14043D2E0 + 1), *v3 != qword_14043D2E0) )
      {
        __fastfail(3u);
      }
      qword_14043D2E0 = (PVOID)*((_QWORD *)qword_14043D2E0 + 1);
      *v3 = &qword_14043D2D8;
      ExFreePoolWithTag(v2, 0);
      --dword_14043D320;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_14043D328 )
      KeSetEvent(qword_14043D328, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
