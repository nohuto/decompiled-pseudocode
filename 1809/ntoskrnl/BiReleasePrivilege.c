/*
 * XREFs of BiReleasePrivilege @ 0x1407114C4
 * Callers:
 *     BiUnloadHiveByName @ 0x1406E1860 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140711304 (BiLoadHive.c)
 *     BiAddBootEntry @ 0x1408F1CE8 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x1408F3304 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x1408F337C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x1408F3484 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x1408F429C (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F4304 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F43D8 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1408F455C (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1408F45CC (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x1408F47A8 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1408F568C (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401B8310 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x140711598 (BiAdjustPrivilege.c)
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
