/*
 * XREFs of ?UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z @ 0x1400537F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessServerInputEndpoint::UpdateRegistry(
        ATL::CAtlModule *a1,
        __int64 a2,
        __int64 a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  return ATL::CAtlModule::UpdateRegistryFromResourceS(a1, 0x69u, (int)a1, a4);
}
