/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C0033630
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedInternal(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExEnterPriorityRegionAndAcquireResourceShared();
  return result;
}
