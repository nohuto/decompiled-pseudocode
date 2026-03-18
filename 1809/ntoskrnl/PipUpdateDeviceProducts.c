/*
 * XREFs of PipUpdateDeviceProducts @ 0x140181D80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryBootTimeValues @ 0x140129290 (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195910 (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C7C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGetPersistedStateLocation @ 0x140612450 (RtlGetPersistedStateLocation.c)
 *     _PnpCtxRegCreateTree @ 0x1406D3510 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x1406E6484 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406F5604 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F5654 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegQueryValue @ 0x14073C324 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x14073C35C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14073C374 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14073C3B0 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1408F5ED4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x1408F5F08 (_PnpCtxRegSetValue.c)
 */

void __fastcall PipUpdateDeviceProducts(void *a1)
{
  unsigned int v1; // esi
  PVOID v2; // rbx
  PVOID v3; // rdi
  void *v4; // r15
  PVOID v5; // r13
  int v6; // ebx
  int v7; // ecx
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
  SIZE_T v20; // [rsp+48h] [rbp-59h] BYREF
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-51h] BYREF
  void *v22; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h] BYREF
  __int64 v28; // [rsp+80h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+88h] [rbp-19h] BYREF
  LARGE_INTEGER v30; // [rsp+90h] [rbp-11h] BYREF
  __int64 v31; // [rsp+98h] [rbp-9h] BYREF
  PVOID PoolWithTag; // [rsp+A0h] [rbp-1h] BYREF
  int v33; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+Fh] BYREF
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  P = a1;
  v2 = a1;
  v28 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  PoolWithTag = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v5 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v25 = 0;
  v26 = 0;
  LODWORD(v20) = 0;
  v29 = 0;
  v22 = 0LL;
  if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 15LL, &PoolWithTag) < 0
    || (unsigned int)PnpCtxRegOpenKey(
                       0,
                       (_DWORD)PoolWithTag,
                       (unsigned int)L"Current\\ProductIds",
                       0,
                       131097,
                       (__int64)&v31) == -1073741772
    || (unsigned int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", 0LL, 0, (__int64)&NumberOfBytes) != -2147483643 )
  {
    v14 = 0LL;
    goto LABEL_36;
  }
  v6 = NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_72;
  if ( (int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", PoolWithTag, v6, (__int64)&NumberOfBytes) < 0 )
    goto LABEL_72;
  if ( (unsigned int)PnpCtxRegCreateTree(0, -2147483646, (_DWORD)v4, 0, 131103, 0LL, (__int64)&v28, 0LL) )
    goto LABEL_72;
  KeQueryBootTimeValues(&v34, &v30, &NumberOfBytes);
  v30.QuadPart -= NumberOfBytes;
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v7, v28, (unsigned int)&v20, (unsigned int)&v25, 0LL, 0LL, 0LL) )
    goto LABEL_72;
  v9 = v20;
  if ( !(_DWORD)v20 )
    goto LABEL_22;
  v10 = v25 + 1;
  v5 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v25 + 1), 0x6E697050u);
  if ( !v5 )
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
    if ( (int)PnpCtxRegEnumKey(v8, v28, v1, (_DWORD)v5, (__int64)&v25) >= 0
      && (int)PnpCtxRegOpenKey(0, v28, (_DWORD)v5, 0, 131103, (__int64)&v24) >= 0 )
    {
      LODWORD(v20) = 14;
      if ( (int)PnpCtxRegQueryValue(v8, v24, L"Source", &NumberOfBytes, Str1, &v20) >= 0
        && (_DWORD)NumberOfBytes == 1
        && (_DWORD)v20 == 14
        && !wcsicmp(Str1, L"SMBIOS") )
      {
        LODWORD(v20) = 0;
        if ( (unsigned int)PnpCtxRegQueryValue(v8, v31, v5, 0LL, 0LL, &v20) == -1073741772 )
        {
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(v20) = 0;
          v16 = PnpCtxRegQueryValue(v8, v24, L"Version", &NumberOfBytes, v3, &v20);
          if ( v16 == -1073741789 )
          {
            v17 = v20;
            v3 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v20, 0x6E697050u);
            if ( !v3 )
            {
LABEL_66:
              PnpCtxRegSetValue(v8, v24, L"DeactivationTime", 3LL, &v30, 8);
              if ( v3 )
                PnpCtxRegSetValue(v18, v24, L"DeactivationVersion", 1LL, v3, v17);
              PnpCtxRegDeleteValue(v18, v24, L"Version");
              goto LABEL_20;
            }
            v16 = PnpCtxRegQueryValue(v8, v24, L"Version", &NumberOfBytes, v3, &v20);
          }
          if ( v16 == -1073741772 )
            goto LABEL_20;
          v17 = v20;
          if ( (v16 < 0 || (_DWORD)NumberOfBytes != 1 || (unsigned int)v20 < 2) && v3 )
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
  v4 = PoolWithTag;
LABEL_22:
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v8, v31, 0, 0, (__int64)&v29, (__int64)&v26, 0LL) || (v11 = v29) == 0 )
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
          if ( (int)PnpCtxRegEnumValue(v13, v31, v15, (_DWORD)v14, (__int64)&v26, 0LL, 0LL, 0LL) >= 0
            && (int)PnpCtxRegCreateKey(0, v28, (_DWORD)v14, 0, 131078, 0LL, (__int64)&v27, (__int64)&v33) >= 0 )
          {
            if ( v33 == 1 )
              PnpCtxRegSetValue(v13, v27, L"CreationTime", 3LL, &v30, 8);
            LODWORD(v20) = 0;
            if ( (unsigned int)PnpCtxRegQueryValue(v13, v27, L"Version", 0LL, 0LL, &v20) == -1073741772
              && (int)PnpCtxRegSetValue(v13, v27, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
            {
              PnpCtxRegSetValue(v13, v27, L"ActivationTime", 3LL, &v30, 8);
              PnpCtxRegSetValue(v19, v27, L"Source", 1LL, L"SMBIOS", 14);
            }
          }
          ++v15;
        }
        while ( v15 < v11 );
        v4 = PoolWithTag;
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
  if ( v28 )
    PnpCtxRegCloseKey();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
