/*
 * XREFs of HvlGetSharedPageVa @ 0x1406CA864
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140138678 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x1409D95F0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_1403FE740();
  return result;
}
