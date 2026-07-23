/*
 * XREFs of _strnicmp @ 0x1401955D0
 * Callers:
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x1407FEEC4 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409C058C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1409C0748 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x1409D01E4 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x1409DD2D4 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x140195568 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
