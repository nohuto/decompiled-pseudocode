/*
 * XREFs of MiProbePacketContended @ 0x14008DE30
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 */

LOGICAL __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*(_QWORD *)(a1 + 96), v1) )
    return 1;
  if ( MiWorkingSetIsContended(*(_QWORD *)(a1 + 96)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
