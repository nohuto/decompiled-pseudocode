/*
 * XREFs of BiSetBootEntryOrder @ 0x140931C94
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14092F59C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140931BE8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1401C3C70 (ZwSetBootEntryOrder.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
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
