/*
 * XREFs of USBHwFreePipes @ 0x1C0029F9C
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C00297EC (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderClosePin @ 0x1C002EA50 (USBType1RenderClosePin.c)
 *     USBCaptureClosePin @ 0x1C002F110 (USBCaptureClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreePipes(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 72);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 72) = 0LL;
  }
}
