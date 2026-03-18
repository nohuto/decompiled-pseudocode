/*
 * XREFs of wcscpy_s @ 0x14019BCA0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x1406BC050 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140711AC4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140711BE4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071431C (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x1407223FC (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x1407FB224 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD78 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BE4 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1408A61B0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A62D4 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD580 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1408CFC48 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1408D0018 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1408D02E8 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D03B8 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D0578 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1408D1068 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1408D282C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x1408F17A0 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14094C904 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = (char *)Dst - (char *)Src;
    do
    {
      v6 = *Src;
      *(const wchar_t *)((char *)Src + v5) = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
