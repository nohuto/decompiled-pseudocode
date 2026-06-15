/*
 * XREFs of _dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__ @ 0x1800706B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Sarm::CEndpointResourcePool::s_sharedPool__()
{
  if ( qword_1801B37F0 )
    std::_Ref_count_base::_Decref(qword_1801B37F0);
}
