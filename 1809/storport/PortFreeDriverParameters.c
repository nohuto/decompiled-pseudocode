/*
 * XREFs of PortFreeDriverParameters @ 0x1C0075B40
 * Callers:
 *     RaidDeleteAdapter @ 0x1C003A9C4 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
