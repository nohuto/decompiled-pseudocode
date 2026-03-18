/*
 * XREFs of wcscpy_s @ 0x1401A6530
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B22DC (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1405B2660 (LocalGetStringForControl.c)
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x140734D00 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x14073BBE8 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14073BD24 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14073E70C (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x14074C46C (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x1408345C0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140835168 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x14086F554 (PnprGetPluginDriverImagePath.c)
 *     LocalGetStringForSid @ 0x1408E38B8 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x14090AB30 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x14090D3E8 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14090D7D4 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14090DAA4 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14090DB74 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14090DD3C (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14090E898 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x140910080 (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x14092F410 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
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
