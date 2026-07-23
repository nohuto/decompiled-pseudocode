/*
 * XREFs of wcscpy_s @ 0x14019BE00
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x1406BD2D0 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140712D44 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140712E64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x14072367C (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407FCF58 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x140835E24 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1408A73F0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1408D0EE8 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1408D12B8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1408D1588 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D1658 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D1818 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1408D2308 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1408D3ACC (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14094D904 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
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
