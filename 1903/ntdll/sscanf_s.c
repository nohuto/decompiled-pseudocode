/*
 * XREFs of sscanf_s @ 0x180097AF0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180072600 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180099D8C @ 0x180099D8C (sub_180099D8C.c)
 */

int sscanf_s(const char *const Buffer, const char *const Format, ...)
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
    return sub_180099D8C(Buffer, v4, Format, va);
  }
  else
  {
    sub_18008C6D8();
    return -1;
  }
}
