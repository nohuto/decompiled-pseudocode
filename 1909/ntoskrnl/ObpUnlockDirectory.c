/*
 * XREFs of ObpUnlockDirectory @ 0x140003F90
 * Callers:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x1405C68B0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x1406B3490 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B3760 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BECC4 (ObpLookupDirectoryUsingHash.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  ExReleasePushLockEx(a1 + 296, 0LL);
  v3 = *(void **)a2;
  *(_DWORD *)(a2 + 32) = -286387660;
  ObfDereferenceObject(v3);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
