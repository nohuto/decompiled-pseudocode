/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C024E870
 * Callers:
 *     <none>
 * Callees:
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C024E888 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkSubmitWaitForSyncObjectsToHwQueueInternal(a1, a2);
}
