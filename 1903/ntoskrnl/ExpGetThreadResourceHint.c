/*
 * XREFs of ExpGetThreadResourceHint @ 0x1400D8CF0
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400D7ED0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 649);
}
