/*
 * XREFs of CmpUuidCreate @ 0x14068AEE4
 * Callers:
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmpStartRMLogs @ 0x1406BBDE8 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x14078884C (CmpVolumeContextStart.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140689DE0 (ExUuidCreate.c)
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
