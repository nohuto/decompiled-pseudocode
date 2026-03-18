/*
 * XREFs of ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0051B6C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0156810 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

void DbgPrintWarning(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 1u, Format, va);
}
