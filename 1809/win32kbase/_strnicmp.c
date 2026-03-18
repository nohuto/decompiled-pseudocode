/*
 * XREFs of _strnicmp @ 0x1C00A68C4
 * Callers:
 *     rimLoadImage @ 0x1C00071D8 (rimLoadImage.c)
 *     ldevLoadImage @ 0x1C00542D0 (ldevLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00A6860 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
