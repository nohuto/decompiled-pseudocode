/*
 * XREFs of ExpDeleteTimer2 @ 0x1406BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     KeDisableTimer2 @ 0x140113F5C (KeDisableTimer2.c)
 */

char __fastcall ExpDeleteTimer2(__int64 a1)
{
  return KeDisableTimer2(a1, 1, 1, 0LL);
}
