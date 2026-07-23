/*
 * XREFs of CmpUuidCreate @ 0x140681C2C
 * Callers:
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1406FBE88 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407608F8 (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
