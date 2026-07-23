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

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(ParentAppContainerSid, v4);
      if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
