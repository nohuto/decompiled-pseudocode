/*
 * XREFs of ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180004F6C
 * Callers:
 *     AvDestroyProcessHeap @ 0x180004F38 (AvDestroyProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Shutdown(void)
{
  WPF::g_processHeap = 0LL;
}
