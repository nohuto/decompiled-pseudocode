/*
 * XREFs of DbgPrintRIM @ 0x1C00DDAEC
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0101414 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIM(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 1u, Format, va);
}
