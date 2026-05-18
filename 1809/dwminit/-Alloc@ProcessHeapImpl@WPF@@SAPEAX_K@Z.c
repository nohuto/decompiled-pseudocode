/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x180004F7C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180004FC0 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc()
{
  return HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
}
