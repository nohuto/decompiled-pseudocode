/*
 * XREFs of HvlGetSharedPageVa @ 0x1406CBAE4
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140138798 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x1409DA5F0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_1403FF740();
  return result;
}
