/*
 * XREFs of _RmSetHostLimit@16 @ 0x10011490
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientSetHostLimits@16 @ 0x10011AA1 (_RmpClientSetHostLimits@16.c)
 */

int __stdcall RmSetHostLimit(int a1, int a2, int a3, int a4)
{
  return RmpClientSetHostLimits(a1, a2, a3);
}
