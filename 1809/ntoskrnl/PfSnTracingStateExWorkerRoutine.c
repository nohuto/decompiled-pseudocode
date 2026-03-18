/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406D0BA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_14043C264 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_14043C264 = 1;
    while ( qword_14043C218 != &qword_14043C218 )
    {
      v2 = qword_14043C220;
      if ( *(PVOID **)qword_14043C220 != &qword_14043C218
        || (v3 = (PVOID *)*((_QWORD *)qword_14043C220 + 1), *v3 != qword_14043C220) )
      {
        __fastfail(3u);
      }
      qword_14043C220 = (PVOID)*((_QWORD *)qword_14043C220 + 1);
      *v3 = &qword_14043C218;
      ExFreePoolWithTag(v2, 0);
      --dword_14043C260;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_14043C268 )
      KeSetEvent(qword_14043C268, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
