/*
 * XREFs of BiAddBootEntry @ 0x1408F1CC8
 * Callers:
 *     BiCreateEfiEntry @ 0x1408F2DA0 (BiCreateEfiEntry.c)
 * Callees:
 *     ZwAddBootEntry @ 0x1401B8EB0 (ZwAddBootEntry.c)
 *     BiReleasePrivilege @ 0x1407114A4 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407114F4 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 */

__int64 __fastcall BiAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwAddBootEntry(EntryName, EntryValue);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to add boot entry. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
