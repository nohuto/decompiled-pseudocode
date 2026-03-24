/*
 * XREFs of PopIsHiberbootSupported @ 0x1406E251C
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x1407199D8 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14071B328 (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHiberbootSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
