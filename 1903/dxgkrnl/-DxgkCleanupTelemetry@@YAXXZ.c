/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C00486E0
 * Callers:
 *     DxgkUnload @ 0x1C023A4B0 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C02D11A4 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1C00A1818 = 0;
  EtwUnregister(qword_1C00A1918);
  qword_1C00A1918 = 0LL;
  dword_1C00A18F8 = 0;
  EtwUnregister(qword_1C00A18E0);
  qword_1C00A18E0 = 0LL;
  dword_1C00A18C0 = 0;
  EtwUnregister(qword_1C00A1870);
  qword_1C00A1870 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  EtwUnregister(qword_1C00A1950);
  qword_1C00A1950 = 0LL;
  dword_1C00A1930 = 0;
}
