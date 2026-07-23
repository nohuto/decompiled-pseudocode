/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x14083F81C
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x14083FDE4 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083FF38 (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     PiDevCfgAppendMultiSz @ 0x14082C4C8 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083F5D4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(__int64 a1, __int64 a2, UNICODE_STRING *a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // r12d
  void *v7; // r15
  SIZE_T v8; // r14
  wchar_t *v9; // rdi
  int v11; // eax
  int appended; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rax
  const wchar_t *v17; // r13
  const WCHAR *v18; // rsi
  ULONG *v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // ecx
  const WCHAR *v22; // rsi
  unsigned __int64 v23; // rax
  ULONG v24; // eax
  int v25; // r12d
  int v26; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  wchar_t *Buffer; // r9
  const WCHAR *v30; // rdx
  unsigned int v31; // ecx
  const WCHAR *v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  SIZE_T v36; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-71h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-61h]
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-51h] BYREF
  HANDLE v42; // [rsp+80h] [rbp-41h] BYREF
  int v43; // [rsp+88h] [rbp-39h] BYREF
  wchar_t *v44; // [rsp+90h] [rbp-31h]
  PVOID PoolWithTag; // [rsp+98h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-21h] BYREF
  PVOID P; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING SourceString; // [rsp+B8h] [rbp-9h] BYREF
  UNICODE_STRING v49; // [rsp+C8h] [rbp+7h] BYREF

  v4 = 0;
  v42 = 0LL;
  v36 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = 0;
  v37 = 0;
  v7 = 0LL;
  PoolWithTag = 0LL;
  LODWORD(v8) = 0;
  v9 = 0LL;
  v44 = 0LL;
  Handle = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v49, 0LL);
  v11 = SysCtxRegOpenKey(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&v42);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    appended = 0;
    goto LABEL_76;
  }
  if ( v11 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(a3, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (int)PnpCtxRegQueryInfoKey(v13, (int)v42, 0, 0, 0LL, (__int64)&v36, (__int64)&NumberOfBytes) < 0 )
      goto LABEL_14;
    v8 = (unsigned int)NumberOfBytes;
    HIDWORD(v36) = NumberOfBytes;
    v6 = 2 * v36 + 2;
    v37 = v6;
    if ( 2 * (_DWORD)v36 != -2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x62647050u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
      {
        appended = -1073741670;
        goto LABEL_76;
      }
    }
    if ( !(_DWORD)v8 || (v44 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u), (v9 = v44) != 0LL) )
    {
LABEL_14:
      while ( 1 )
      {
        v39 = v4;
        LODWORD(NumberOfBytes) = v6 >> 1;
        LODWORD(v36) = v8;
        v15 = PnpCtxRegEnumValue(
                v14,
                (__int64)v42,
                v4,
                (__int64)v7,
                (__int64)&NumberOfBytes,
                (__int64)&v43,
                (__int64)v9,
                (__int64)&v36);
        if ( v15 == -2147483622 )
          goto LABEL_72;
        if ( v15 == -1073741789 )
          break;
        v14 = 0LL;
        if ( v15 < 0 )
          goto LABEL_71;
        if ( v43 == 7 && (unsigned int)v36 >= 4 )
        {
          v16 = (unsigned __int64)(unsigned int)v36 >> 1;
          if ( !v9[v16 - 1] && !v9[v16 - 2] )
          {
            v15 = SysCtxRegOpenKey(0LL, a1, (__int64)v7, 0, 0x2001Fu, (__int64)&Handle);
            if ( v15 != -1073741772 )
            {
              if ( v15 < 0 )
              {
LABEL_71:
                appended = v15;
                goto LABEL_72;
              }
              v17 = v9;
              if ( !*v9 )
                goto LABEL_67;
              while ( 2 )
              {
                v18 = &word_140767740;
                if ( wcsicmp(v17, L" ") )
                  v18 = v17;
                NumberOfBytes = (SIZE_T)v18;
                if ( IopGetRegistryValue(Handle, v18, 0, &P) >= 0 )
                {
                  v19 = (ULONG *)P;
                  v20 = *((_DWORD *)P + 1);
                  if ( v20 )
                  {
                    if ( v20 <= 2 )
                    {
                      v31 = *((_DWORD *)P + 3);
                      v32 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
                      if ( v31 - 3 <= 0xFFFB && !v32[((unsigned __int64)v31 >> 1) - 1] )
                      {
                        RtlInitUnicodeString(&SourceString, v32);
                        UnicodeString.Length = 0;
                        v33 = PiDrvDbResolveSystemFilePath(&SourceString, a4, &UnicodeString);
                        appended = v33;
                        if ( v33 == -1073741275 || v33 == -1073741637 )
                        {
                          appended = 0;
                        }
                        else if ( v33 >= 0 )
                        {
                          v30 = v18;
                          Buffer = UnicodeString.Buffer;
                          v24 = UnicodeString.Length + 2;
LABEL_54:
                          appended = RegRtlSetValue(Handle, v30, v19[1], Buffer, v24);
                        }
                      }
                    }
                    else if ( v20 == 7 )
                    {
                      v21 = *((_DWORD *)P + 3);
                      v22 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
                      if ( v21 - 4 <= 0xFFFA )
                      {
                        v23 = (unsigned __int64)v21 >> 1;
                        if ( !v22[v23 - 1] && !v22[v23 - 2] )
                        {
                          LOWORD(v24) = 0;
                          v25 = 0;
                          v49.Length = 0;
                          if ( *v22 )
                          {
                            while ( 1 )
                            {
                              RtlInitUnicodeString(&SourceString, v22);
                              UnicodeString.Length = 0;
                              v26 = PiDrvDbResolveSystemFilePath(&SourceString, a4, &UnicodeString);
                              appended = v26;
                              if ( v26 == -1073741275 || v26 == -1073741637 )
                              {
                                Length = 0;
                                UnicodeString.Length = 0;
                              }
                              else
                              {
                                if ( v26 < 0 )
                                  goto LABEL_62;
                                Length = UnicodeString.Length;
                                ++v25;
                              }
                              p_UnicodeString = (const void **)&UnicodeString;
                              if ( !Length )
                                p_UnicodeString = (const void **)&SourceString;
                              appended = PiDevCfgAppendMultiSz(&v49, p_UnicodeString, 0LL, 1);
                              if ( appended < 0 )
                                goto LABEL_62;
                              v22 += ((unsigned __int64)SourceString.Length >> 1) + 1;
                              if ( !*v22 )
                              {
                                LOWORD(v24) = v49.Length;
                                break;
                              }
                            }
                          }
                          if ( v25 )
                          {
                            Buffer = v49.Buffer;
                            v30 = (const WCHAR *)NumberOfBytes;
                            v24 = (unsigned __int16)v24;
                            goto LABEL_54;
                          }
                        }
                      }
                    }
                  }
LABEL_62:
                  ExFreePoolWithTag(v19, 0);
                  if ( appended < 0 )
                    goto LABEL_66;
                }
                v34 = -1LL;
                do
                  ++v34;
                while ( v17[v34] );
                v17 += v34 + 1;
                if ( !*v17 )
                {
LABEL_66:
                  v9 = v44;
                  v7 = PoolWithTag;
                  LODWORD(v8) = HIDWORD(v36);
                  v6 = v37;
LABEL_67:
                  ZwClose(Handle);
                  if ( appended >= 0 )
                  {
                    v4 = v39;
                    break;
                  }
LABEL_72:
                  if ( v7 )
                    ExFreePoolWithTag(v7, 0);
LABEL_74:
                  if ( v9 )
                    ExFreePoolWithTag(v9, 0);
                  goto LABEL_76;
                }
                continue;
              }
            }
          }
        }
LABEL_69:
        ++v4;
      }
      if ( (unsigned int)NumberOfBytes > v6 >> 1 )
      {
        v6 = 2 * NumberOfBytes;
        v37 = 2 * NumberOfBytes;
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x62647050u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_74;
        }
      }
      if ( (unsigned int)v36 <= (unsigned int)v8 )
        goto LABEL_23;
      v8 = (unsigned int)v36;
      HIDWORD(v36) = v36;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v44 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
      v9 = v44;
      if ( v44 )
      {
LABEL_23:
        --v4;
        goto LABEL_69;
      }
    }
    appended = -1073741670;
    goto LABEL_72;
  }
LABEL_76:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v49);
  if ( v42 )
    ZwClose(v42);
  return (unsigned int)appended;
}
