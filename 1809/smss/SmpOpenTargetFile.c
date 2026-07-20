/*
 * XREFs of SmpOpenTargetFile @ 0x1400159DC
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     SmpForceDeleteTargetFile @ 0x1400153E0 (SmpForceDeleteTargetFile.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140016238 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 */

NTSTATUS __fastcall SmpOpenTargetFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        char a4,
        ULONG ShareAccess)
{
  int v9; // eax
  NTSTATUS result; // eax
  _DWORD FileInformation[2]; // [rsp+30h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-20h] BYREF

  LOBYTE(v9) = EvaluateCurrentState();
  if ( v9 )
    result = NtOpenFile(
               FileHandle,
               DesiredAccess,
               ObjectAttributes,
               &IoStatusBlock,
               ShareAccess,
               a4 != 0 ? 2113568 : 16416);
  else
    result = NtOpenFile(FileHandle, DesiredAccess, ObjectAttributes, &IoStatusBlock, 3u, 0x204020u);
  if ( result >= 0 )
  {
    if ( NtQueryInformationFile(*FileHandle, &IoStatusBlock, FileInformation, 8u, FileAttributeTagInformation) < 0
      || (FileInformation[0] & 0x400) == 0
      || (FileInformation[1] & 0x20000000) != 0 )
    {
      return 0;
    }
    else
    {
      NtClose(*FileHandle);
      *FileHandle = 0LL;
      return -1073741608;
    }
  }
  return result;
}
