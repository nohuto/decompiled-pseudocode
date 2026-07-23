/*
 * XREFs of PiSwIsValidPnpId @ 0x1406D8898
 * Callers:
 *     PiSwValidateCreateData @ 0x1406D8610 (PiSwValidateCreateData.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwIsValidPnpId(__int16 *a1, char a2)
{
  __int16 v2; // r8

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(v2 - 33) > 0x5Eu || v2 == 44 || !a2 && v2 == 92 )
      break;
    ++a1;
  }
  return 0;
}
