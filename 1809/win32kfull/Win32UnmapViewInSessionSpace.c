/*
 * XREFs of Win32UnmapViewInSessionSpace @ 0x1C01D57CC
 * Callers:
 *     ?Close@PROXYPORT@@QEAAXXZ @ 0x1C010F280 (-Close@PROXYPORT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32UnmapViewInSessionSpace(void *a1)
{
  return MmUnmapViewInSessionSpace(a1);
}
