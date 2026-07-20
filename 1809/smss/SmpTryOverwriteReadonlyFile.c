/*
 * XREFs of SmpTryOverwriteReadonlyFile @ 0x140016238
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140015F14 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpTryOverwriteReadonlyFile(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  __int64 v5; // rdi
  int v7; // ebx
  int v8; // eax
  char v9; // al
  int v10; // eax
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+70h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  Handle = 0LL;
  v5 = -1LL;
  ObjectAttributes.RootDirectory = 0LL;
  v13 = -1LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v7 >= 0 )
  {
    if ( (FileInformation.FileAttributes & 0x10) != 0 )
    {
      v7 = -1073741638;
    }
    else if ( (FileInformation.FileAttributes & 1) != 0 )
    {
      LOBYTE(v8) = EvaluateCurrentState();
      if ( v8 && a3 == 1 && (v9 = SmpCheckFolderForRedirections(&a1->Length, (HANDLE *)&v13), v5 = v13, !v9) )
      {
        v7 = -1073740533;
      }
      else
      {
        v7 = SmpOpenTargetFile(&Handle, 0x100100u, &ObjectAttributes, 1, 3u);
        if ( v7 >= 0 )
        {
          v7 = SmpSetTargetAttributes(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
          if ( v7 >= 0 )
          {
            NtClose(Handle);
            Handle = 0LL;
            v7 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
            if ( v7 >= 0 )
              v7 = 0;
          }
        }
      }
    }
    else
    {
      v7 = -1073741823;
    }
  }
  if ( SmpOpenTargetFile(&Handle, 0x110100u, &ObjectAttributes, 1, 3u) >= 0 )
    SmpSetTargetAttributes(Handle, FileInformation.FileAttributes);
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v10) = EvaluateCurrentState();
  if ( v10 && v5 != -1 )
    NtClose((HANDLE)v5);
  return (unsigned int)v7;
}
