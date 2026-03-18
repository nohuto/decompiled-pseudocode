/*
 * XREFs of CmpVolumeContextFree @ 0x14082F304
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140661390 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x14082F2D0 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
