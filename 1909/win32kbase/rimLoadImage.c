/*
 * XREFs of rimLoadImage @ 0x1C005E590
 * Callers:
 *     RIMInitialize @ 0x1C005DEA0 (RIMInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00B8388 (wcsrchr.c)
 *     _strnicmp @ 0x1C00B8474 (_strnicmp.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // esi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r14
  void *v10; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  _STRING AnsiString; // [rsp+30h] [rbp-D8h] BYREF
  ULONG DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  *(_QWORD *)&DestinationString_8.Length = 0LL;
  DestinationString_8.Buffer = 0LL;
  memset(&gHidParseImageInfo, 0, sizeof(gHidParseImageInfo));
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  *(_QWORD *)&AnsiString.Length = 0LL;
  AnsiString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString, &SourceString, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, ReturnLength);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741820 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)Win32AllocPool(ReturnLength[0], 0x646C6452u);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = ZwQuerySystemInformation(SystemModuleInformation, v5, ReturnLength[0], ReturnLength);
      if ( v7 != -1073741820 )
      {
        if ( v7 >= 0 )
        {
          v8 = 0;
          if ( *v6 )
          {
            while ( 1 )
            {
              v9 = v8;
              if ( !strnicmp(
                      (const char *)&v6[74 * v8 + 12] + HIWORD(v6[74 * v8 + 11]),
                      AnsiString.Buffer,
                      AnsiString.Length) )
                break;
              if ( ++v8 >= *v6 )
                goto LABEL_15;
            }
            v10 = *(void **)&v6[74 * v8 + 6];
            qword_1C0212428 = (__int64)RtlImageDirectoryEntryToData(
                                         *(PVOID *)&v6[74 * v9 + 6],
                                         1u,
                                         0,
                                         &DestinationString);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            qword_1C0212418 = 0LL;
            qword_1C0212420 = (__int64)v10 + AddressOfEntryPoint;
            v1 = 1;
            qword_1C0212410 = (__int64)v10;
          }
        }
LABEL_15:
        Win32FreePool((__int64)v6);
        break;
      }
      Win32FreePool((__int64)v6);
    }
  }
  RtlFreeAnsiString(&AnsiString);
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  else
    return 0LL;
}
