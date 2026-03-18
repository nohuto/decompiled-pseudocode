/*
 * XREFs of ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C01420AC
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0141D14 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C0141F30 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0161BBC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     <none>
 */

void UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(void)
{
  PVOID v0; // rbx

  v0 = UmfdFileviewLookup;
  if ( UmfdFileviewLookup )
  {
    ExFreePoolWithTag(*((PVOID *)UmfdFileviewLookup + 6), 0);
    ExFreePoolWithTag(v0, 0);
    UmfdFileviewLookup = 0LL;
  }
}
