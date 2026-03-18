/*
 * XREFs of _snprintf_s @ 0x14019AB30
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1408966F0 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x14019AB60 (_vsnprintf_s.c)
 */

int snprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(DstBuf, SizeInBytes, MaxCount, Format, va);
}
