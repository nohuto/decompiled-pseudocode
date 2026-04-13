/*
 * XREFs of memchr_0 @ 0x1800CB285
 * Callers:
 *     _Stoulx @ 0x1800AE5E0 (_Stoulx.c)
 *     _Stoullx @ 0x1800AF0E0 (_Stoullx.c)
 *     _Stoxflt @ 0x1800B5A64 (_Stoxflt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memchr_0(const void *Buf, int Val, size_t MaxCount)
{
  return memchr(Buf, Val, MaxCount);
}
