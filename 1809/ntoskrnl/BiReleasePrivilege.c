/*
 * XREFs of BiReleasePrivilege @ 0x1407114A4
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1407112E4 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1408F1CC8 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1408F32E4 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1408F335C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1408F3464 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1408F427C (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F42E4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F43B8 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1408F453C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1408F45AC (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1408F4788 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401B8330 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140711578 (BiAdjustPrivilege.c)
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
