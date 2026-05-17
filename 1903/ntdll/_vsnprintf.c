/*
 * XREFs of _vsnprintf @ 0x18008E000
 * Callers:
 *     sub_180053DE8 @ 0x180053DE8 (sub_180053DE8.c)
 *     sub_180072F58 @ 0x180072F58 (sub_180072F58.c)
 *     sub_1800CE5DC @ 0x1800CE5DC (sub_1800CE5DC.c)
 * Callees:
 *     sub_18008E01C @ 0x18008E01C (sub_18008E01C.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return sub_18008E01C((_DWORD)Buffer, BufferCount, (_DWORD)Format, 0, (__int64)ArgList);
}
