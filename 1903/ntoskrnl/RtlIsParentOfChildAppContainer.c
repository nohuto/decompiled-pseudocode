/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x14067F9B4
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x14061C204 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x14064462C (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x1406EAE94 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1408E2C48 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  int v4; // [rsp+40h] [rbp+18h]

  if ( (int)RtlGetAppContainerSidType(Sid) >= 0 && v4 == 2 )
    RtlGetAppContainerSidType(a2);
  return 0;
}
