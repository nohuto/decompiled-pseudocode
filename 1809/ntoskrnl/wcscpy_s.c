/*
 * XREFs of wcscpy_s @ 0x14019BCC0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x1406BC030 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140711AA4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140711BC4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407142FC (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x1407223DC (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x1407FB204 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FBD58 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BC4 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x1408A4F50 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1408A6190 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A62B4 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD560 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1408CFC28 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1408CFFF8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1408D02C8 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D0398 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D0558 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1408D1048 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1408D280C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x1408F1780 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14094C904 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176800 (xHalTimerWatchdogStop.c)
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
