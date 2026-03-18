/*
 * XREFs of HvpHeaderCheckSum @ 0x14068FF08
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x14008D1E8 (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x14068CE18 (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x14068FDD0 (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406E6550 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406EA974 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartMemoryBacked @ 0x140769690 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140833594 (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x140833788 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14083EB48 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x14083EF1C (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x14083FDAC (HvpLogInvalidLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    result = 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
