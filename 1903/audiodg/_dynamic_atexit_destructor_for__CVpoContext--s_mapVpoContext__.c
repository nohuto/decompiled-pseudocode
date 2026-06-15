/*
 * XREFs of _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x14001B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__()
{
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll();
}
