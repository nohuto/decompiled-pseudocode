/*
 * XREFs of BiModifyBootEntry @ 0x1408F427C
 * Callers:
 *     BiUpdateEfiEntry @ 0x1408F4BC8 (BiUpdateEfiEntry.c)
 * Callees:
 *     ZwModifyBootEntry @ 0x1401BA370 (ZwModifyBootEntry.c)
 *     BiReleasePrivilege @ 0x1407114A4 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407114F4 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 */

__int64 __fastcall BiModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  int v2; // ebx
  NTSTATUS v3; // eax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = BiAcquirePrivilege(0x16u, (__int64)&v5);
  if ( v2 >= 0 )
  {
    v3 = ZwModifyBootEntry(BootEntry);
    v2 = v3;
    if ( v3 < 0 )
      BiLogMessage(4LL, L"Failed to modify boot entry 0x%x. Status: %x", BootEntry->Id, (unsigned int)v3);
    BiReleasePrivilege(&v5);
  }
  return (unsigned int)v2;
}
