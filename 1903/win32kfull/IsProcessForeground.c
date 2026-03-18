/*
 * XREFs of IsProcessForeground @ 0x1C01D6600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessForeground(int a1)
{
  return gptiForeground && a1 == ((unsigned int)PsGetThreadProcessId((PETHREAD)*gptiForeground) & 0xFFFFFFFC);
}
