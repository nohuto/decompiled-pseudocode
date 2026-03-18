/*
 * XREFs of RtlStringCchLengthW @ 0x1400EDF4C
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140312A84 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x140312D24 (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     PnpValidateMultiSz @ 0x140695D0C (PnpValidateMultiSz.c)
 *     PiUEventCopyEventData @ 0x1406960D0 (PiUEventCopyEventData.c)
 *     PnpConcatPWSTR @ 0x1406962E4 (PnpConcatPWSTR.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140697670 (PiUEventProcessBroadcastNotifications.c)
 *     AslStringDuplicate @ 0x14070D108 (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x140735548 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407691CC (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x14077E3EC (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x14077FC48 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408B9820 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408BA390 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1408D0E34 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140926A64 (AslPathCombine.c)
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
