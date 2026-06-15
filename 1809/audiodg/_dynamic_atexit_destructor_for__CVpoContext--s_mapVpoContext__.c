/*
 * XREFs of _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x140021370
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
