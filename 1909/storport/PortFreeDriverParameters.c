/*
 * XREFs of PortFreeDriverParameters @ 0x1C0075C40
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0037AAC (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
