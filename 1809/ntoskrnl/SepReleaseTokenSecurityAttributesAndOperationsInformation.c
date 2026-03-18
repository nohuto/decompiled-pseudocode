/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1405BEE00
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405BEE40 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 */

__int64 __fastcall SepReleaseTokenSecurityAttributesAndOperationsInformation(PVOID *P, char a2)
{
  if ( a2 )
  {
    ExFreePoolWithTag(P[1], 0);
    if ( *P )
      SepFreeCapturedTokenSecurityAttributesInformation(*P);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
