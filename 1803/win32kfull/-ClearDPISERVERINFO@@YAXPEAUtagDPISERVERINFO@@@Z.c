/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00539F8
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C00538F0 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C0053960 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C0053A30 (DeleteMetricsFont.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
