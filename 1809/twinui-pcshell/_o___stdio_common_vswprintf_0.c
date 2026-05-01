/*
 * XREFs of _o___stdio_common_vswprintf_0 @ 0x180084FCE
 * Callers:
 *     _vsnwprintf @ 0x18008516C (_vsnwprintf.c)
 *     _scwprintf @ 0x18008522C (_scwprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vswprintf_0(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
