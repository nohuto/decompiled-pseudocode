/*
 * XREFs of USBHwAllocateAndBag @ 0x1C0028A9C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C00291CC (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002A028 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002ADCC (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002B660 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002B980 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002C300 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002D100 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002E0C8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C002E67C (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C002F4C8 (USBMidiInPipePrimer.c)
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
