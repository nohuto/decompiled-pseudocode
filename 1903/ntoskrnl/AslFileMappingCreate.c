/*
 * XREFs of AslFileMappingCreate @ 0x14070A6C4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14070A358 (SdbGetDatabaseMatch.c)
 *     SdbpCheckMatchingFiles @ 0x14074B960 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckKObject @ 0x140771F98 (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x140921994 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922CC4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409230B0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlFileMapInitializeByNtPath @ 0x140153E88 (RtlFileMapInitializeByNtPath.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x14070A488 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140776364 (AslpFileMappingGetFileKind.c)
 *     AslFileNotFound @ 0x1407814C4 (AslFileNotFound.c)
 */

__int64 __fastcall AslFileMappingCreate(__int64 *a1, const WCHAR *a2, void *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // ebx
  void *v13; // rbx
  HANDLE *v14; // rsi
  void *v15; // rcx
  int v16; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  FileInformation = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !a2 || !*a2 || !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v10 = AslAlloc(v9, 88LL);
  v11 = v10;
  if ( v10 )
  {
    v12 = AslStringDuplicate(v10, a2);
    if ( v12 < 0 )
      goto LABEL_24;
    v13 = 0LL;
    if ( a3 != (void *)-1LL )
      v13 = a3;
    v14 = (HANDLE *)(v11 + 8);
    v15 = (void *)(v11 + 8);
    if ( v13 )
    {
      memset(v15, 0, 0x38uLL);
      *(_BYTE *)(v11 + 56) = 0;
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
          v18 = (unsigned int)(v12 + 1073741805);
          if ( (unsigned int)v18 <= 0x30 && (v19 = 0x1000000008001LL, _bittest64(&v19, v18)) || v12 == -1073741638 )
            v20 = 3LL;
          else
            v20 = 1LL;
          AslLogCallPrintf(v20);
        }
        goto LABEL_16;
      }
    }
    v12 = ZwQueryInformationFile(*v14, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v12 < 0 )
    {
LABEL_24:
      AslLogCallPrintf(1LL);
    }
    else
    {
      if ( a4 )
      {
        *(_QWORD *)(v11 + 40) = a5;
        *(_BYTE *)(v11 + 59) = 1;
        *(_QWORD *)(v11 + 32) = a4;
      }
      *(_QWORD *)(v11 + 24) = v24;
      if ( !a4 )
      {
        *(_DWORD *)(v11 + 64) = (v24 != 0) + 1;
LABEL_15:
        *a1 = v11;
        v12 = 0;
        v11 = 0LL;
        goto LABEL_16;
      }
      if ( v24 )
      {
        if ( (int)AslpFileMappingGetFileKind(v11 + 8, v11 + 64) < 0 )
        {
          AslLogCallPrintf(1LL);
          *(_DWORD *)(v11 + 64) = 3;
        }
        goto LABEL_15;
      }
      AslLogCallPrintf(1LL);
      v12 = -1073741811;
    }
LABEL_16:
    if ( v11 )
      AslFileMappingDelete((PVOID *)v11);
    goto LABEL_18;
  }
  v12 = -1073741801;
LABEL_18:
  if ( DestinationString.Buffer != a2 )
    RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v12;
}
