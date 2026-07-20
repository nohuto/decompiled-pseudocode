/*
 * XREFs of SmpProcessFileRenames @ 0x140008BE8
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWrite @ 0x1400095B4 (SmpEventWrite.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000A198 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     RtlStringCbPrintfExW @ 0x14001200C (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x140012314 (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140012830 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140012920 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x140012A64 (SmpGetTime.c)
 *     SmpLogPFROError @ 0x140012CFC (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x140012F1C (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x14001300C (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x14001342C (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x14001360C (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r13
  PVOID *v2; // rax
  int v3; // edi
  char *v4; // rsi
  NTSTATUS v6; // eax
  unsigned __int8 v7; // cl
  char *v8; // r15
  _WORD *v9; // rax
  int v10; // ebx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  char *v14; // rax
  char **v15; // rdx
  unsigned __int8 OldValue[4]; // [rsp+78h] [rbp-90h] BYREF
  int v17; // [rsp+7Ch] [rbp-8Ch]
  int ValueData; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  size_t pcbRemaining; // [rsp+A0h] [rbp-68h] BYREF
  int v22; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  char *v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(pcbRemaining) = a1;
  v1 = 0;
  OldValue[0] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v6 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v7 = OldValue[0];
    if ( v6 < 0 )
      v7 = 1;
    OldValue[0] = v7;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v2 = (PVOID *)SmpFileRenameList;
  v3 = 0;
  v4 = (char *)SmpFileRenameList;
  v17 = 0;
  ValueData = 0;
  while ( v2 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v8 = v4;
    SmpEventWriteString2(&SmpFileRenameList, v4 + 16, v4 + 32);
    if ( *((_WORD *)v4 + 16) )
      goto LABEL_22;
    v9 = (_WORD *)*((_QWORD *)v4 + 3);
    if ( *v9 == 64 )
    {
      *((_QWORD *)v4 + 3) = v9 + 1;
      *((_WORD *)v4 + 8) -= 2;
    }
    if ( *((_WORD *)v4 + 16) )
    {
LABEL_22:
      v23 = 0LL;
      v22 = 48;
      v25 = 64;
      v24 = v4 + 16;
      v26 = 0LL;
      v10 = SmpOpenTargetFile(&Handle, 1114112LL, &v22);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v4 + 5));
        if ( *DestinationString.Buffer == 33 || *DestinationString.Buffer == 64 )
        {
          v11 = 1;
          ++DestinationString.Buffer;
          DestinationString.Length -= 2;
          DestinationString.MaximumLength -= 2;
        }
        else
        {
          v11 = 0;
        }
        v12 = SmpRenameTargetFile(&DestinationString, Handle, v11);
        v10 = v12;
        if ( v12 < 0 )
        {
          if ( v11 )
          {
            if ( v12 == -1073741790 )
            {
              v10 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle);
              if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741638 )
              {
                v10 = SmpShuffleMove(&DestinationString, Handle);
                v13 = ValueData;
                if ( v10 >= 0 )
                  v13 = 1;
                ValueData = v13;
              }
            }
          }
        }
        v3 = v17;
      }
    }
    else
    {
      v10 = SmpForceDeleteTargetFile(v4 + 16);
    }
    if ( Handle )
      NtClose(Handle);
    if ( v10 < 0 )
      v1 |= SmpLogPFROError(v4 + 16, v4 + 32, (unsigned int)v10);
    else
      v17 = ++v3;
    v14 = *(char **)v4;
    v4 = v14;
    if ( *((char **)v14 + 1) != v8 || (v15 = (char **)*((_QWORD *)v8 + 1), *v15 != v8) )
      __fastfail(3u);
    *v15 = v14;
    *((_QWORD *)v14 + 1) = v15;
    SmpDeallocSavedRegistryEntry(v8);
    v2 = (PVOID *)SmpFileRenameList;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( (_DWORD)pcbRemaining )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  if ( SmpLogFileHandle )
  {
    if ( v1 )
    {
      SmpGetTime(&TimeFields);
      if ( RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             TimeFields.Month,
             TimeFields.Day,
             TimeFields.Year,
             TimeFields.Hour,
             TimeFields.Minute,
             TimeFields.Second,
             v3) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
