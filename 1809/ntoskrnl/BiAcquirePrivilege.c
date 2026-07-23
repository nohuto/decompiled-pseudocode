/*
 * XREFs of BiAcquirePrivilege @ 0x140712794
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
 *     RtlImpersonateSelfEx @ 0x1406BC094 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140712818 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  NTSTATUS result; // eax
  int v6; // ebx
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8;
  if ( v4 || (result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL), result >= 0) )
  {
    LOBYTE(a2) = 1;
    v6 = BiAdjustPrivilege(a1, a2, &v7);
    if ( v6 < 0 )
    {
      if ( !v4 )
      {
        ThreadInformation = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
      }
    }
    else
    {
      *(_BYTE *)(v2 + 4) = v7;
      *(_BYTE *)(v2 + 5) = v4 != 0;
      *(_DWORD *)v2 = a1;
    }
    return v6;
  }
  return result;
}
