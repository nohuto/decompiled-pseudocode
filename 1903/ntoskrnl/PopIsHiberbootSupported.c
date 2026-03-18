/*
 * XREFs of PopIsHiberbootSupported @ 0x140729CBC
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x140742F14 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x1407434AC (PopVerifySystemPowerState.c)
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
