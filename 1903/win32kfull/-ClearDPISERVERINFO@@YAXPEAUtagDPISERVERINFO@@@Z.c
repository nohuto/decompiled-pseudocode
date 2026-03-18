/*
 * XREFs of ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C00E3F18
 * Callers:
 *     ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C00E3E10 (-DestroyDpiMetricsCache@@YAXXZ.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C00E3E80 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00E3F50 (DeleteMetricsFont.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall ClearDPISERVERINFO(struct tagDPISERVERINFO *a1)
{
  DeleteMetricsFont(*((_QWORD *)a1 + 1));
  DeleteMetricsFont(*((_QWORD *)a1 + 3));
  memset(a1, 0, 0x68uLL);
}
