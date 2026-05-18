/*
 * XREFs of AvCreateProcessHeap @ 0x180004F20
 * Callers:
 *     _DllMainStartup @ 0x180003E00 (_DllMainStartup.c)
 * Callees:
 *     ?Startup@ProcessHeapImpl@WPF@@SAXXZ @ 0x180004F50 (-Startup@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvCreateProcessHeap()
{
  WPF::ProcessHeapImpl::Startup();
  return 0LL;
}
