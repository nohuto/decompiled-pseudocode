/*
 * XREFs of _o___stdio_common_vswprintf_0 @ 0x1800615FA
 * Callers:
 *     _vsnwprintf @ 0x180061814 (_vsnwprintf.c)
 *     _vscwprintf @ 0x1800618E0 (_vscwprintf.c)
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
