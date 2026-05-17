/*
 * XREFs of _memicmp @ 0x18008D640
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D5D0 @ 0x18008D5D0 (sub_18008D5D0.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return sub_18008D5D0((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
