/*
 * XREFs of sscanf_s @ 0x18009B250
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180087E00 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     _sinput_s @ 0x18009D4EC (_sinput_s.c)
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
    return sinput_s(Buffer, v4, Format, va);
  }
  else
  {
    invalid_parameter();
    return -1;
  }
}
