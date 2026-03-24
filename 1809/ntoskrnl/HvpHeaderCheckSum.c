/*
 * XREFs of HvpHeaderCheckSum @ 0x1405A64F0
 * Callers:
 *     HvHiveStartFileBacked @ 0x1405A4A3C (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x1405A63B8 (HvpGetHiveHeader.c)
 *     HvpGenerateLogEntry @ 0x1405A7860 (HvpGenerateLogEntry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B8248 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B8338 (HvWriteHivePrimaryFile.c)
 *     HvHiveStartMemoryBacked @ 0x14073CB0C (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407FAB80 (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x1407FAD74 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140805CE0 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x1408060D4 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140806F44 (HvpLogInvalidLogHeader.c)
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
