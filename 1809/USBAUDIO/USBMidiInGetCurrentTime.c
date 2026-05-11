/*
 * XREFs of USBMidiInGetCurrentTime @ 0x1C0002E9C
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x1C0002EF0 (UsbHwFrameCountTimestamp.c)
 *     USBHwGetClockRatio @ 0x1C0003050 (USBHwGetClockRatio.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C0003760 (USBType1AdjustPositionWithin1Ms.c)
 *     USBType1RenderBytePosition @ 0x1C0003820 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C00061C0 (USBCaptureBytePosition.c)
 *     USBMIDIInReQueueUrb @ 0x1C0006690 (USBMIDIInReQueueUrb.c)
 *     USBMidiInStateChangePin @ 0x1C0006D70 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

unsigned __int64 USBMidiInGetCurrentTime()
{
  LARGE_INTEGER v0; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return ((10000000 * HIDWORD(v0.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
       + (((10000000 * HIDWORD(v0.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
        + 10000000LL * v0.LowPart)
       / PerformanceFrequency.QuadPart;
}
