/*
 * XREFs of HvpHeaderCheckSum @ 0x140661000
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x140098BA4 (HvpGenerateLogEntryHeader.c)
 *     HvpGetHiveHeader @ 0x140660EC8 (HvpGetHiveHeader.c)
 *     HvHiveStartFileBacked @ 0x14066102C (HvHiveStartFileBacked.c)
 *     HvWriteHivePrimaryFile @ 0x140662F68 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406E98B4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvHiveStartMemoryBacked @ 0x140764B90 (HvHiveStartMemoryBacked.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140833F34 (HvIsInPlaceBaseBlockValid.c)
 *     HvWriteExternal @ 0x140834128 (HvWriteExternal.c)
 *     HvAnalyzeLogFiles @ 0x14083F4E8 (HvAnalyzeLogFiles.c)
 *     HvpLogInvalidLogHeader @ 0x140840378 (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140840648 (HvSnapshotHiveToOffsetArray.c)
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
