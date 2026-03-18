/*
 * XREFs of GetFreeReservedQueueIndex @ 0x1C000ED84
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1C000EF28 (IoctlCreateReservedQueuePair.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C00177B8 (NVMeReservedCompletionQueueCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFreeReservedQueueIndex(__int64 a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx

  v1 = *(_WORD *)(a1 + 806);
  v2 = 0;
  if ( !v1 )
    return 0xFFFFLL;
  while ( *(_WORD *)(32LL * v2 + *(_QWORD *)(a1 + 784) + 16) )
  {
    if ( ++v2 >= v1 )
      return 0xFFFFLL;
  }
  return v2;
}
