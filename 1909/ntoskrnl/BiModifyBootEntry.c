/*
 * XREFs of BiModifyBootEntry @ 0x1409319C8
 * Callers:
 *     BiUpdateEfiEntry @ 0x140932330 (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x1401C2E50 (ZwModifyBootEntry.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwModifyBootEntry(BootEntry);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", BootEntry->Id, (unsigned int)v3);
    BiReleasePrivilege((unsigned int *)&v5);
  }
  return (unsigned int)v2;
}
