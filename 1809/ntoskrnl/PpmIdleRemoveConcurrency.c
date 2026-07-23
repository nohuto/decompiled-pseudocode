/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x1402D51D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x1402D55A8 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KSPIN_LOCK *v3; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 24192);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    v3 = *(KSPIN_LOCK **)(a1 + 24200);
    *(_QWORD *)(a1 + 24192) = 0LL;
    if ( v3 )
    {
      PpmIdleUpdateConcurrency(v3);
      *(_QWORD *)(a1 + 24200) = 0LL;
    }
  }
  return 0LL;
}
