/*
 * XREFs of MiProbePacketContended @ 0x1400CB040
 * Callers:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400DE3F0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
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
