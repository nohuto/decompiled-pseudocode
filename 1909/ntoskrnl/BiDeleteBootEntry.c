/*
 * XREFs of BiDeleteBootEntry @ 0x1409309EC
 * Callers:
 *     BiBindEfiEntries @ 0x14092F8AC (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140930C78 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1401C25D0 (ZwDeleteBootEntry.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x14074126C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407412BC (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiDeleteBootEntry(PUNICODE_STRING EntryName)
{
  unsigned int v1; // edi
  UNICODE_STRING *v2; // rdx
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = (unsigned int)EntryName;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", (unsigned int)EntryName);
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwDeleteBootEntry((PUNICODE_STRING)v1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", v1, (unsigned int)v4);
    BiReleasePrivilege((unsigned int *)&v6);
  }
  return (unsigned int)v3;
}
