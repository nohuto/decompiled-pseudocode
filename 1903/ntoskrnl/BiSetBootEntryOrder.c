/*
 * XREFs of BiSetBootEntryOrder @ 0x140932220
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14092FB28 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x14093132C (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140932174 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1401C30F0 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14073F36C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14073F3BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  unsigned int v2; // edi
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = (unsigned int)Count;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(Ids, (PULONG)v2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
