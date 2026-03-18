/*
 * XREFs of BiAcquirePrivilege @ 0x140711514
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
 *     RtlImpersonateSelfEx @ 0x1406BAE14 (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x140711598 (BiAdjustPrivilege.c)
 */

__int64 __fastcall BiAcquirePrivilege(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  __int64 result; // rax
  int v6; // ebx
  char v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 ThreadInformation; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  v4 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8;
  if ( v4 || (result = RtlImpersonateSelfEx(2, 0, 0LL), (int)result >= 0) )
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
    return (unsigned int)v6;
  }
  return result;
}
