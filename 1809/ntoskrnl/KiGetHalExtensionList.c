/*
 * XREFs of KiGetHalExtensionList @ 0x1409E04B0
 * Callers:
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2544LL;
}
