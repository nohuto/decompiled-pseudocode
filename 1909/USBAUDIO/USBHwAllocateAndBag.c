/*
 * XREFs of USBHwAllocateAndBag @ 0x1C0029C8C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002A3CC (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B374 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002C14C (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002C9F4 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002CD10 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002D690 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002E4AC (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002F3B8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C002F97C (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C003086C (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx

  v3 = KsAddItemToObjectBag(a2, *a1, ExFreePool);
  if ( v3 < 0 )
    ExFreePool(*a1);
  return (unsigned int)v3;
}
