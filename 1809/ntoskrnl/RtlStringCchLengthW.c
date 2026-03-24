/*
 * XREFs of RtlStringCchLengthW @ 0x14000733C
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F44B8 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1402F4758 (RtlpNameprepAsciiRealWorker.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058EB9C (PiUEventProcessBroadcastNotifications.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     PiUEventCopyEventData @ 0x14059FB98 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x140655BE4 (PiUEventHandleRegistration.c)
 *     AslStringDuplicate @ 0x14067C4C4 (AslStringDuplicate.c)
 *     PnpValidateMultiSz @ 0x14068B498 (PnpValidateMultiSz.c)
 *     PnpConcatPWSTR @ 0x1406FCA88 (PnpConcatPWSTR.c)
 *     WmipMangleInstanceName @ 0x140708400 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x14073A090 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x14073C628 (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x140755D5C (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140756B84 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x140756D68 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408124F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x1408242F0 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E04 (PiCMGenerateDeviceInstance.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140893364 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x1408EA214 (AslPathCombine.c)
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
