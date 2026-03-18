/*
 * XREFs of KiGetLoadOptions @ 0x140A230AC
 * Callers:
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
