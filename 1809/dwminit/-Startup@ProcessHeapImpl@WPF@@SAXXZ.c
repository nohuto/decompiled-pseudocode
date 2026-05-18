/*
 * XREFs of ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180004F50
 * Callers:
 *     AvCreateProcessHeap @ 0x180004F20 (AvCreateProcessHeap.c)
 * Callees:
 *     <none>
 */

void WPF::ProcessHeapImpl::Startup(void)
{
  WPF::g_processHeap = GetProcessHeap();
}
