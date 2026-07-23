/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140655DF4
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x1406CD104 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1408A577C (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140655D20 (RtlGetAppContainerSidType.c)
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
