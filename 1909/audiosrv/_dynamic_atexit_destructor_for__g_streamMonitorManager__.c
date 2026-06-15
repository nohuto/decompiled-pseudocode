/*
 * XREFs of _dynamic_atexit_destructor_for__g_streamMonitorManager__ @ 0x180074A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__g_streamMonitorManager__()
{
  if ( qword_1801B7C00 )
    std::_Ref_count_base::_Decref(qword_1801B7C00);
}
