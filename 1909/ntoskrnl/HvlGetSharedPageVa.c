/*
 * XREFs of HvlGetSharedPageVa @ 0x1406A870C
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1400FCCB0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A1D07C (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140424740();
  return result;
}
