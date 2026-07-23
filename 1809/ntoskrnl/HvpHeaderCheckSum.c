/*
 * XREFs of HvpHeaderCheckSum @ 0x1405A74F0
 * Callers:
 *     HvHiveStartFileBacked @ 0x1405A5A3C (HvHiveStartFileBacked.c)
 *     HvpGetHiveHeader @ 0x1405A73B8 (HvpGetHiveHeader.c)
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 *     HvHiveStartMemoryBacked @ 0x14073DCFC (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1407FBD80 (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140806EE0 (HvSnapshotHiveToOffsetArray.c)
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140808144 (HvpLogInvalidLogHeader.c)
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
