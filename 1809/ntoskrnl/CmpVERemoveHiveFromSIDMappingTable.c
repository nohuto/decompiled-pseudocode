/*
 * XREFs of CmpVERemoveHiveFromSIDMappingTable @ 0x140581888
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 * Callees:
 *     KeAcquireGuardedMutex @ 0x140005320 (KeAcquireGuardedMutex.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CmpVERemoveHiveFromSIDMappingTable(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 4152) & 2) != 0 )
  {
    KeAcquireGuardedMutex(&CmpSIDMappingLock);
    v2 = 0;
    if ( CmpSIDToHiveMappingCount )
    {
      v3 = (char *)CmpSIDToHiveMapping + 24;
      do
      {
        if ( *v3 == a1 )
          break;
        ++v2;
        v3 += 4;
      }
      while ( v2 < CmpSIDToHiveMappingCount );
    }
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)CmpSIDToHiveMapping + v4 + 8), 0);
    memmove(
      (char *)CmpSIDToHiveMapping + v4,
      (char *)CmpSIDToHiveMapping + 32 * v2 + 32,
      32LL * (--CmpSIDToHiveMappingCount - v2));
    KeReleaseGuardedMutex(&CmpSIDMappingLock);
  }
}
