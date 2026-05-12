/*
 * XREFs of PortFreeDriverParameters @ 0x1C0074D70
 * Callers:
 *     RaidDeleteAdapter @ 0x1C00366BC (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
