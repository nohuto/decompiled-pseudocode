/*
 * XREFs of memcpy_0 @ 0x180009BB8
 * Callers:
 *     CempGetTokenHostInfo @ 0x180004390 (CempGetTokenHostInfo.c)
 *     RmpClientWnfSubscriptionWorker @ 0x180004CC0 (RmpClientWnfSubscriptionWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
