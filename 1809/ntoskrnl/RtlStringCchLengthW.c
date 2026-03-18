/*
 * XREFs of RtlStringCchLengthW @ 0x14000733C
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F43B8 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1402F4658 (RtlpNameprepAsciiRealWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058EB9C (PiUEventProcessBroadcastNotifications.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     PiUEventCopyEventData @ 0x14059FB98 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x140655C04 (PiUEventHandleRegistration.c)
 *     AslStringDuplicate @ 0x14067C4E4 (AslStringDuplicate.c)
 *     PnpValidateMultiSz @ 0x14068B4B8 (PnpValidateMultiSz.c)
 *     PnpConcatPWSTR @ 0x1406FCAA8 (PnpConcatPWSTR.c)
 *     WmipMangleInstanceName @ 0x140708420 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x14073C648 (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x140755D7C (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140756BA4 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140756D88 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFE0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140893384 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x1408EA234 (AslPathCombine.c)
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
