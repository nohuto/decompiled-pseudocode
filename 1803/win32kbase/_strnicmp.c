/*
 * XREFs of _strnicmp @ 0x1C00740FC
 * Callers:
 *     ldevLoadImage @ 0x1C0053150 (ldevLoadImage.c)
 *     rimLoadImage @ 0x1C00F112C (rimLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C0074098 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
