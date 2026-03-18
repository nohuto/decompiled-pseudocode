/*
 * XREFs of PoReenableSleepStates @ 0x1408A4FC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PoReenableSleepStates(_QWORD *P)
{
  _QWORD *v2; // rdx
  PVOID *v3; // rax

  ExAcquireFastMutex(&PopDisableSleepMutex);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  ExFreePoolWithTag(P, 0x64536F50u);
}
