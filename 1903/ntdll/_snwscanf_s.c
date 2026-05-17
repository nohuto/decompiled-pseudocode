/*
 * XREFs of _snwscanf_s @ 0x180097170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_18009AD10 @ 0x18009AD10 (sub_18009AD10.c)
 */

int snwscanf_s(const wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format )
    return sub_18009AD10(Buffer, BufferCount, Format, (__int64 *)va);
  sub_18008C6D8();
  return -1;
}
