/*
 * XREFs of KiGetHalExtensionList @ 0x140A22F34
 * Callers:
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 240) + 2568LL;
}
