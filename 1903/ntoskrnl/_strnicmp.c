/*
 * XREFs of _strnicmp @ 0x14019FC00
 * Callers:
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409FB4E8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     CmpProcessForSimpleStringSub @ 0x1409FB6A8 (CmpProcessForSimpleStringSub.c)
 *     CmpAppendSection @ 0x140A0EFFC (CmpAppendSection.c)
 *     IopStoreArcInformation @ 0x140A1F3E8 (IopStoreArcInformation.c)
 * Callees:
 *     __ascii_strnicmp @ 0x14019FB98 (__ascii_strnicmp.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return _ascii_strnicmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
