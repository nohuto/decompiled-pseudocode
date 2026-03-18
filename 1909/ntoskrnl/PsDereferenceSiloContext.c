/*
 * XREFs of PsDereferenceSiloContext @ 0x14012E7D0
 * Callers:
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 *     ObpDeleteNameCheck @ 0x14063F4B0 (ObpDeleteNameCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     PspAssignSiloSystemRootPath @ 0x1408C4800 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5658 (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
