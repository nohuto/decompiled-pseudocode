/*
 * XREFs of AslFileMappingDelete @ 0x14067FB24
 * Callers:
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 *     SdbCloseDatabaseRead @ 0x140681C54 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreateFromImageView @ 0x1407204D0 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1400F51C4 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
