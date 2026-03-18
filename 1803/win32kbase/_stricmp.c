/*
 * XREFs of _stricmp @ 0x1C0074260
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0079FAC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     __ascii_stricmp @ 0x1C0074218 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
