/*
 * XREFs of ApiSetInkProcessorIsInkDevice @ 0x1C0052A14
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
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
