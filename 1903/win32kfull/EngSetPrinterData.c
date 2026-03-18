/*
 * XREFs of EngSetPrinterData @ 0x1C02857A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __stdcall EngSetPrinterData(
        HANDLE hPrinter,
        LPWSTR pType,
        DWORD dwType,
        LPBYTE lpbPrinterData,
        DWORD cjPrinterData)
{
  EngSetLastError(0x32u);
  return 50;
}
