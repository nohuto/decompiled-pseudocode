/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C013CC38
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C013CB30 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C013CBA0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C013CC70 (DeleteMetricsFont.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
