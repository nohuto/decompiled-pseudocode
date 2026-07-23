/*
 * XREFs of DrvDbCreateDatabaseNode @ 0x14073C5D8
 * Callers:
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbRegisterDatabase @ 0x14073C544 (DrvDbRegisterDatabase.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        wchar_t *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // r12
  int v10; // edi
  _QWORD *v13; // rbx
  wchar_t *PoolWithTag; // rsi
  _QWORD *v15; // rax
  int v16; // r13d
  struct _ERESOURCE *v17; // rax
  int v18; // edi
  _QWORD *v19; // rcx
  __int64 v21; // rax
  SIZE_T v22; // rdi
  _QWORD *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  void *v26; // rbp
  __int64 dwFlags; // [rsp+20h] [rbp-78h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-70h]
  HANDLE Handle[9]; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a8;
  Handle[0] = 0LL;
  v31 = 0;
  v10 = a3;
  *a8 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    PoolWithTag = a4;
  }
  else
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a2[v21] );
    v22 = (unsigned int)(2 * v21 + 68);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x42444450u);
    if ( !PoolWithTag )
      goto LABEL_25;
    v18 = RtlStringCchPrintfExW(
            PoolWithTag,
            v22 >> 1,
            0LL,
            0LL,
            0x800u,
            L"%ws\\%ws\\%ws",
            L"\\REGISTRY\\MACHINE",
            a2,
            L"DriverDatabase");
    if ( v18 < 0 )
      goto LABEL_13;
    v10 = a3;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x42444450u);
  v13 = v15;
  if ( !v15 )
  {
LABEL_25:
    v18 = -1073741801;
    goto LABEL_13;
  }
  memset(v15, 0, 0xA0uLL);
  v16 = a5;
  *((_DWORD *)v13 + 15) = *(_DWORD *)(a1 + 8);
  v13[9] = a6;
  v13[10] = a7;
  *((_DWORD *)v13 + 16) = 0x10000;
  *((_DWORD *)v13 + 14) = v16;
  *((_DWORD *)v13 + 8) = v10;
  if ( RtlCreateUnicodeString((PUNICODE_STRING)v13 + 1, a2)
    && RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 5), PoolWithTag) )
  {
    v17 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    v13[18] = v17;
    if ( v17 )
    {
      v18 = ExInitializeResourceLite(v17);
      if ( v18 < 0 )
      {
        ExFreePoolWithTag((PVOID)v13[18], 0);
        v13[18] = 0LL;
      }
    }
    else
    {
      v18 = -1073741670;
    }
    if ( v18 >= 0 )
    {
      v19 = *(_QWORD **)(a1 + 24);
      if ( *v19 != a1 + 16 )
        goto LABEL_40;
      *v13 = a1 + 16;
      v13[1] = v19;
      *v19 = v13;
      *(_QWORD *)(a1 + 24) = v13;
      if ( (v16 & 0x10) == 0
        || (v23 = *(_QWORD **)(a1 + 32)) == 0LL
        || (LOBYTE(pszFormat) = 1,
            LODWORD(dwFlags) = 0x2000000,
            v18 = DrvDbOpenObjectRegKey((_QWORD *)a1, v23, 1u, a2, dwFlags, pszFormat, Handle, &v31),
            v18 >= 0)
        && (v31 != 1
         || (v18 = DrvDbSetDriverDatabaseMappedProperty(
                     a1,
                     a2,
                     Handle[0],
                     &DEVPKEY_DriverDatabase_RegistryPath,
                     18,
                     v13[6],
                     *((unsigned __int16 *)v13 + 21)),
             v18 >= 0)) )
      {
        *v8 = v13;
        v13 = 0LL;
      }
    }
  }
  else
  {
    v18 = -1073741670;
  }
LABEL_13:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v13 )
  {
    v24 = *v13;
    if ( !*v13 )
    {
LABEL_37:
      v26 = (void *)v13[18];
      if ( v26 )
      {
        ExDeleteResourceLite((PERESOURCE)v13[18]);
        ExFreePoolWithTag(v26, 0);
      }
      RtlFreeAnsiString((PUNICODE_STRING)v13 + 1);
      RtlFreeAnsiString((PUNICODE_STRING)(v13 + 5));
      ExFreePoolWithTag(v13, 0);
      goto LABEL_16;
    }
    if ( *(_QWORD **)(v24 + 8) == v13 )
    {
      v25 = (_QWORD *)v13[1];
      if ( (_QWORD *)*v25 == v13 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        goto LABEL_37;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_16:
  if ( PoolWithTag && PoolWithTag != a4 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v18;
}
