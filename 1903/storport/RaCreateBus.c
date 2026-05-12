/*
 * XREFs of RaCreateBus @ 0x1C006A8F8
 * Callers:
 *     RaidCreateAdapter @ 0x1C001D14C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
