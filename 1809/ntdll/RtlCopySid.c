/*
 * XREFs of RtlCopySid @ 0x180040D90
 * Callers:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180045DC8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlCreateAndSetSD @ 0x180072450 (RtlCreateAndSetSD.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180088390 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1DC (RtlpAddKnownObjectAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E76C0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
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
