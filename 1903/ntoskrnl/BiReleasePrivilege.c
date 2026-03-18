/*
 * XREFs of BiReleasePrivilege @ 0x14073F36C
 * Callers:
 *     BiUnloadHiveByName @ 0x140728CBC (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14073F16C (BiLoadHive.c)
 *     BiAddBootEntry @ 0x14092F968 (BiAddBootEntry.c)
 *     BiDeleteBootEntry @ 0x140930F78 (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x140930FF4 (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140931108 (BiEnumerateBootEntries.c)
 *     BiModifyBootEntry @ 0x140931F54 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140931FC0 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140932098 (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x140932220 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140932294 (BiSetBootOptions.c)
 *     BiTranslateFilePath @ 0x140932474 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140933318 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1401C0270 (ZwSetInformationThread.c)
 *     BiAdjustPrivilege @ 0x14073F434 (BiAdjustPrivilege.c)
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
