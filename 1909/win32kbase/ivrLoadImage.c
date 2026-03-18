/*
 * XREFs of ivrLoadImage @ 0x1C018C2AC
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00B8388 (wcsrchr.c)
 *     _strnicmp @ 0x1C00B8474 (_strnicmp.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *ivrLoadImage()
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
  struct _STRING AnsiString; // [rsp+30h] [rbp-D8h] BYREF
  ULONG DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  *(_QWORD *)&DestinationString_8.Length = 0LL;
  DestinationString_8.Buffer = 0LL;
  memset(&gwin32knsImageInfo, 0, sizeof(gwin32knsImageInfo));
  RtlInitUnicodeString(&DestinationString_8, L"\\SystemRoot\\System32\\win32kns.sys");
  gwin32knsImageInfo.DriverName = DestinationString_8;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gwin32knsImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gwin32knsImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  *(_QWORD *)&AnsiString.Length = 0LL;
  AnsiString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\win32kns.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\win32kns.sys";
  RtlInitUnicodeString(&SourceString, v3);
  if ( RtlUnicodeStringToAnsiString(&AnsiString, &SourceString, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, ReturnLength);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741820 )
  {
    while ( 1 )
    {
      v5 = Win32AllocPoolZInit(ReturnLength[0], 1684825161LL);
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
                goto LABEL_18;
            }
            v10 = *(void **)&v6[74 * v8 + 6];
            qword_1C0216990 = (__int64)RtlImageDirectoryEntryToData(
                                         *(PVOID *)&v6[74 * v9 + 6],
                                         1u,
                                         0,
                                         &DestinationString);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            qword_1C0216980 = 0LL;
            qword_1C0216988 = (__int64)v10 + AddressOfEntryPoint;
            v1 = 1;
            qword_1C0216978 = (__int64)v10;
          }
        }
LABEL_18:
        Win32FreePool((__int64)v6);
        break;
      }
      Win32FreePool((__int64)v6);
    }
  }
  RtlFreeAnsiString(&AnsiString);
  if ( v1 == 1 )
    return &gwin32knsImageInfo;
  else
    return 0LL;
}
