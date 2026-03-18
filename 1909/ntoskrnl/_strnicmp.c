/*
 * XREFs of _strnicmp @ 0x1401A0320
 * Callers:
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140836764 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409FB3F8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1409FB5B8 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140A0F794 (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140A1F5C8 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x1401A02B8 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
