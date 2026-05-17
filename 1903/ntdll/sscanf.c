/*
 * XREFs of sscanf @ 0x180090F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090F7C @ 0x180090F7C (sub_180090F7C.c)
 */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, Format);
  return sub_180090F7C((unsigned int)sub_180095CA0, (_DWORD)Buffer, (_DWORD)Format, 0, (__int64)va);
}
