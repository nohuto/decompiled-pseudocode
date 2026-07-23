/*
 * XREFs of BiReleasePrivilege @ 0x140712744
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140712584 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1408F2F88 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1408F45A4 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1408F461C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1408F4724 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1408F553C (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F55A4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F5678 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1408F57FC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1408F586C (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401B8490 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140712818 (BiAdjustPrivilege.c)
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
