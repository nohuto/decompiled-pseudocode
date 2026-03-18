/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x1401C20B0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14074FBF0 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14074FD9C (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140750054 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateDirectoryObjectEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
