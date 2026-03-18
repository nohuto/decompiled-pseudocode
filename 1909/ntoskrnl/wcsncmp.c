/*
 * XREFs of wcsncmp @ 0x1401A2770
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1401C0434 (LdrpCompareResourceNamesWithValidation.c)
 *     EtwpApplyPredicate @ 0x140336EAC (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14062C860 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x140677448 (LdrpResCompareResourceNames.c)
 *     WmipFindISinGEbyName @ 0x140735640 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x14074CF74 (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408A66FC (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408A73A4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408A7634 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x14092676C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x1409282F0 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
