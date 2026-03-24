/*
 * XREFs of _strnicmp @ 0x140195490
 * Callers:
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCC4 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409BF58C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1409BF748 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x1409CF1E4 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x140195428 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
