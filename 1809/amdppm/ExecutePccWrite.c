/*
 * XREFs of ExecutePccWrite @ 0x1C0003650
 * Callers:
 *     <none>
 * Callees:
 *     ExecutePccCommand @ 0x1C0021900 (ExecutePccCommand.c)
 */

__int64 __fastcall ExecutePccWrite(__int64 a1)
{
  LOBYTE(a1) = 1;
  return ExecutePccCommand(a1);
}
