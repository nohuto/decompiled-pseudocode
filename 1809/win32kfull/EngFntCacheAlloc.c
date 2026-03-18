/*
 * XREFs of EngFntCacheAlloc @ 0x1C026D5E0
 * Callers:
 *     <none>
 * Callees:
 *     EngFntCacheAllocInternal @ 0x1C026D5FC (EngFntCacheAllocInternal.c)
 */

PVOID __stdcall EngFntCacheAlloc(ULONG ulFastCheckSum, ULONG cjSize)
{
  char v3; // [rsp+40h] [rbp+18h] BYREF

  return (PVOID)EngFntCacheAllocInternal(ulFastCheckSum, cjSize, &v3);
}
