/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1401B95B0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14072BC8C (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14072BE28 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0C8 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140905F10 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
