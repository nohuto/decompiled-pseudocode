/*
 * XREFs of KiGetLoadOptions @ 0x1409DF660
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
