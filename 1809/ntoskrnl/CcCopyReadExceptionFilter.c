/*
 * XREFs of CcCopyReadExceptionFilter @ 0x140269624
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1900 (CcCopyBytesToUserBuffer.c)
 *     CcCompleteAsyncRead @ 0x1400DF314 (CcCompleteAsyncRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
