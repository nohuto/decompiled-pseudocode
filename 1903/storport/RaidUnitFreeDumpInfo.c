/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C00473E0
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C0045D3C (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00744CC (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpInfo @ 0x1C0074A68 (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
  *a1 = 0LL;
}
