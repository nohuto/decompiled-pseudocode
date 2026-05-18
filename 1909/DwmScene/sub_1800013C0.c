/*
 * XREFs of sub_1800013C0 @ 0x1800013C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801272D8 (memset.c)
 */

int sub_1800013C0()
{
  memset(&unk_180269BE0, 0, 0x50uLL);
  return atexit(sub_180134E50);
}
