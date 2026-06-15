/*
 * XREFs of _dynamic_atexit_destructor_for__g_streamMonitorManager__ @ 0x1800739E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_streamMonitorManager__()
{
  if ( qword_1801B8C00 )
    std::_Ref_count_base::_Decref(qword_1801B8C00);
}
