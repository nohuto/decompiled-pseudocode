/*
 * XREFs of USBHwAllocateAndBag @ 0x1C0029C6C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002A3AC (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B354 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002C12C (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002C9D4 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002CCF0 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002D670 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C002E48C (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C002F398 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C002F95C (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C003084C (USBMidiInPipePrimer.c)
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
