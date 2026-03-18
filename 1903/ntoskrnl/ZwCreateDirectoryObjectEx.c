/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1401C1530
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14074F160 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14074F30C (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074F5C4 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
