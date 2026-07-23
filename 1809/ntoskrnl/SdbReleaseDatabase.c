/*
 * XREFs of SdbReleaseDatabase @ 0x140681C9C
 * Callers:
 *     PiLookupInDDB @ 0x14067FFCC (PiLookupInDDB.c)
 *     KsepShimDbUnmapFromMemory @ 0x140684790 (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x1407515B4 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x140751668 (PpReleaseBootDDB.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbCloseDatabaseRead @ 0x140681C54 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x140681DE4 (SdbpCleanupLocalDatabaseSupport.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

void __fastcall SdbReleaseDatabase(_QWORD *P)
{
  _QWORD *v2; // rcx
  _QWORD **v3; // r8

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 82, (unsigned int)"Enter.");
  if ( *((_DWORD *)P + 248) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(P[125] + 1000LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(P[125] + 1000LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        99,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 250) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(P);
    if ( (P[15] & 2) != 0 )
      SdbCloseDatabaseRead((_QWORD *)P[14]);
    v2 = (_QWORD *)P[1];
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    while ( 1 )
    {
      v3 = (_QWORD **)P[71];
      if ( !v3 )
        break;
      if ( v3[1] == v3 )
      {
        P[71] = 0LL;
      }
      else
      {
        P[71] = *v3;
        *v3[1] = *v3;
        (*v3)[1] = v3[1];
      }
      ExFreePoolWithTag(v3, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag(P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    113,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
