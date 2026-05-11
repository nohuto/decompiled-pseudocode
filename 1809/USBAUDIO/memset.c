/*
 * XREFs of memset @ 0x1C00113C0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00018D0 (McGenControlCallbackV2.c)
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001BE0 (EvaluateCurrentStateFromRegistry.c)
 *     DeviceCreate @ 0x1C0001DC0 (DeviceCreate.c)
 *     WmiLogEvent @ 0x1C0002640 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0002764 (WmiLogStreamPosition.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0003D30 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0004584 (USBType1BuildIsochUrbRequest.c)
 *     USBMidiInResetEventQueues @ 0x1C0006C9C (USBMidiInResetEventQueues.c)
 *     InitializeSideband @ 0x1C0007448 (InitializeSideband.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0008050 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEC8 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DE8C (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C000E750 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C000E9D4 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C000EBF8 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C000F0E8 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     USBD_QueryUsbCapability @ 0x1C000F4C4 (USBD_QueryUsbCapability.c)
 *     WppTraceCallback @ 0x1C001F010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C00206A4 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C0020C80 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0021660 (PinBuildDescriptors.c)
 *     TopologyProcessFeatureUnit @ 0x1C00228B0 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x1C0022DE0 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C0023EB4 (TopologyBuildFilterTopology.c)
 *     BusApiBuildFunctionUnit @ 0x1C00276D0 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C0027F20 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C0029090 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002A028 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseMixerUnit @ 0x1C002B980 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C002BD40 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C002CE9C (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002D100 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002E0C8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C002E23C (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C002EB44 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C002F3D8 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C002FB0C (USBMidiOutAllocateRequest.c)
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
