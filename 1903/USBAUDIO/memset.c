/*
 * XREFs of memset @ 0x1C0012700
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00018D0 (McGenControlCallbackV2.c)
 *     DeviceCreate @ 0x1C0001BE0 (DeviceCreate.c)
 *     WmiLogEvent @ 0x1C00024A0 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C00025BC (WmiLogStreamPosition.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0003C00 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0004484 (USBType1BuildIsochUrbRequest.c)
 *     USBMidiInResetEventQueues @ 0x1C0006D7C (USBMidiInResetEventQueues.c)
 *     InitializeSideband @ 0x1C0007528 (InitializeSideband.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0008210 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C0009D04 (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C994 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F074 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C000FA40 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C000FCD0 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C000FEF4 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C00103EC (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_QueryUsbCapability @ 0x1C00107C8 (USBD_QueryUsbCapability.c)
 *     _handle_error @ 0x1C0011038 (_handle_error.c)
 *     RaiseException @ 0x1C0011280 (RaiseException.c)
 *     WppTraceCallback @ 0x1C0020010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C00217E4 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C0021E00 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0022820 (PinBuildDescriptors.c)
 *     TopologyProcessMixerUnit @ 0x1C0023F80 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C002503C (TopologyBuildFilterTopology.c)
 *     PropertyGetAudioPosition @ 0x1C00257D0 (PropertyGetAudioPosition.c)
 *     RegistryReadName @ 0x1C0028054 (RegistryReadName.c)
 *     RegistryCreateMediaCategoriesKey @ 0x1C0028230 (RegistryCreateMediaCategoriesKey.c)
 *     RegistryGetIdleInfo @ 0x1C00285EC (RegistryGetIdleInfo.c)
 *     BusApiBuildFunctionUnit @ 0x1C0028864 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C00290B0 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002A270 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002AF40 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B354 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002C12C (USBParseGetMicArrayDescriptor.c)
 *     USBParseMixerUnit @ 0x1C002CCF0 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C002D0B0 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002E20C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002E48C (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002F398 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C002F520 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C002FE64 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0030758 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C0030E8C (USBMidiOutAllocateRequest.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
