/*
 * XREFs of wcsncmp @ 0x1401A2050
 * Callers:
 *     EtwpApplyPredicate @ 0x14033744C (EtwpApplyPredicate.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140628A10 (PfSnFindPrefetchVolumeInfoInList.c)
 *     LdrpResCompareResourceNames @ 0x14067C158 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNames_U @ 0x1406C67F0 (LdrpCompareResourceNames_U.c)
 *     WmipFindISinGEbyName @ 0x1407333E0 (WmipFindISinGEbyName.c)
 *     pIoQueryBusDescription @ 0x140742B00 (pIoQueryBusDescription.c)
 *     AslPathClean @ 0x14074C4E4 (AslPathClean.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5B10 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408A6E9C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopProcessWakeSourceWork @ 0x1408A7B44 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceIsParent @ 0x1408A7DD4 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F8708 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathCleanUstr @ 0x140926D0C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140928890 (AslpPathWildcardMakeLeaves.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140940A6C (DrvDbSetDeviceIdDriverInfMatches.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
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
