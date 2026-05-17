/*
 * XREFs of RtlCopySid @ 0x180014AC0
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x18000F3AC (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 *     RtlCreateAndSetSD @ 0x180068930 (RtlCreateAndSetSD.c)
 *     RtlpAddKnownObjectAce @ 0x18008881C (RtlpAddKnownObjectAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008B540 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E4AE0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E6FB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E71C0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7670 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
