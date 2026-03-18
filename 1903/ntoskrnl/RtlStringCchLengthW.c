/*
 * XREFs of RtlStringCchLengthW @ 0x140099EFC
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140313034 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1403132D4 (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PiUEventHandleRegistration @ 0x140667FE4 (PiUEventHandleRegistration.c)
 *     PnpValidateMultiSz @ 0x1406688EC (PnpValidateMultiSz.c)
 *     PiUEventCopyEventData @ 0x140668CB0 (PiUEventCopyEventData.c)
 *     PnpConcatPWSTR @ 0x140668EC4 (PnpConcatPWSTR.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14066A7A0 (PiUEventProcessBroadcastNotifications.c)
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x1407332E8 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407646CC (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x14077BB1C (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x14077D144 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x14077D328 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084BF40 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872974 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408B9F50 (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408BAAC0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x1408D1534 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140927004 (AslPathCombine.c)
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
