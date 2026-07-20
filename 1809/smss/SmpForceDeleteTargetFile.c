/*
 * XREFs of SmpForceDeleteTargetFile @ 0x1400153E0
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpClearTemporaryFiles @ 0x140014DD0 (SmpClearTemporaryFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x14000DDC4 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140015F14 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpForceDeleteTargetFile(struct _UNICODE_STRING *a1, char a2)
{
  int v4; // edi
  NTSTATUS v5; // ebx
  int v6; // eax
  HANDLE v7; // rcx
  char FileInformation[8]; // [rsp+30h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  struct _FILE_BASIC_INFORMATION v13; // [rsp+80h] [rbp+17h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  memset_0(&v13, 0, sizeof(v13));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = SmpOpenTargetFile(&FileHandle, 0x110100u, &ObjectAttributes, 3);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = EvaluateCurrentState();
    if ( v6 && a2 == 1 && !SmpPathCanBeTrustedIsNotARedirection(FileHandle, &a1->Length, 0) )
    {
      v5 = -1073740533;
    }
    else
    {
      FileInformation[0] = 1;
      v5 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
      if ( v5 < 0 && NtQueryAttributesFile(&ObjectAttributes, &v13) >= 0 && (v13.FileAttributes & 1) != 0 )
      {
        v5 = SmpSetTargetAttributes(FileHandle);
        if ( v5 >= 0 )
        {
          v4 = 1;
          FileInformation[0] = 1;
          v5 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
          if ( v5 >= 0 )
          {
            v4 = 0;
            v5 = 0;
          }
        }
      }
    }
  }
  v7 = FileHandle;
  if ( FileHandle )
  {
    if ( v4 )
    {
      SmpSetTargetAttributes(FileHandle);
      v7 = FileHandle;
    }
    NtClose(v7);
  }
  return (unsigned int)v5;
}
