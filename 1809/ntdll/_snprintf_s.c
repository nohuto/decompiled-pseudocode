/*
 * XREFs of _snprintf_s @ 0x18009A6E0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x180087E00 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x18009A710 (_vsnprintf_s.c)
 */

int snprintf_s(char *const Buffer, const size_t BufferCount, const size_t MaxCount, const char *const Format, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(Buffer, BufferCount, MaxCount, Format, va);
}
