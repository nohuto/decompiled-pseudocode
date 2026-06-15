/*
 * XREFs of _dynamic_atexit_destructor_for__g_weakStreamMonitorManager__ @ 0x180074A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180064290 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_weakStreamMonitorManager__()
{
  if ( qword_1801B7C10 )
    std::_Ref_count_base::_Decwref(qword_1801B7C10);
}
