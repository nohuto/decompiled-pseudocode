/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1405A3348
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1405A32C0 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x14067DD08 (SdbGetDatabaseID.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_8;
  }
  if ( *a2 == 2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      781,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx");
    return v2;
  }
LABEL_4:
  if ( !(unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      791,
      (unsigned int)"Failed to get the database ID");
  return 1;
}
