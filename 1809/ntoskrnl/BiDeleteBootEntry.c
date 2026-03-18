/*
 * XREFs of BiDeleteBootEntry @ 0x1408F3304
 * Callers:
 *     BiBindEfiEntries @ 0x1408F21B4 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1408F3580 (BiExportBcdObjects.c)
 * Callees:
 *     ZwDeleteBootEntry @ 0x1401B9AD0 (ZwDeleteBootEntry.c)
 *     BiReleasePrivilege @ 0x1407114C4 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140711514 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x1407140D4 (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteBootEntry(PUNICODE_STRING EntryName)
{
  unsigned int v1; // edi
  UNICODE_STRING *v2; // rdx
  int v3; // ebx
  NTSTATUS v4; // eax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned int)EntryName;
  BiLogMessage(2LL, L"Deleting boot entry 0x%x", (unsigned int)EntryName);
  v3 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v3 >= 0 )
  {
    v4 = ZwDeleteBootEntry((PUNICODE_STRING)v1, v2);
    v3 = v4;
    if ( v4 < 0 )
      BiLogMessage(4LL, L"Failed to delete boot entry 0x%x. Status: %x", v1, (unsigned int)v4);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v3;
}
