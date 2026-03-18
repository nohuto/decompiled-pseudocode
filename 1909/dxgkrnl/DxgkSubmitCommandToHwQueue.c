/*
 * XREFs of DxgkSubmitCommandToHwQueue @ 0x1C024C6A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8 (DxgkSubmitCommandToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueue(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1)
{
  return DxgkSubmitCommandToHwQueueInternal(a1);
}
