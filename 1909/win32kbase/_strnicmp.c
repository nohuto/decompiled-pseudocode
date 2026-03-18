/*
 * XREFs of _strnicmp @ 0x1C00B8474
 * Callers:
 *     rimLoadImage @ 0x1C005E590 (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C006B69C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     ivrLoadImage @ 0x1C018C2AC (ivrLoadImage.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1C00B8410 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
