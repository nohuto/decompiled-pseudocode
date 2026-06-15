/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x1400213A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_AudioHistoryManager__()
{
  wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::_Delete(&lpCriticalSection);
}
