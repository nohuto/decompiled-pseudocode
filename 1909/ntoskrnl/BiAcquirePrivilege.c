/*
 * XREFs of BiAcquirePrivilege @ 0x1407412BC
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
 *     RtlImpersonateSelfEx @ 0x1406DD81C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140741334 (BiAdjustPrivilege.c)
 */

NTSTATUS __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // bl
  NTSTATUS result; // eax
  int v6; // edi
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    result = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
    if ( result < 0 )
      return result;
  }
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
    *(_BYTE *)(v2 + 5) = v4;
    *(_DWORD *)v2 = a1;
  }
  return v6;
}
