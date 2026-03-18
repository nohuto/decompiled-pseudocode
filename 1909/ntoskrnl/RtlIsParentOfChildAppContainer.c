/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x14069CA5C
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x14061DD14 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x14065817C (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x1406EC154 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1408E2548 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
