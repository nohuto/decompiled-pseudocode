/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1C001EC00
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5024) != 0LL;
}
