/*
 * XREFs of CmpUuidCreate @ 0x140697974
 * Callers:
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x14069A0B0 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x1407864EC (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140696870 (ExUuidCreate.c)
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
