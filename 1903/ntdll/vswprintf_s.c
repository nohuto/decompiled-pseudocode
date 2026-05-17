/*
 * XREFs of vswprintf_s @ 0x180098020
 * Callers:
 *     swprintf_s @ 0x180097FF0 (swprintf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  int result; // eax

  if ( !Buffer || !BufferCount || !Format )
    goto LABEL_6;
  result = sub_180099E2C(Buffer, BufferCount, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Buffer = 0;
  if ( result == -2 )
LABEL_6:
    sub_18008C6D8();
  return -1;
}
