/*
 * XREFs of wcscpy_s @ 0x1401A6C50
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1405B2A3C (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x140736F60 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x14073DAE8 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073DC24 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14074060C (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x14074CEFC (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x140833C20 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1408347C8 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x14086EC54 (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14090CE48 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14090D234 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14090D504 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090D5D4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14090D79C (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14090E2F8 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14090FAE0 (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14092EE84 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
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
