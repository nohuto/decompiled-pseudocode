/*
 * XREFs of RaidCreateDma @ 0x1C006DF68
 * Callers:
 *     RaidCreateAdapter @ 0x1C001D14C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 */

void *__fastcall RaidCreateDma(void *a1)
{
  void *result; // rax

  if ( a1 )
    return memset(a1, 0, 0x20uLL);
  return result;
}
