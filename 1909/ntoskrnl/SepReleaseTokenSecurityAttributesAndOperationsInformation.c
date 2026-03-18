/*
 * XREFs of SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1406DE438
 * Callers:
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1406DE478 (SepFreeCapturedTokenSecurityAttributesInformation.c)
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
