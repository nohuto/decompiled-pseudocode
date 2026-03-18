/*
 * XREFs of HvlGetSharedPageVa @ 0x1406A8E7C
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1400F9210 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140A1CEA0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_140424740();
  return result;
}
