/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C00A17C4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v4; // si
  unsigned int IsInkDevice; // ebx
  __int16 v7; // dx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      110,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  IsInkDevice = 0;
  if ( (int)IsInkProcessorIsInkDeviceSupported() >= 0 )
    IsInkDevice = InkProcessorIsInkDevice(a1, v4, a3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      111,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return IsInkDevice;
}
