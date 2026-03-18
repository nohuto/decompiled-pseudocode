/*
 * XREFs of itrp_SetSameTransformFlag @ 0x1C02D0370
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     <none>
 */

char __fastcall itrp_SetSameTransformFlag(_BYTE *a1, char a2)
{
  char result; // al

  result = 0;
  a1[396] = a2;
  if ( a1[341] || !a2 )
    result = 1;
  a1[397] = result;
  return result;
}
