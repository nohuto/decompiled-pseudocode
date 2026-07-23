/*
 * XREFs of RtlStringCchLengthW @ 0x14000733C
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F46A8 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1402F4948 (RtlpNameprepAsciiRealWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     PiUEventCopyEventData @ 0x1405A0B98 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     PnpValidateMultiSz @ 0x14068C658 (PnpValidateMultiSz.c)
 *     PnpConcatPWSTR @ 0x1406FDD28 (PnpConcatPWSTR.c)
 *     WmipMangleInstanceName @ 0x1407096A0 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x14073D818 (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x140756F4C (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140757F58 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1408945C4 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x1408EB4D4 (AslPathCombine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    for ( i = cchMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( i )
        *pcchLength = cchMax - i;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
