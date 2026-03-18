/*
 * XREFs of CmpUuidCreate @ 0x140680A8C
 * Callers:
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1406FAC08 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x14075F728 (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x140801F50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14080231C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
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
