/*
 * XREFs of BiReleasePrivilege @ 0x14074126C
 * Callers:
 *     BiUnloadHiveByName @ 0x14072A02C (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14074106C (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14092F3DC (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1409309EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140930A68 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140930B7C (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1409319C8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140931A34 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140931B0C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140931C94 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140931D08 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140931EE8 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401C0DF0 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140741334 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiReleasePrivilege(unsigned int *a1)
{
  NTSTATUS result; // eax
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 4) )
    result = BiAdjustPrivilege(*a1, 0LL, &ThreadInformation);
  if ( !*((_BYTE *)a1 + 5) )
  {
    ThreadInformation = 0LL;
    return ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  return result;
}
