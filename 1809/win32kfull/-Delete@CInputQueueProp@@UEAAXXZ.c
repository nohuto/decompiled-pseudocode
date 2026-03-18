/*
 * XREFs of ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1C011E460
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1C011E48C (-InvalidateInputQueues@CInputQueueProp@@IEAAXXZ.c)
 */

void __fastcall CInputQueueProp::Delete(CInputQueueProp *this)
{
  CInputQueueProp::InvalidateInputQueues(this);
  Win32FreePool(this);
}
