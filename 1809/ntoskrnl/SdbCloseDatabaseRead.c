/*
 * XREFs of SdbCloseDatabaseRead @ 0x140681C54
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x140681C9C (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1408E9448 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408EA1B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x1408EB138 (AslHashFree.c)
 */

void __fastcall SdbCloseDatabaseRead(_QWORD *P)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = P[170];
  if ( v2 && *(_DWORD *)(v2 + 16) == 1 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0x74705041u);
      v2 = P[170];
    }
    if ( v2 )
      ExFreePoolWithTag((PVOID)v2, 0x74705041u);
    P[170] = 0LL;
    v4 = (void *)P[171];
    if ( v4 )
    {
      AslHashFree(v4);
      P[171] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v5 = (void *)P[1];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  AslFileMappingDelete((PVOID *)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}
