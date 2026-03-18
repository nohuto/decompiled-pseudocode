/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C0140C60
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetInkProcessorIsInkDevice(unsigned __int16 a1, unsigned __int16 a2, __int64 a3)
{
  if ( (int)IsInkProcessorIsInkDeviceSupported() < 0 )
    return 0LL;
  else
    return InkProcessorIsInkDevice(a1, a2, a3, 0LL);
}
