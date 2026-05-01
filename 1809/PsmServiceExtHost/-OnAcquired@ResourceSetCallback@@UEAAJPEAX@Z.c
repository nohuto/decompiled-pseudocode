/*
 * XREFs of ?OnAcquired@ResourceSetCallback@@UEAAJPEAX@Z @ 0x180055240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallback::OnAcquired(ResourceSetCallback *this, void *a2)
{
  return ResourceSetCallback::SendData(this, a2, 0LL, 0LL);
}
