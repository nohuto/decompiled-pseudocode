/*
 * XREFs of swscanf_s @ 0x180098080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_18009AD10 @ 0x18009AD10 (sub_18009AD10.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Buffer[v4] );
    return sub_18009AD10(Buffer, v4, Format, va);
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
