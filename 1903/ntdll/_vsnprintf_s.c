/*
 * XREFs of _vsnprintf_s @ 0x180096FB0
 * Callers:
 *     _snprintf_s @ 0x180096F80 (_snprintf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180098E98 @ 0x180098E98 (sub_180098E98.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
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
    result = sub_180098E98(Buffer, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_180098E98(Buffer, BufferCount, Format, ArgList);
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
