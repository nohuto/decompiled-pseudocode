/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00BEF48
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C00BEE40 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00BEEB0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00BEF80 (DeleteMetricsFont.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
