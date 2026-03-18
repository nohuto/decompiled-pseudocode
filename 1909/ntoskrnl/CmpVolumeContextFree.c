/*
 * XREFs of CmpVolumeContextFree @ 0x14082F174
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140690034 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpVolumeContextCleanup @ 0x14082F140 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextFree(PPRIVILEGE_SET Privileges)
{
  CmpVolumeContextCleanup((__int64)Privileges);
  CmSiFreeMemory(Privileges);
}
