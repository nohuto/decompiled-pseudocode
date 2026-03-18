/*
 * XREFs of wcscat_s @ 0x14019BC00
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     NtLockProductActivationKeys @ 0x1406BC050 (NtLockProductActivationKeys.c)
 *     BcdGetSystemStorePath @ 0x140711AC4 (BcdGetSystemStorePath.c)
 *     AslPathToNetworkPathNt @ 0x1407223FC (AslPathToNetworkPathNt.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD580 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D03B8 (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x1409F9774 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  signed __int64 v4; // r9
  wchar_t v5; // ax
  errno_t v6; // ebx

  if ( Dst && SizeInWords )
  {
    if ( !Src )
      goto LABEL_14;
    v3 = Dst;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( SizeInWords )
    {
      v4 = (char *)v3 - (char *)Src;
      do
      {
        v5 = *Src;
        *(const wchar_t *)((char *)Src + v4) = *Src;
        ++Src;
        if ( !v5 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
      if ( SizeInWords )
        return 0;
      v6 = 34;
    }
    else
    {
LABEL_14:
      v6 = 22;
    }
    *Dst = 0;
    xHalTimerWatchdogStop();
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
