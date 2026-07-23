/*
 * XREFs of _stricmp @ 0x140195520
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1409220B8 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409281A4 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x14094CD1C (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1409C069C (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x1409C32E8 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x1409D01E4 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x1401954CC (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
