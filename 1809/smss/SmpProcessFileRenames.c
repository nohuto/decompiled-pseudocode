/*
 * XREFs of SmpProcessFileRenames @ 0x140009934
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x1400097B8 (SmpDeallocSavedRegistryEntry.c)
 *     SmpEventWrite @ 0x14000A740 (SmpEventWrite.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x14000D68C (EvaluateCurrentState.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x14000DDC4 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     RtlStringCbPrintfExW @ 0x140014AC8 (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x140014DD0 (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x1400152F0 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x1400153E0 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x14001555C (SmpGetTime.c)
 *     SmpLogPFROError @ 0x1400157BC (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x1400159DC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140016238 (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  unsigned __int8 v1; // r14
  bool v2; // r15
  NTSTATUS v3; // eax
  unsigned __int8 v4; // cl
  PVOID *v5; // rax
  int v6; // ebx
  struct _UNICODE_STRING *v7; // rdi
  struct _UNICODE_STRING *v8; // r12
  struct _UNICODE_STRING *v9; // rsi
  struct _UNICODE_STRING *v10; // r13
  __int64 v11; // rdx
  __int64 Length; // rdx
  ACCESS_MASK v13; // r10d
  PWSTR Buffer; // rax
  WCHAR v15; // cx
  PWSTR v16; // rax
  int v17; // ebx
  PWSTR v18; // rax
  int v19; // eax
  __int64 v20; // r9
  USHORT v21; // cx
  bool v22; // zf
  PWSTR v23; // rax
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // eax
  char v29; // al
  struct _UNICODE_STRING **v30; // rax
  struct _UNICODE_STRING *v31; // rdx
  unsigned __int8 OldValue[2]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v34; // [rsp+7Ah] [rbp-8Eh]
  int ValueData; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  int v37; // [rsp+90h] [rbp-78h]
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  size_t pcbRemaining; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(pcbRemaining) = a1;
  v1 = 0;
  OldValue[0] = 0;
  v2 = 1;
  OldValue[1] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v3 = RtlAdjustPrivilege(0x12u, 1u, 0, &OldValue[1]);
    v4 = OldValue[1];
    if ( v3 < 0 )
      v4 = 1;
    OldValue[1] = v4;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v5 = (PVOID *)SmpFileRenameList;
  v6 = 0;
  v7 = (struct _UNICODE_STRING *)SmpFileRenameList;
  v37 = 0;
  ValueData = 0;
  while ( v5 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v8 = v7 + 2;
    LOBYTE(v34) = 0;
    v9 = v7 + 1;
    v10 = v7;
    SmpEventWriteString2(&SmpFileRenameList, &v7[1], &v7[2]);
    if ( (unsigned int)EvaluateCurrentState() )
    {
      Length = v9->Length;
      v13 = 1114112;
      if ( (unsigned __int16)Length >= 4u )
      {
        Buffer = v7[1].Buffer;
        if ( *Buffer == 42 )
        {
          v15 = Buffer[1];
          LOWORD(Length) = Length - 4;
          v9->Length = Length;
          v7[1].MaximumLength -= 4;
          v7[1].Buffer = Buffer + 2;
          LOBYTE(v34) = 1;
          v2 = v15 != 48;
        }
      }
      if ( !v8->Length )
      {
        v16 = v7[1].Buffer;
        v13 = 1114368;
        if ( *v16 == 64 )
        {
          LOWORD(Length) = Length - 2;
          v7[1].Buffer = v16 + 1;
          v9->Length = Length;
        }
        if ( !v8->Length )
        {
          LOBYTE(Length) = v2;
          v17 = SmpForceDeleteTargetFile(&v7[1], Length, 0LL);
LABEL_45:
          v2 = 1;
          goto LABEL_46;
        }
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = v7 + 1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = SmpOpenTargetFile(&Handle, v13, &ObjectAttributes, 3);
      if ( v17 < 0 )
        goto LABEL_45;
      if ( v2 && !(unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(Handle) )
      {
        v17 = -1073740533;
        goto LABEL_45;
      }
    }
    else
    {
      if ( !v8->Length )
      {
        v18 = v7[1].Buffer;
        if ( *v18 == 64 )
        {
          v7[1].Buffer = v18 + 1;
          v9->Length -= 2;
        }
        if ( !v8->Length )
        {
          v2 = 1;
          LOBYTE(v11) = 1;
          v17 = SmpForceDeleteTargetFile(&v7[1], v11, 0LL);
          goto LABEL_46;
        }
      }
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = v7 + 1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = SmpOpenTargetFile(&Handle, 0x110000u, &ObjectAttributes, 3);
      if ( v17 < 0 )
        goto LABEL_45;
    }
    RtlInitUnicodeString(&DestinationString, v7[2].Buffer);
    v19 = EvaluateCurrentState();
    v21 = DestinationString.Length;
    v22 = v19 == 0;
    v23 = DestinationString.Buffer;
    if ( !v22 && DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
    {
      v20 = 65532LL;
      DestinationString.MaximumLength -= 4;
      v21 = DestinationString.Length - 4;
      v23 = DestinationString.Buffer + 2;
      DestinationString.Length -= 4;
      DestinationString.Buffer += 2;
    }
    if ( *v23 == 33 || *v23 == 64 )
    {
      v24 = 1;
      DestinationString.Buffer = v23 + 1;
      DestinationString.MaximumLength -= 2;
      DestinationString.Length = v21 - 2;
    }
    else
    {
      v24 = 0;
    }
    LOBYTE(v20) = v2;
    v25 = SmpRenameTargetFile(&DestinationString, Handle, v24, v20);
    v17 = v25;
    if ( v25 >= 0
      || !v24
      || v25 != -1073741790
      || (LOBYTE(v26) = v2,
          v17 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v26),
          (int)(v17 + 0x80000000) < 0)
      || v17 == -1073741638 )
    {
      v1 = OldValue[0];
      goto LABEL_45;
    }
    LOBYTE(v27) = v2;
    v1 = OldValue[0];
    v17 = SmpShuffleMove(&DestinationString, Handle, v27);
    v28 = ValueData;
    v2 = 1;
    if ( v17 >= 0 )
      v28 = 1;
    ValueData = v28;
LABEL_46:
    if ( Handle )
      NtClose(Handle);
    if ( v17 < 0 )
    {
      v29 = SmpLogPFROError(&v7[1], &v7[2], (unsigned int)v17);
      v6 = v37;
      v1 |= v29;
      OldValue[0] = v1;
    }
    else
    {
      v6 = ++v37;
    }
    if ( (unsigned int)EvaluateCurrentState() && (_BYTE)v34 == 1 )
    {
      v9->Length += 4;
      v7[1].MaximumLength += 4;
      v7[1].Buffer -= 2;
    }
    v30 = *(struct _UNICODE_STRING ***)&v7->Length;
    v7 = (struct _UNICODE_STRING *)v30;
    if ( v30[1] != v10 || (v31 = (struct _UNICODE_STRING *)v10->Buffer, *(struct _UNICODE_STRING **)&v31->Length != v10) )
      __fastfail(3u);
    *(_QWORD *)&v31->Length = v30;
    v30[1] = v31;
    SmpDeallocSavedRegistryEntry(v10);
    v5 = (PVOID *)SmpFileRenameList;
  }
  if ( !OldValue[1] )
    RtlAdjustPrivilege(0x12u, 0, 0, &OldValue[1]);
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
             v6) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
