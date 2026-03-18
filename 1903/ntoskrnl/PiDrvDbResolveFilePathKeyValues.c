/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x140879CC4
 * Callers:
 *     PiDrvDbResolveKeyFilePaths @ 0x14087A338 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14087A474 (PiDrvDbResolveNodeFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     _PnpCtxRegEnumValue @ 0x1406F9340 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F9390 (_PnpCtxRegQueryInfoKey.c)
 *     _RegRtlSetValue @ 0x140718A94 (_RegRtlSetValue.c)
 *     PiDevCfgAppendMultiSz @ 0x140865AC8 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14087A5E0 (PiDrvDbResolveSystemFilePath.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        const UNICODE_STRING *a4)
{
  unsigned int v5; // r13d
  void *v6; // r15
  SIZE_T v7; // r14
  _WORD *v8; // rsi
  char v9; // r12
  UNICODE_STRING *v10; // rdi
  int v11; // eax
  int appended; // ebx
  BOOLEAN v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  ULONG v16; // r12d
  int v17; // eax
  unsigned int v18; // r13d
  unsigned __int64 v19; // rax
  const wchar_t *v20; // r13
  const WCHAR *v21; // rdi
  ULONG *v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // ecx
  const WCHAR *v25; // rdi
  unsigned __int64 v26; // rax
  ULONG v27; // eax
  int v28; // r12d
  int v29; // eax
  unsigned __int16 Length; // ax
  const void **p_UnicodeString; // rdx
  wchar_t *Buffer; // r9
  const WCHAR *v33; // rdx
  unsigned int v34; // ecx
  const WCHAR *v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  SIZE_T v39; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-71h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-51h] BYREF
  ULONG v44; // [rsp+80h] [rbp-41h]
  HANDLE Handle; // [rsp+88h] [rbp-39h] BYREF
  HANDLE v46; // [rsp+90h] [rbp-31h] BYREF
  int v47; // [rsp+98h] [rbp-29h] BYREF
  _WORD *v48; // [rsp+A0h] [rbp-21h]
  PVOID PoolWithTag; // [rsp+A8h] [rbp-19h]
  UNICODE_STRING v50; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING v51; // [rsp+C0h] [rbp-1h] BYREF
  PVOID P[9]; // [rsp+D0h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v46 = 0LL;
  v5 = 0;
  v39 = 0LL;
  v6 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  LODWORD(v7) = 0;
  v40 = 0;
  v8 = 0LL;
  PoolWithTag = 0LL;
  v9 = a2;
  v48 = 0LL;
  v10 = a3;
  Handle = 0LL;
  P[0] = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v51.Length = 0LL;
  v51.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v51, 0LL);
  v11 = SysCtxRegOpenKey(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&v46);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    appended = 0;
    goto LABEL_88;
  }
  if ( v11 >= 0 )
  {
    appended = PiDrvDbQuerySystemPathWin32(v10, &DestinationString);
    if ( appended < 0 )
    {
      appended = 0;
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    if ( (v9 & 2) != 0 )
    {
      if ( v10 )
      {
        v13 = RtlEqualUnicodeString(v10, &PiDrvDbSystemRootNt, 1u);
        v10 = 0LL;
        if ( !v13 )
          goto LABEL_17;
      }
      if ( (UNICODE_STRING *)DestinationString.Buffer != v10
        && !RtlEqualUnicodeString(&DestinationString, &PiDrvDbSystemRootWin32, 1u) )
      {
        goto LABEL_17;
      }
    }
    else
    {
      v10 = 0LL;
    }
    if ( (v9 & 1) == 0
      || !a4
      || (UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
    {
      appended = (int)v10;
      goto LABEL_84;
    }
LABEL_17:
    if ( (int)PnpCtxRegQueryInfoKey(v14, v46, 0LL, 0LL, (__int64)v10, (__int64)&v39, (__int64)&NumberOfBytes) >= 0 )
    {
      v7 = (unsigned int)NumberOfBytes;
      HIDWORD(v39) = NumberOfBytes;
      v5 = 2 * v39 + 2;
      v40 = v5;
      if ( 2 * (_DWORD)v39 != -2 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x62647050u);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_88;
        }
      }
      if ( (_DWORD)v7 )
      {
        v48 = ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u);
        v8 = v48;
        if ( !v48 )
        {
LABEL_23:
          appended = -1073741670;
LABEL_84:
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
LABEL_86:
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          goto LABEL_88;
        }
      }
    }
    v16 = (unsigned int)v10;
LABEL_25:
    v44 = v16;
    LODWORD(NumberOfBytes) = v5 >> 1;
    LODWORD(v39) = v7;
    v17 = PnpCtxRegEnumValue(v15, v46, v16, v6, (__int64)&NumberOfBytes, (__int64)&v47, v8, (ULONG)&v39);
    if ( v17 == -2147483622 )
      goto LABEL_84;
    if ( v17 == -1073741789 )
    {
      if ( (unsigned int)NumberOfBytes > v5 >> 1 )
      {
        v18 = 2 * NumberOfBytes;
        v40 = 2 * NumberOfBytes;
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x62647050u);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
        {
          appended = -1073741670;
          goto LABEL_86;
        }
      }
      if ( (unsigned int)v39 <= (unsigned int)v7 )
        goto LABEL_35;
      v7 = (unsigned int)v39;
      HIDWORD(v39) = v39;
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      v48 = ExAllocatePoolWithTag(PagedPool, v7, 0x62647050u);
      v8 = v48;
      if ( v48 )
      {
LABEL_35:
        --v16;
        goto LABEL_80;
      }
      goto LABEL_23;
    }
    if ( v17 < 0 )
      goto LABEL_82;
    if ( v47 != 7 )
      goto LABEL_80;
    if ( (unsigned int)v39 < 4 )
      goto LABEL_80;
    v19 = (unsigned __int64)(unsigned int)v39 >> 1;
    if ( v8[v19 - 1] )
      goto LABEL_80;
    if ( v8[v19 - 2] )
      goto LABEL_80;
    v17 = SysCtxRegOpenKey(0LL, a1, (__int64)v6, 0, 0x2001Fu, (__int64)&Handle);
    if ( v17 == -1073741772 )
      goto LABEL_80;
    if ( v17 < 0 )
    {
LABEL_82:
      appended = v17;
      goto LABEL_84;
    }
    v20 = v8;
    if ( !*v8 )
      goto LABEL_79;
    while ( 1 )
    {
      v21 = &word_14078CDD0;
      if ( wcsicmp(v20, L" ") )
        v21 = v20;
      NumberOfBytes = (SIZE_T)v21;
      if ( IopGetRegistryValue(Handle, v21, 0, P) >= 0 )
        break;
LABEL_75:
      v37 = -1LL;
      do
        ++v37;
      while ( v20[v37] );
      v20 += v37 + 1;
      if ( !*v20 )
      {
LABEL_78:
        v8 = v48;
        v6 = PoolWithTag;
        LODWORD(v7) = HIDWORD(v39);
        v16 = v44;
LABEL_79:
        ZwClose(Handle);
        if ( appended < 0 )
          goto LABEL_84;
LABEL_80:
        v5 = v40;
        ++v16;
        goto LABEL_25;
      }
    }
    v22 = (ULONG *)P[0];
    v23 = *((_DWORD *)P[0] + 1);
    if ( v23 )
    {
      if ( v23 <= 2 )
      {
        v34 = *((_DWORD *)P[0] + 3);
        v35 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        if ( v34 - 3 > 0xFFFB || v35[((unsigned __int64)v34 >> 1) - 1] )
          goto LABEL_74;
        RtlInitUnicodeString(&v50, v35);
        UnicodeString.Length = 0;
        v36 = PiDrvDbResolveSystemFilePath(
                &v50,
                a2,
                a3,
                (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                a4,
                &UnicodeString);
        appended = v36;
        if ( v36 == -1073741275 || v36 == -1073741637 )
        {
          appended = 0;
          goto LABEL_74;
        }
        if ( v36 < 0 )
          goto LABEL_74;
        v33 = v21;
        Buffer = UnicodeString.Buffer;
        v27 = UnicodeString.Length + 2;
      }
      else
      {
        if ( v23 != 7 )
          goto LABEL_74;
        v24 = *((_DWORD *)P[0] + 3);
        v25 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
        if ( v24 - 4 > 0xFFFA )
          goto LABEL_74;
        v26 = (unsigned __int64)v24 >> 1;
        if ( v25[v26 - 1] || v25[v26 - 2] )
          goto LABEL_74;
        LOWORD(v27) = 0;
        v28 = 0;
        v51.Length = 0;
        if ( *v25 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&v50, v25);
            UnicodeString.Length = 0;
            v29 = PiDrvDbResolveSystemFilePath(
                    &v50,
                    a2,
                    a3,
                    (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                    a4,
                    &UnicodeString);
            appended = v29;
            if ( v29 == -1073741275 || v29 == -1073741637 )
            {
              Length = 0;
              UnicodeString.Length = 0;
            }
            else
            {
              if ( v29 < 0 )
                goto LABEL_74;
              Length = UnicodeString.Length;
              ++v28;
            }
            p_UnicodeString = (const void **)&UnicodeString;
            if ( !Length )
              p_UnicodeString = (const void **)&v50;
            appended = PiDevCfgAppendMultiSz(&v51, p_UnicodeString, 0LL, 1);
            if ( appended < 0 )
              goto LABEL_74;
            v25 += ((unsigned __int64)v50.Length >> 1) + 1;
            if ( !*v25 )
            {
              LOWORD(v27) = v51.Length;
              break;
            }
          }
        }
        if ( !v28 )
          goto LABEL_74;
        Buffer = v51.Buffer;
        v33 = (const WCHAR *)NumberOfBytes;
        v27 = (unsigned __int16)v27;
      }
      appended = RegRtlSetValue(Handle, v33, v22[1], Buffer, v27);
    }
LABEL_74:
    ExFreePoolWithTag(v22, 0);
    if ( appended < 0 )
      goto LABEL_78;
    goto LABEL_75;
  }
LABEL_88:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v51);
  if ( v46 )
    ZwClose(v46);
  return (unsigned int)appended;
}
