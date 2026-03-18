/*
 * XREFs of ?DbgPrintWarning@@YAXPEADZZ @ 0x1C005CC40
 * Callers:
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0154618 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

void DbgPrintWarning(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 1u, Format, va);
}
