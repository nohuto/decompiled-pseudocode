/*
 * XREFs of AslFileMappingDelete @ 0x14067E984
 * Callers:
 *     AslFileMappingCreate @ 0x14067E49C (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14067E81C (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140680AB4 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreateFromImageView @ 0x14071F250 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingFiles @ 0x140721470 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140722DA0 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1408E59F4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E6604 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E6A00 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1400F5124 (RtlFileMapFree.c)
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
