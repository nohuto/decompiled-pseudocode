/*
 * XREFs of RaidAdapterIsRegisteredForIdleDetection @ 0x1C0021E7C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterIsRegisteredForIdleDetection(__int64 a1)
{
  return *(_QWORD *)(a1 + 5152) != 0LL;
}
