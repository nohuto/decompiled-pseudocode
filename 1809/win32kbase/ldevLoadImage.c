/*
 * XREFs of ldevLoadImage @ 0x1C00542D0
 * Callers:
 *     ldevLoadDriver @ 0x1C0054000 (ldevLoadDriver.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     MakeSystemRelativePath @ 0x1C0054570 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C005467C (FreeSystemRelativePath.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0095728 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1C00A67D8 (wcsrchr.c)
 *     _strnicmp @ 0x1C00A68C4 (_strnicmp.c)
 *     MakeSystemDriversRelativePath @ 0x1C0109044 (MakeSystemDriversRelativePath.c)
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
  NTSTATUS v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rax
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
  ULONG Size; // [rsp+20h] [rbp-E0h] BYREF
  ULONG ReturnLength; // [rsp+24h] [rbp-DCh] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING AnsiString; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h]
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
    v20 = (UNICODE_STRING *)PALLOCMEM2(0x38uLL, 1986292807LL, 0);
    v21 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
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
          v26 = ZwSetSystemInformation(v25, v20, 0x38uLL);
          if ( v26 >= 0 )
            goto LABEL_20;
          if ( v26 != -1073741554 )
            gulDriverFailureReason = 3;
          if ( v24 )
            goto LABEL_59;
          if ( v26 != -1073741772 )
            break;
          if ( v23 )
          {
            v23 = 0;
            FreeSystemRelativePath(&String2);
            if ( (unsigned int)MakeSystemDriversRelativePath(Source, &String2) )
              continue;
          }
          goto LABEL_61;
        }
        if ( v26 == -1073741554 )
        {
          v29 = 0;
          v30 = wcsrchr(Source, 0x5Cu);
          v31 = v30 ? v30 + 1 : Source;
          RtlInitUnicodeString(&DestinationString, v31);
          v26 = RtlUnicodeStringToAnsiString(&AnsiString, &DestinationString, 1u);
          if ( v26 >= 0 )
          {
            v26 = ZwQuerySystemInformation(SystemModuleInformation, SystemInformation, 0x130u, &ReturnLength);
            if ( (int)(v26 + 0x80000000) < 0 || v26 == -1073741820 )
            {
              v32 = 296 * SystemInformation[0];
              v33 = PALLOCMEM2((unsigned int)(296 * SystemInformation[0] + 8), 1886221383LL, 0);
              v34 = v33;
              if ( v33 )
              {
                v26 = ZwQuerySystemInformation(SystemModuleInformation, v33, v32 + 8, &ReturnLength);
                if ( v26 >= 0 )
                {
                  v35 = 0;
                  if ( *v34 )
                  {
                    while ( 1 )
                    {
                      v44 = v35;
                      if ( !strnicmp(
                              (const char *)&v34[74 * v35 + 12] + HIWORD(v34[74 * v35 + 11]),
                              AnsiString.Buffer,
                              AnsiString.Length) )
                        break;
                      if ( ++v35 >= *v34 )
                        goto LABEL_56;
                    }
                    for ( j = RtlImageDirectoryEntryToData(gpvWin32kImageBase, 1u, 1u, &Size); j; j += 5 )
                    {
                      v37 = j[3];
                      if ( !v37 || !*j )
                        break;
                      if ( !strnicmp((const char *)gpvWin32kImageBase + v37, AnsiString.Buffer, AnsiString.Length) )
                      {
                        v29 = 1;
                        v38 = *(char **)&v34[74 * v44 + 6];
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
LABEL_56:
                Win32FreePool((__int64)v34);
              }
            }
            RtlFreeAnsiString(&AnsiString);
            if ( v29 )
            {
              *(_DWORD *)(v22 + 32) |= 2u;
LABEL_20:
              v27 = *(unsigned int *)(v22 + 32);
              *(_DWORD *)(v22 + 56) = -1;
              *(_QWORD *)(v22 + 16) = v20;
              *(_DWORD *)(v22 + 28) = 1;
              *(_DWORD *)(v22 + 24) = 5;
              *(_DWORD *)(v22 + 32) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(4 * a5)) & 4;
              if ( gpldevDrivers )
                *((_QWORD *)gpldevDrivers + 1) = v22;
              *(_QWORD *)v22 = gpldevDrivers;
              *(_QWORD *)(v22 + 8) = 0LL;
              gpldevDrivers = (struct _LDEV *)v22;
              v28 = WdLogNewEntry5_WdTrace(v27);
              *(_QWORD *)(v28 + 24) = v22;
              WdLogEvent5_WdTrace(v28);
              return (struct _LDEV *)v22;
            }
          }
        }
LABEL_59:
        if ( v26 == -1073741702 )
          DrvLogDisplayDriverEvent(3LL);
      }
LABEL_61:
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
