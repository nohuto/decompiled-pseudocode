/*
 * XREFs of RaidCreateDma @ 0x1C006E768
 * Callers:
 *     RaidCreateAdapter @ 0x1C001A91C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
