/*
 * XREFs of BiZwSetValueKey @ 0x140178214
 * Callers:
 *     BiSetRegistryValue @ 0x140740078 (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
