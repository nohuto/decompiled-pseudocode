/*
 * XREFs of DxgkDestroyPagingQueue @ 0x1C00F0280
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00EFD68 (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, const GUID *a3)
{
  return DxgkDestroyPagingQueueInternal(a1, 1, a3);
}
