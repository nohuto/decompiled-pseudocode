/*
 * XREFs of rimLoadImage @ 0x1C00071D8
 * Callers:
 *     RIMInitialize @ 0x1C0006BE0 (RIMInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00A67D8 (wcsrchr.c)
 *     _strnicmp @ 0x1C00A68C4 (_strnicmp.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

struct _SYSTEM_GDI_DRIVER_INFORMATION *rimLoadImage()
{
  NTSTATUS v0; // eax
  int v1; // edi
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r14
  void *v10; // rbx
  __int64 AddressOfEntryPoint; // rcx
  ULONG ReturnLength; // [rsp+28h] [rbp-E0h] BYREF
  ULONG Size; // [rsp+2Ch] [rbp-DCh] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v16; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE SystemInformation[304]; // [rsp+68h] [rbp-A0h] BYREF

  memset(&gHidParseImageInfo, 0, sizeof(gHidParseImageInfo));
  RtlInitUnicodeString(&v16, L"\\SystemRoot\\System32\\Drivers\\hidparse.sys");
  gHidParseImageInfo.DriverName = v16;
  v0 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, &gHidParseImageInfo, 0x38uLL);
  v1 = 0;
  if ( v0 >= 0 )
    return &gHidParseImageInfo;
  if ( v0 != -1073741554 )
    return 0LL;
  v2 = wcsrchr(L"\\SystemRoot\\System32\\Drivers\\hidparse.sys", 0x5Cu);
  v3 = v2 ? v2 + 1 : L"\\SystemRoot\\System32\\Drivers\\hidparse.sys";
  RtlInitUnicodeString(&SourceString, v3);
  if ( RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u) < 0 )
    return 0LL;
  v4 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741820 )
  {
    while ( 1 )
    {
      v6 = (_DWORD *)Win32AllocPool(ReturnLength, 1684825170LL);
      v7 = v6;
      if ( !v6 )
        break;
      v5 = ZwQuerySystemInformation(SystemModuleInformation, v6, ReturnLength, &ReturnLength);
      if ( v5 != -1073741820 )
      {
        if ( v5 >= 0 )
        {
          v8 = 0;
          if ( *v7 )
          {
            while ( 1 )
            {
              v9 = v8;
              if ( !strnicmp(
                      (const char *)&v7[74 * v8 + 12] + HIWORD(v7[74 * v8 + 11]),
                      DestinationString.Buffer,
                      DestinationString.Length) )
                break;
              if ( ++v8 >= *v7 )
                goto LABEL_20;
            }
            v10 = *(void **)&v7[74 * v8 + 6];
            qword_1C01CDFB8 = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)&v7[74 * v9 + 6], 1u, 0, &Size);
            AddressOfEntryPoint = RtlImageNtHeader(v10)->OptionalHeader.AddressOfEntryPoint;
            qword_1C01CDFA8 = 0LL;
            qword_1C01CDFB0 = (__int64)v10 + AddressOfEntryPoint;
            v1 = 1;
            qword_1C01CDFA0 = (__int64)v10;
          }
        }
LABEL_20:
        Win32FreePool(v7);
        break;
      }
      Win32FreePool(v7);
    }
  }
  RtlFreeAnsiString(&DestinationString);
  if ( v1 == 1 )
    return &gHidParseImageInfo;
  else
    return 0LL;
}
