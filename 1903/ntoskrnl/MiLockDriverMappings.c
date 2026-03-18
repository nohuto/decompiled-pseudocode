/*
 * XREFs of MiLockDriverMappings @ 0x14015591C
 * Callers:
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x14074503C (MiReleaseDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464920, 0LL);
}
