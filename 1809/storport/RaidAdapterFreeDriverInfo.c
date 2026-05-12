/*
 * XREFs of RaidAdapterFreeDriverInfo @ 0x1C0037D68
 * Callers:
 *     RaidAdapterCreateDriverInfo @ 0x1C00726D0 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00728F0 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0074E54 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDriverInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[3] )
  {
    ExFreePoolWithTag(v2[3], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[4] )
  {
    ExFreePoolWithTag(v2[4], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[5] )
  {
    ExFreePoolWithTag(v2[5], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[8] )
  {
    ExFreePoolWithTag(v2[8], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
}
