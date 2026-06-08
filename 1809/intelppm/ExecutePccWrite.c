/*
 * XREFs of ExecutePccWrite @ 0x1C000A230
 * Callers:
 *     <none>
 * Callees:
 *     ExecutePccCommand @ 0x1C002D8D0 (ExecutePccCommand.c)
 */

__int64 __fastcall ExecutePccWrite(__int64 a1)
{
  LOBYTE(a1) = 1;
  return ExecutePccCommand(a1);
}
