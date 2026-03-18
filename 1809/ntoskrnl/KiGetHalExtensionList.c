/*
 * XREFs of KiGetHalExtensionList @ 0x1409DF4B0
 * Callers:
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2544LL;
}
