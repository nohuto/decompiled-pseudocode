/*
 * XREFs of _memicmp @ 0x180090D60
 * Callers:
 *     <none>
 * Callees:
 *     __ascii_memicmp @ 0x180090CF0 (__ascii_memicmp.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
