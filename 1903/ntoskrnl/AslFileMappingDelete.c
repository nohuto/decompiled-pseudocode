/*
 * XREFs of AslFileMappingDelete @ 0x14070A488
 * Callers:
 *     SdbCloseDatabaseRead @ 0x140708EE0 (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x14070A358 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x14070A6C4 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x14074B960 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140771F98 (SdbpCheckKObject.c)
 *     AslFileMappingCreateFromImageView @ 0x140776268 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140921994 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922CC4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409230B0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x140153E28 (RtlFileMapFree.c)
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
