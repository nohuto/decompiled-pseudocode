/*
 * XREFs of HvlGetSharedPageVa @ 0x1406CA844
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140138698 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x1409D95F0 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

PVOID HvlGetSharedPageVa()
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)off_1403FE740();
  return result;
}
