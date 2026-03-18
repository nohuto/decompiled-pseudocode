/*
 * XREFs of DxgkCreateHwQueue @ 0x1C024B670
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateHwQueueInternal @ 0x1C024B688 (DxgkCreateHwQueueInternal.c)
 */

__int64 __fastcall DxgkCreateHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkCreateHwQueueInternal(a1, a2);
}
