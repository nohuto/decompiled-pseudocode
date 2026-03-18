/*
 * XREFs of _stricmp @ 0x14019FB50
 * Callers:
 *     ViSetRequestedOrderDependentAPIs @ 0x140327B58 (ViSetRequestedOrderDependentAPIs.c)
 *     ViThunkSnapSharedExportByName @ 0x140960284 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1409656C0 (VfCheckImageCompliance.c)
 *     ViSetRequestedAPIs @ 0x14096688C (ViSetRequestedAPIs.c)
 *     ViThunkFindAPIContextByName @ 0x1409765C4 (ViThunkFindAPIContextByName.c)
 *     HdlspBugCheckProcessing @ 0x14098BD28 (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1409FB5FC (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x140A0BF08 (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x140A0EFFC (CmpAppendSection.c)
 * Callees:
 *     __ascii_stricmp @ 0x14019FB00 (__ascii_stricmp.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
