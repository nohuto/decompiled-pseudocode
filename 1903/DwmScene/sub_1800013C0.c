/*
 * XREFs of sub_1800013C0 @ 0x1800013C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801271C8 (memset.c)
 */

int sub_1800013C0()
{
  memset(&unk_180268BE0, 0, 0x50uLL);
  return atexit(sub_180134D40);
}
