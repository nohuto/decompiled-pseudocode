/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1406F1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_1404679E8);
  if ( dword_140467A24 == 2 )
  {
    KeReleaseGuardedMutex(&stru_1404679E8);
  }
  else
  {
    dword_140467A24 = 1;
    while ( qword_1404679D8 != &qword_1404679D8 )
    {
      v2 = qword_1404679E0;
      if ( *(PVOID **)qword_1404679E0 != &qword_1404679D8
        || (v3 = (PVOID *)*((_QWORD *)qword_1404679E0 + 1), *v3 != qword_1404679E0) )
      {
        __fastfail(3u);
      }
      qword_1404679E0 = (PVOID)*((_QWORD *)qword_1404679E0 + 1);
      *v3 = &qword_1404679D8;
      ExFreePoolWithTag(v2, 0);
      --dword_140467A20;
    }
    KeReleaseGuardedMutex(&stru_1404679E8);
    if ( qword_140467A28 )
      KeSetEvent(qword_140467A28, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
