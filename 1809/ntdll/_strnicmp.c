/*
 * XREFs of _strnicmp @ 0x180091390
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     SbpLookup @ 0x1801117AC (SbpLookup.c)
 * Callees:
 *     __ascii_strnicmp @ 0x180091328 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)String1, (unsigned __int8 *)String2, MaxCount);
}
