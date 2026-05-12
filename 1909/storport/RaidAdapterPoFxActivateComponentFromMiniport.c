/*
 * XREFs of RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C003B884
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxActivateComponentFromMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  return (unsigned __int8)RaidAdapterPoFxActivateComponent(a1, a2, a3) == 0 ? 0xC100000C : 0;
}
