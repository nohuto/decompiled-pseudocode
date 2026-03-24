/*
 * XREFs of BiZwSetValueKey @ 0x14016E64C
 * Callers:
 *     BiSetRegistryValue @ 0x140713D84 (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x1401B8D90 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
