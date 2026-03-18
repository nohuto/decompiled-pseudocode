/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C0041710
 * Callers:
 *     DxgkUnload @ 0x1C0208940 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C029E794 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1C008D7C8 = 0;
  EtwUnregister(qword_1C008D8C8);
  qword_1C008D8C8 = 0LL;
  dword_1C008D8A8 = 0;
  EtwUnregister(qword_1C008D890);
  qword_1C008D890 = 0LL;
  dword_1C008D870 = 0;
  EtwUnregister(qword_1C008D820);
  qword_1C008D820 = 0LL;
  hProvider = 0;
  TlgUnregisterAggregateProvider();
  EtwUnregister(qword_1C008D900);
  qword_1C008D900 = 0LL;
  dword_1C008D8E0 = 0;
}
