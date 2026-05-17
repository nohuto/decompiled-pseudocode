/*
 * XREFs of _snscanf_s @ 0x180097050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180099D8C @ 0x180099D8C (sub_180099D8C.c)
 */

int snscanf_s(const char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_180099D8C(Buffer, BufferCount, Format, (__int64 *)va);
  sub_18008C6D8();
  return -1;
}
