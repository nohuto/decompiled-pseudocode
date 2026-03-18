/*
 * XREFs of ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180217D08
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800C7A44 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void *v8; // rcx
  NTSTATUS v9; // ebx
  HANDLE v10; // rax
  int v11; // r9d
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  void *FileHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  FileHandle = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(SourceString, 0x104uLL, (size_t *)L"%s%I64x", L"DwmDxBltEvent_", a1);
  v7 = v5;
  if ( v5 < 0 )
  {
    RestartScan = 93;
  }
  else
  {
    do
    {
      v10 = OpenEventW(2u, 0, SourceString);
      if ( v10 )
      {
        *a2 = v10;
        goto LABEL_21;
      }
      v8 = FileHandle;
      if ( !FileHandle )
      {
        v5 = StringCchPrintfW(
               SourceString,
               0x104uLL,
               (size_t *)L"\\Sessions\\%u\\AppContainerNamedObjects",
               NtCurrentPeb()->SessionId);
        v7 = v5;
        if ( v5 < 0 )
        {
          RestartScan = 123;
          goto LABEL_19;
        }
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = NtOpenDirectoryObject(&FileHandle, 1u, &ObjectAttributes);
        if ( v9 < 0 )
        {
          RestartScan = 132;
LABEL_14:
          v7 = v9 | 0x10000000;
          v11 = v7;
          goto LABEL_20;
        }
        v8 = FileHandle;
      }
      v9 = NtQueryDirectoryObject(v8, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      if ( v9 == -2147483622 )
        v9 = -1073741772;
      if ( v9 < 0 )
      {
        RestartScan = 151;
        goto LABEL_14;
      }
      v4 = 0;
      v5 = StringCchPrintfW(
             SourceString,
             0x104uLL,
             (size_t *)L"AppContainerNamedObjects\\%wZ\\%s%I64x",
             Buffer,
             L"DwmDxBltEvent_",
             a1);
      v7 = v5;
    }
    while ( v5 >= 0 );
    RestartScan = 163;
  }
LABEL_19:
  v11 = v5;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BE340, 2u, v11, RestartScan);
LABEL_21:
  if ( FileHandle )
    CloseHandle(FileHandle);
  return v7;
}
