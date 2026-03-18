/*
 * XREFs of ObpUnlockDirectory @ 0x140003F00
 * Callers:
 *     ObpReleaseLookupContext @ 0x140003EC4 (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x1405C63B0 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BF0C0 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BF214 (ObpLookupDirectoryUsingHash.c)
 *     NtSetInformationObject @ 0x1406C7830 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406C7B00 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
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
