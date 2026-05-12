/*
 * XREFs of RaCreateBus @ 0x1C006B7F8
 * Callers:
 *     RaidCreateAdapter @ 0x1C001A91C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

void *__fastcall RaCreateBus(_BYTE *a1)
{
  *a1 = 0;
  return memset(a1 + 8, 0, 0x40uLL);
}
