/*
 * XREFs of _vsnwprintf_s @ 0x1800970C0
 * Callers:
 *     _snwprintf_s @ 0x180097090 (_snwprintf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 */

int __cdecl vsnwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !Buffer )
    {
LABEL_12:
      sub_18008C6D8();
      return -1;
    }
  }
  else if ( !Buffer )
  {
    if ( !BufferCount )
      return 0;
    goto LABEL_12;
  }
  if ( !BufferCount )
    goto LABEL_12;
  if ( BufferCount > MaxCount )
  {
    result = sub_180099E2C(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_180099E2C(Buffer, BufferCount, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1LL )
    return -1;
LABEL_11:
  *Buffer = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}
