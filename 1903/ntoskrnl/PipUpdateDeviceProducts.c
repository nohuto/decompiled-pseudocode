/*
 * XREFs of PipUpdateDeviceProducts @ 0x140197780
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryBootTimeValues @ 0x14012A1E4 (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetPersistedStateLocation @ 0x1405C0E20 (RtlGetPersistedStateLocation.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406F30B4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumValue @ 0x1406F9340 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F9390 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegCreateKey @ 0x140707418 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x140708C20 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegEnumKey @ 0x14077AFE4 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140933B6C (_PnpCtxRegDeleteValue.c)
 */

void __fastcall PipUpdateDeviceProducts(void *a1)
{
  unsigned int v1; // esi
  PVOID v2; // rbx
  PVOID v3; // rdi
  PWCHAR v4; // r15
  PVOID PoolWithTag; // r13
  ULONG BufferLengthIn; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r12d
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  PVOID v14; // r12
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-59h] BYREF
  ULONG BufferLengthOut[2]; // [rsp+50h] [rbp-51h] BYREF
  void *v22; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h] BYREF
  LARGE_INTEGER v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-11h] BYREF
  __int64 v31; // [rsp+98h] [rbp-9h] BYREF
  PWCHAR TargetPath; // [rsp+A0h] [rbp-1h] BYREF
  int v33; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+Fh] BYREF
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  P = a1;
  v2 = a1;
  v28.QuadPart = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  TargetPath = 0LL;
  v27 = 0LL;
  PoolWithTag = 0LL;
  v31 = 0LL;
  BufferLengthOut[0] = 0;
  v25 = 0;
  v26 = 0;
  LODWORD(NumberOfBytes) = 0;
  v30 = 0;
  v22 = 0LL;
  if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 15LL, &TargetPath) < 0
    || (unsigned int)PnpCtxRegOpenKey(
                       0,
                       (_DWORD)TargetPath,
                       (unsigned int)L"Current\\ProductIds",
                       0,
                       131097,
                       (__int64)&v31) == -1073741772
    || RtlGetPersistedStateLocation(
         L"DynamicInstalledProducts",
         0LL,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
         LocationTypeRegistry,
         0LL,
         0,
         BufferLengthOut) != -2147483643 )
  {
    v14 = 0LL;
    goto LABEL_36;
  }
  BufferLengthIn = BufferLengthOut[0];
  TargetPath = (PWCHAR)ExAllocatePoolWithTag(PagedPool, BufferLengthOut[0], 0x6E697050u);
  v4 = TargetPath;
  if ( !TargetPath )
    goto LABEL_72;
  if ( RtlGetPersistedStateLocation(
         L"DynamicInstalledProducts",
         0LL,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Update\\TargetingInfo\\DynamicInstalled",
         LocationTypeRegistry,
         TargetPath,
         BufferLengthIn,
         BufferLengthOut) < 0 )
    goto LABEL_72;
  if ( (unsigned int)PnpCtxRegCreateTree(0, 0, (_DWORD)v4, 0, 131103, 0LL, (__int64)&v29, 0LL) )
    goto LABEL_72;
  KeQueryBootTimeValues(&v34, &v28, BufferLengthOut);
  v28.QuadPart -= *(_QWORD *)BufferLengthOut;
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v7, v29, &NumberOfBytes, &v25, 0LL, 0LL, 0LL) )
    goto LABEL_72;
  v9 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_22;
  v10 = v25 + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v25 + 1), 0x6E697050u);
  if ( !PoolWithTag )
  {
LABEL_72:
    v14 = 0LL;
    goto LABEL_35;
  }
  if ( !v9 )
    goto LABEL_22;
  do
  {
    v25 = v10;
    if ( v24 )
    {
      PnpCtxRegCloseKey();
      v24 = 0LL;
    }
    if ( (int)PnpCtxRegEnumKey(v8, v29, v1, PoolWithTag, &v25) >= 0
      && (int)PnpCtxRegOpenKey(0, v29, (_DWORD)PoolWithTag, 0, 131103, (__int64)&v24) >= 0 )
    {
      LODWORD(NumberOfBytes) = 14;
      if ( (int)PnpCtxRegQueryValue(v8, v24, L"Source", BufferLengthOut, Str1, &NumberOfBytes) >= 0
        && BufferLengthOut[0] == 1
        && (_DWORD)NumberOfBytes == 14
        && !wcsicmp(Str1, L"SMBIOS") )
      {
        LODWORD(NumberOfBytes) = 0;
        if ( (unsigned int)PnpCtxRegQueryValue(v8, v31, PoolWithTag, 0LL, 0LL, &NumberOfBytes) == -1073741772 )
        {
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(NumberOfBytes) = 0;
          v16 = PnpCtxRegQueryValue(v8, v24, L"Version", BufferLengthOut, v3, &NumberOfBytes);
          if ( v16 == -1073741789 )
          {
            v17 = NumberOfBytes;
            v3 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
            if ( !v3 )
            {
LABEL_66:
              PnpCtxRegSetValue(v8, v24, L"DeactivationTime", 3LL, &v28, 8);
              if ( v3 )
                PnpCtxRegSetValue(v18, v24, L"DeactivationVersion", 1LL, v3, v17);
              PnpCtxRegDeleteValue(v18, v24, L"Version");
              goto LABEL_20;
            }
            v16 = PnpCtxRegQueryValue(v8, v24, L"Version", BufferLengthOut, v3, &NumberOfBytes);
          }
          if ( v16 == -1073741772 )
            goto LABEL_20;
          v17 = NumberOfBytes;
          if ( (v16 < 0 || BufferLengthOut[0] != 1 || (unsigned int)NumberOfBytes < 2) && v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          goto LABEL_66;
        }
      }
    }
LABEL_20:
    ++v1;
  }
  while ( v1 < v9 );
  v4 = TargetPath;
LABEL_22:
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v8, v31, 0LL, 0LL, &v30, &v26, 0LL) || (v11 = v30) == 0 )
  {
    v14 = v22;
  }
  else
  {
    v12 = v26 + 1;
    v14 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v26 + 1), 0x6E697050u);
    if ( v14 )
    {
      v15 = 0;
      if ( v11 )
      {
        do
        {
          v26 = v12;
          if ( v27 )
          {
            PnpCtxRegCloseKey();
            v27 = 0LL;
          }
          if ( (int)PnpCtxRegEnumValue(v13, v31, v15, v14, &v26, 0LL, 0LL, 0LL) >= 0
            && (int)PnpCtxRegCreateKey(0, v29, (_DWORD)v14, 0, 131078, 0LL, (__int64)&v27, (__int64)&v33) >= 0 )
          {
            if ( v33 == 1 )
              PnpCtxRegSetValue(v13, v27, L"CreationTime", 3LL, &v28, 8);
            LODWORD(NumberOfBytes) = 0;
            if ( (unsigned int)PnpCtxRegQueryValue(v13, v27, L"Version", 0LL, 0LL, &NumberOfBytes) == -1073741772
              && (int)PnpCtxRegSetValue(v13, v27, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
            {
              PnpCtxRegSetValue(v13, v27, L"ActivationTime", 3LL, &v28, 8);
              PnpCtxRegSetValue(v19, v27, L"Source", 1LL, L"SMBIOS", 14);
            }
          }
          ++v15;
        }
        while ( v15 < v11 );
        v4 = TargetPath;
      }
    }
  }
LABEL_35:
  v2 = P;
LABEL_36:
  if ( v27 )
    PnpCtxRegCloseKey();
  if ( v31 )
    PnpCtxRegCloseKey();
  if ( v24 )
    PnpCtxRegCloseKey();
  if ( v29 )
    PnpCtxRegCloseKey();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
