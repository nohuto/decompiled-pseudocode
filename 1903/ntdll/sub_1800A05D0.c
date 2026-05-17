/*
 * XREFs of sub_1800A05D0 @ 0x1800A05D0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CD500 (LdrInitializeEnclave.c)
 *     LdrCallEnclave_0 @ 0x1800CDFC0 (LdrCallEnclave_0.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009D8B0 (ZwCallEnclave.c)
 */

__int64 sub_1800A05D0()
{
  return ZwCallEnclave();
}
