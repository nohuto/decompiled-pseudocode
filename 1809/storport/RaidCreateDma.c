/*
 * XREFs of RaidCreateDma @ 0x1C006C578
 * Callers:
 *     RaidCreateAdapter @ 0x1C001BD10 (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
