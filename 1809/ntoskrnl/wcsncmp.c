/*
 * XREFs of wcsncmp @ 0x1401977E0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1401B5E00 (LdrpCompareResourceNamesWithValidation.c)
 *     EtwpApplyPredicate @ 0x140318910 (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140660124 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14068A040 (LdrpResCompareResourceNames.c)
 *     WmipFindISinGEbyName @ 0x140708518 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x1407195B4 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x140722474 (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408696B0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14086ABFC (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x14086B864 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x14086BAF4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x1408E9F3C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x1408EBB58 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
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
