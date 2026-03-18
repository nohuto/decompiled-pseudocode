/*
 * XREFs of IsValidMouseSensitivity @ 0x1C0182350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsValidMouseSensitivity(int a1)
{
  return (unsigned int)(a1 - 1) <= 0x13;
}
