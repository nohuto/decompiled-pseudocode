/*
 * XREFs of AslFileMappingDelete @ 0x14067E964
 * Callers:
 *     AslFileMappingCreate @ 0x14067E47C (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14067E7FC (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140680A94 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreateFromImageView @ 0x14071F230 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingFiles @ 0x140721450 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140722D80 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1408E59D4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E65E4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E69E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1400F5144 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
