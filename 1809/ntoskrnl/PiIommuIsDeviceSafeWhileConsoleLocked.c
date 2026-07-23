/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14083E034
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x14083A580 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 4) == 0;
}
