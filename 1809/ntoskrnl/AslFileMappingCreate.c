/*
 * XREFs of AslFileMappingCreate @ 0x14067F63C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x1400F4F54 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x1407205E0 (AslpFileMappingGetFileKind.c)
 *     AslFileNotFound @ 0x140723B50 (AslFileNotFound.c)
 */

__int64 __fastcall AslFileMappingCreate(wchar_t ***a1, const WCHAR *a2, void *a3, wchar_t *a4, wchar_t *a5)
{
  __int64 v9; // rcx
  wchar_t **v10; // rax
  wchar_t **v11; // rdi
  int v12; // ebx
  void *v13; // rbx
  HANDLE *v14; // r14
  void *v15; // rcx
  int v16; // eax
  const char *v18; // r9
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  int v23; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]

  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = (wchar_t **)AslAlloc(v9, 0x58uLL);
  v11 = v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    if ( v12 < 0 )
    {
      v18 = "AslStringDuplicate failed [%x]";
      v19 = 121;
    }
    else
    {
      v13 = 0LL;
      if ( a3 != (void *)-1LL )
        v13 = a3;
      v14 = (HANDLE *)(v11 + 1);
      v15 = v11 + 1;
      if ( v13 )
      {
        memset(v15, 0, 0x38uLL);
        *((_BYTE *)v11 + 56) = 0;
        *v14 = v13;
      }
      else
      {
        v16 = RtlFileMapInitializeByNtPath((__int64)v15, &DestinationString);
        v12 = v16;
        if ( v16 < 0 )
        {
          if ( !(unsigned int)AslFileNotFound((unsigned int)v16) )
          {
            v20 = (unsigned int)(v12 + 1073741805);
            if ( (unsigned int)v20 <= 0x30 && (v21 = 0x1000000008001LL, _bittest64(&v21, v20)) || v12 == -1073741638 )
            {
              v22 = 161;
              v23 = 3;
            }
            else
            {
              v22 = 159;
              v23 = 1;
            }
            AslLogCallPrintf(
              v23,
              (unsigned int)"AslFileMappingCreate",
              v22,
              (unsigned int)"RtlFileMapInitializeByFilePath failed %S [%x]");
          }
          goto LABEL_16;
        }
      }
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      FileInformation = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        if ( a4 )
        {
          v11[5] = a5;
          *((_BYTE *)v11 + 59) = 1;
          v11[4] = a4;
        }
        v11[3] = v27;
        if ( !a4 )
        {
          *((_DWORD *)v11 + 16) = (v27 != 0LL) + 1;
LABEL_15:
          *a1 = v11;
          v12 = 0;
          v11 = 0LL;
          goto LABEL_16;
        }
        if ( v27 )
        {
          if ( (int)AslpFileMappingGetFileKind(v11 + 1, v11 + 8) < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslFileMappingCreate",
              213,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
            *((_DWORD *)v11 + 16) = 3;
          }
          goto LABEL_15;
        }
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingCreate",
          206,
          (unsigned int)"File size is 0 bytes yet ImageViewBase was present");
        v12 = -1073741811;
LABEL_16:
        if ( v11 )
          AslFileMappingDelete(v11);
        goto LABEL_18;
      }
      v18 = "NtQueryInformationFile failed [%x]";
      v19 = 181;
    }
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingCreate", v19, (_DWORD)v18);
    goto LABEL_16;
  }
  v12 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v12;
}
