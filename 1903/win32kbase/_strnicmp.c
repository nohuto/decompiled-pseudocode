/*
 * XREFs of _strnicmp @ 0x1C00BB4D4
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0048FBC (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     rimLoadImage @ 0x1C005C910 (rimLoadImage.c)
 *     ivrLoadImage @ 0x1C018E49C (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00BB470 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
