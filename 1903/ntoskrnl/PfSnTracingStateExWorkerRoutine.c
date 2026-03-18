/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406F0220
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140467D24 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140467D24 = 1;
    while ( qword_140467CD8 != &qword_140467CD8 )
    {
      v2 = qword_140467CE0;
      if ( *(PVOID **)qword_140467CE0 != &qword_140467CD8
        || (v3 = (PVOID *)*((_QWORD *)qword_140467CE0 + 1), *v3 != qword_140467CE0) )
      {
        __fastfail(3u);
      }
      qword_140467CE0 = (PVOID)*((_QWORD *)qword_140467CE0 + 1);
      *v3 = &qword_140467CD8;
      ExFreePoolWithTag(v2, 0);
      --dword_140467D20;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140467D28 )
      KeSetEvent(qword_140467D28, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
