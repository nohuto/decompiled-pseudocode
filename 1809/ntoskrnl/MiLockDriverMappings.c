/*
 * XREFs of MiLockDriverMappings @ 0x1400F6188
 * Callers:
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x14070E05C (MiReleaseDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140438F00, 0LL);
}
