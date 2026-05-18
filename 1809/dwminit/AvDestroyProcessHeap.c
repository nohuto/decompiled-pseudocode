/*
 * XREFs of AvDestroyProcessHeap @ 0x180004F38
 * Callers:
 *     _DllMainStartup @ 0x180003E00 (_DllMainStartup.c)
 * Callees:
 *     ?Shutdown@ProcessHeapImpl@WPF@@SAXXZ @ 0x180004F6C (-Shutdown@ProcessHeapImpl@WPF@@SAXXZ.c)
 */

__int64 AvDestroyProcessHeap()
{
  WPF::ProcessHeapImpl::Shutdown();
  return 0LL;
}
