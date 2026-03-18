/*
 * XREFs of AslFileMappingDelete @ 0x14070C268
 * Callers:
 *     SdbCloseDatabaseRead @ 0x14070ACC0 (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x14070C138 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x14074C3F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140775578 (SdbpCheckKObject.c)
 *     AslFileMappingCreateFromImageView @ 0x140779848 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x1409213F4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922724 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140922B10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1401544C8 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    RtlFileMapFree(P + 1);
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
