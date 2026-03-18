/*
 * XREFs of DxgkDestroyHwQueue @ 0x1C024C3C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyHwQueueInternal @ 0x1C024C3D8 (DxgkDestroyHwQueueInternal.c)
 */

__int64 __fastcall DxgkDestroyHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkDestroyHwQueueInternal(a1, a2);
}
