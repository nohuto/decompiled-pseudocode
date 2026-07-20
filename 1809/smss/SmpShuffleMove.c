/*
 * XREFs of SmpShuffleMove @ 0x140015F90
 * Callers:
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004FA0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 *     SmpCheckDirectoryWritable @ 0x14000D980 (SmpCheckDirectoryWritable.c)
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     SmpGetParentDirectory @ 0x14000DC18 (SmpGetParentDirectory.c)
 *     SmpQueryFileExists @ 0x140013F5C (SmpQueryFileExists.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  int v6; // eax
  int ParentDirectory; // ebx
  unsigned __int64 v8; // r15
  int v9; // edi
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-D8h]
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  __int64 UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING UnicodeString_8; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING NtPathName_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  wchar_t pszDest[264]; // [rsp+B8h] [rbp-50h] BYREF

  Handle = 0LL;
  UnicodeString_8.Buffer = 0LL;
  UnicodeString = -1LL;
  LOBYTE(v6) = EvaluateCurrentState();
  if ( v6 && a3 == 1 && !SmpCheckFolderForRedirections(&a1->Length, (HANDLE *)&UnicodeString) )
  {
    ParentDirectory = -1073740533;
  }
  else
  {
    ParentDirectory = SmpGetParentDirectory((__int64)a1, (__int64)&v17);
    if ( ParentDirectory >= 0 )
    {
      ParentDirectory = SmpCheckDirectoryWritable(&v17);
      if ( ParentDirectory >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
        v8 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        v9 = 0;
        while ( 1 )
        {
          LODWORD(v12) = (unsigned __int16)(v9 + v8);
          ParentDirectory = RtlStringCbPrintfW(
                              pszDest,
                              0x208uLL,
                              L"%s\\%s%4.4x.tmp",
                              DestinationString.Buffer,
                              L"SMSS-PFRO",
                              v12);
          if ( ParentDirectory < 0 )
            break;
          if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName_8, 0LL, 0LL) )
            goto LABEL_12;
          if ( !SmpQueryFileExists(&NtPathName_8) )
          {
            UnicodeString_8 = NtPathName_8;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = a1;
            ParentDirectory = SmpOpenTargetFile(&Handle, 0x110000u, &ObjectAttributes, 1, 3u);
            if ( ParentDirectory >= 0 )
            {
              ParentDirectory = SmpRenameTargetFile((const void **)&UnicodeString_8, Handle, 1, a3);
              if ( ParentDirectory >= 0 )
              {
                ParentDirectory = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
                if ( ParentDirectory >= 0 )
                  ParentDirectory = 0;
                else
                  SmpRenameTargetFile((const void **)a1, Handle, 1, a3);
              }
            }
            break;
          }
          RtlFreeUnicodeString(&NtPathName_8);
          if ( (unsigned int)++v9 >= 0x64 )
          {
LABEL_12:
            ParentDirectory = -1073741823;
            break;
          }
        }
      }
    }
  }
  if ( UnicodeString_8.Buffer )
    RtlFreeUnicodeString(&UnicodeString_8);
  if ( Handle )
    NtClose(Handle);
  LOBYTE(v10) = EvaluateCurrentState();
  if ( v10 && UnicodeString != -1 )
    NtClose((HANDLE)UnicodeString);
  return (unsigned int)ParentDirectory;
}
