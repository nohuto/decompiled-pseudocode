/*
 * XREFs of _stricmp @ 0x1401953C0
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1409210B8 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409271A4 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x14094BD1C (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1409BF69C (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x1409C22E8 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x1409CF1E4 (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x14019536C (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
