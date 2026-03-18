/*
 * XREFs of MiLockDriverMappings @ 0x140155FBC
 * Callers:
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140746F3C (MiReleaseDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464620, 0LL);
}
