/*
 * XREFs of memchr_0 @ 0x1800CB0F5
 * Callers:
 *     _Stoulx @ 0x1800AE450 (_Stoulx.c)
 *     _Stoullx @ 0x1800AEF50 (_Stoullx.c)
 *     _Stoxflt @ 0x1800B58D4 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
