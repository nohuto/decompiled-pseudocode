/*
 * XREFs of ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C0150510
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C0125B28 (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 */

__int64 __fastcall DxgkCddDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, const GUID *a3)
{
  return DxgkDestroyPagingQueueInternal(a1, 0, a3);
}
