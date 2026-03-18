/*
 * XREFs of ldevLoadImage @ 0x1C0053150
 * Callers:
 *     ldevLoadDriver @ 0x1C0052FC0 (ldevLoadDriver.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     FreeSystemRelativePath @ 0x1C00532A4 (FreeSystemRelativePath.c)
 *     MakeSystemRelativePath @ 0x1C00532E0 (MakeSystemRelativePath.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C0074010 (wcsrchr.c)
 *     _strnicmp @ 0x1C00740FC (_strnicmp.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00CFE64 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C00DB014 (MakeSystemDriversRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadImage(PCWSTR Source, __int64 a2, _DWORD *a3, signed int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v8; // r12
  struct _LDEV *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // esi
  int v13; // r14d
  struct _LDEV *i; // rbx
  const UNICODE_STRING *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  UNICODE_STRING *v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rsi
  int v23; // ebx
  ULONG v24; // r12d
  SYSTEM_INFORMATION_CLASS v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  NTSTATUS v28; // r14d
  int v29; // r12d
  wchar_t *v30; // rax
  const WCHAR *v31; // rax
  int v32; // ebx
  _DWORD *v33; // rax
  _DWORD *v34; // r15
  unsigned int v35; // ebx
  _DWORD *j; // rbx
  unsigned int v37; // eax
  char *v38; // rbx
  __int64 AddressOfEntryPoint; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  ULONG Size; // [rsp+20h] [rbp-E0h] BYREF
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-D8h] BYREF
  _STRING AnsiString; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int SystemInformation[76]; // [rsp+60h] [rbp-A0h] BYREF

  v5 = a4;
  ReturnLength = a4;
  v8 = (int)a2;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(Source, a2, a3);
  v10[3] = Source;
  v10[4] = v8;
  v10[5] = v5;
  WdLogEvent5_WdEvent(v10);
  *a3 = 0;
  Size = v8 == 0;
  if ( (unsigned int)MakeSystemRelativePath(Source, &String2) )
  {
    v12 = ReturnLength;
    v13 = 1;
    while ( 1 )
    {
      for ( i = gpldevDrivers; i; i = *(struct _LDEV **)i )
      {
        v15 = (const UNICODE_STRING *)*((_QWORD *)i + 2);
        if ( v15
          && (*((_DWORD *)i + 6) == 5) == (_DWORD)v8
          && (*((_DWORD *)i + 8) & 4u) >> 2 == a5
          && RtlEqualUnicodeString(v15, &String2, 1u) )
        {
          v17 = WdLogNewEntry5_WdTrace(v16);
          WdLogEvent5_WdTrace(v17);
          ++*((_DWORD *)i + 7);
          v9 = i;
          *a3 = 1;
          goto LABEL_10;
        }
      }
      if ( ReturnLength )
        break;
      if ( !v13 )
      {
        if ( v12 )
        {
          FreeSystemRelativePath(&String2);
          if ( !(unsigned int)MakeSystemRelativePath(Source, &String2) )
            goto LABEL_10;
        }
        break;
      }
      v13 = 0;
      FreeSystemRelativePath(&String2);
      if ( !(unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
        break;
      v12 = 1;
    }
    v20 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 0x76646C47u, 0);
    v21 = PALLOCMEM2(0x388uLL, 0x76646C47u, 1);
    v22 = (__int64)v21;
    v23 = 1;
    if ( v20 )
    {
      if ( v21 )
      {
        v24 = ReturnLength;
        v21[112] = v21 + 8;
        *((_DWORD *)v21 + 15) = 0;
        while ( 1 )
        {
          gulDriverFailureReason = 0;
          v25 = SystemLoadGdiDriverInformation;
          *v20 = String2;
          if ( !v24 )
            v25 = SystemLoadGdiDriverInSystemSpaceInformation;
          v28 = ZwSetSystemInformation(v25, v20, 0x38uLL);
          if ( v28 >= 0 )
            goto LABEL_57;
          if ( v28 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v24 )
            goto LABEL_60;
          if ( v28 != -1073741772 )
            break;
          if ( v23 )
          {
            v23 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_31;
        }
        if ( v28 == -1073741554 )
        {
          v29 = 0;
          v30 = wcsrchr(Source, 0x5Cu);
          v31 = v30 ? v30 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v31);
          v28 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v28 >= 0 )
          {
            v28 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v28 + 0x80000000) < 0 || v28 == -1073741820 )
            {
              v32 = 296 * SystemInformation[0];
              v33 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 0x706D7447u, 0);
              v34 = v33;
              if ( v33 )
              {
                v28 = ZwQuerySystemInformation(SystemModuleInformation, v33, v32 + 8, &ReturnLength);
                if ( v28 >= 0 )
                {
                  v35 = 0;
                  if ( *v34 )
                  {
                    while ( 1 )
                    {
                      v46 = v35;
                      if ( !strnicmp(
                              (const char *)&v34[74 * v35 + 12] + HIWORD(v34[74 * v35 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v35 >= *v34 )
                        goto LABEL_54;
                    }
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v37 = j[3];
                      if ( !v37 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v37, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v29 = 1;
                        v38 = *(char **)&v34[74 * v46 + 6];
                        v20[2].Buffer = (PWSTR)RtlImageDirectoryEntryToData(v38, 1u, 0, &Size);
                        AddressOfEntryPoint = RtlImageNtHeader(v38)->OptionalHeader.AddressOfEntryPoint;
                        *(_QWORD *)&v20[1].Length = v38;
                        *(_QWORD *)&v20[2].Length = &v38[AddressOfEntryPoint];
                        v20[1].Buffer = 0LL;
                        break;
                      }
                    }
                  }
                }
LABEL_54:
                Win32FreePool((__int64)v34);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v29 )
            {
              *(_DWORD *)(v22 + 32) |= 2u;
LABEL_57:
              v40 = *(unsigned int *)(v22 + 32);
              *(_DWORD *)(v22 + 56) = -1;
              *(_QWORD *)(v22 + 16) = v20;
              *(_DWORD *)(v22 + 28) = 1;
              *(_DWORD *)(v22 + 24) = 5;
              *(_DWORD *)(v22 + 32) = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(4 * a5)) & 4;
              if ( gpldevDrivers )
                *((_QWORD *)gpldevDrivers + 1) = v22;
              *(_QWORD *)v22 = gpldevDrivers;
              *(_QWORD *)(v22 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v22;
              v41 = WdLogNewEntry5_WdTrace(v40);
              *(_QWORD *)(v41 + 24) = v22;
              WdLogEvent5_WdTrace(v41);
              return (struct _LDEV *)v22;
            }
          }
        }
LABEL_60:
        if ( v28 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL, v26, v27);
      }
LABEL_31:
      Win32FreePool((__int64)v20);
    }
    if ( v22 )
      Win32FreePool(v22);
LABEL_10:
    FreeSystemRelativePath(&String2);
  }
  v18 = WdLogNewEntry5_WdTrace(v11);
  *(_QWORD *)(v18 + 24) = v9;
  WdLogEvent5_WdTrace(v18);
  return v9;
}
