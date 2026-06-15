/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x14001B8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__g_AudioHistoryManager__()
{
  wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::reset(
    &lpCriticalSection,
    0LL);
}
