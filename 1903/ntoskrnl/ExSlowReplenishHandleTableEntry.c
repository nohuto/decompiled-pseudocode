/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x14007ED40
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0680 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return 0LL;
  result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
  *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  return result;
}
