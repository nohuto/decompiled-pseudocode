/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140A22DA4
 * Callers:
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 ExInitializeHandleTablePackage()
{
  __int64 result; // rax

  HandleTableListLock = 0LL;
  qword_1409AEAE8 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  result = HalQueryMaximumProcessorCount();
  ExpFreeListCount = result;
  return result;
}
