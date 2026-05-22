/*
 * XREFs of _dynamic_atexit_destructor_for__GameInputConfig::s_gameInputConfig__ @ 0x18003E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__GameInputConfig::s_gameInputConfig__()
{
  if ( qword_1801E15A0 )
    std::_Ref_count_base::_Decref(qword_1801E15A0);
}
