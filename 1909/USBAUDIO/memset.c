/*
 * XREFs of memset @ 0x1C0012840
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
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CA24 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F1B0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C000FB80 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C000FE10 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0010034 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C001052C (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_QueryUsbCapability @ 0x1C0010908 (USBD_QueryUsbCapability.c)
 *     _handle_error @ 0x1C0011178 (_handle_error.c)
 *     RaiseException @ 0x1C00113C0 (RaiseException.c)
 *     WppTraceCallback @ 0x1C0020010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C0021804 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C0021E20 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0022840 (PinBuildDescriptors.c)
 *     TopologyProcessMixerUnit @ 0x1C0023FA0 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C002505C (TopologyBuildFilterTopology.c)
 *     PropertyGetAudioPosition @ 0x1C00257F0 (PropertyGetAudioPosition.c)
 *     RegistryReadName @ 0x1C0028074 (RegistryReadName.c)
 *     RegistryCreateMediaCategoriesKey @ 0x1C0028250 (RegistryCreateMediaCategoriesKey.c)
 *     RegistryGetIdleInfo @ 0x1C002860C (RegistryGetIdleInfo.c)
 *     BusApiBuildFunctionUnit @ 0x1C0028884 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C00290D0 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002A290 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002AF60 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B374 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002C14C (USBParseGetMicArrayDescriptor.c)
 *     USBParseMixerUnit @ 0x1C002CD10 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C002D0D0 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002E22C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002E4AC (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002F3B8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C002F540 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C002FE84 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0030778 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C0030EAC (USBMidiOutAllocateRequest.c)
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
