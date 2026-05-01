/*
 * XREFs of _memcpy @ 0x1000D14E
 * Callers:
 *     _CempGetTokenHostInfo@8 @ 0x10005D60 (_CempGetTokenHostInfo@8.c)
 *     _RmpClientWnfSubscriptionWorker@28 @ 0x10006A50 (_RmpClientWnfSubscriptionWorker@28.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return _memcpy(a1, Src, Size);
}
