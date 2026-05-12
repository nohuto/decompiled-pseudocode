/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C003419C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  return !RaidAdapterPoFxIdleComponent(a1, a2, 0LL) ? 0xC100000C : 0;
}
