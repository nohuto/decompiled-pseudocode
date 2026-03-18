/*
 * XREFs of EngGetPrinterDataFileName @ 0x1C0287A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetPrinterDataFileName(HDEV hdev)
{
  return (LPWSTR)*((_QWORD *)hdev + 188);
}
