/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406F34A0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140941F7C (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     DrvDbOpenObjectRegKey @ 0x1406F38E4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F3DC8 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406F407C (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406F4880 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407578F8 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1409418F4 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *SourceString,
        unsigned int a7)
{
  int DatabaseNode; // esi
  const UNICODE_STRING *v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r10d
  __int64 **v21; // r8
  __int64 *v22; // r9
  _UNKNOWN **v23; // r10
  _UNKNOWN **v24; // r13
  unsigned int v25; // r8d
  _QWORD *v26; // r9
  int v27; // eax
  __int64 v28; // rax
  struct _KTHREAD *v29; // rax
  const UNICODE_STRING *v30; // rbx
  int v31; // eax
  struct _ERESOURCE *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _UNKNOWN **v36; // r10
  unsigned int v37; // r8d
  _QWORD *v38; // r9
  __int64 v39; // rcx
  HANDLE v40; // r13
  int v41; // eax
  __int64 v42; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v44; // rdi
  UNICODE_STRING v45; // xmm0
  const UNICODE_STRING *v47; // [rsp+50h] [rbp-30h] BYREF
  _UNKNOWN **v48; // [rsp+58h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  v47 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  DatabaseNode = 0;
  v11 = 0LL;
  v12 = wcsicmp(a2, L"*");
  v14 = *(_DWORD *)(a4 + 16);
  if ( v12 )
  {
    if ( v14 == 2 )
    {
      v19 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v19 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v19 )
      {
LABEL_26:
        DatabaseNode = -1073741790;
        goto LABEL_126;
      }
    }
    v20 = 0;
    v21 = &off_140427060;
    while ( 1 )
    {
      v22 = *v21;
      if ( *((_DWORD *)*v21 + 4) == v14 )
      {
        v13 = *v22 - *(_QWORD *)a4;
        if ( *v22 == *(_QWORD *)a4 )
          v13 = v22[1] - *(_QWORD *)(a4 + 8);
        if ( !v13 )
          break;
      }
      ++v20;
      ++v21;
      if ( v20 >= 7 )
      {
        v48 = 0LL;
        v23 = &off_1403704D0;
        v24 = 0LL;
        v25 = 0;
        while ( 1 )
        {
          v26 = *v23;
          if ( *((_DWORD *)*v23 + 4) == v14 )
          {
            v13 = *v26 - *(_QWORD *)a4;
            if ( *v26 == *(_QWORD *)a4 )
              v13 = v26[1] - *(_QWORD *)(a4 + 8);
            if ( !v13 )
              break;
          }
          ++v25;
          v23 += 5;
          if ( v25 >= 0xC )
            goto LABEL_85;
        }
        v13 = 5LL * v25;
        v24 = &off_1403704D0 + 5 * v25;
        v48 = v24;
LABEL_85:
        if ( v24 )
          goto LABEL_98;
        v48 = 0LL;
        v36 = &off_140376640;
        v24 = 0LL;
        v37 = 0;
        while ( 1 )
        {
          v38 = *v36;
          if ( *((_DWORD *)*v36 + 4) == v14 )
          {
            v39 = *v38 - *(_QWORD *)a4;
            if ( *v38 == *(_QWORD *)a4 )
              v39 = v38[1] - *(_QWORD *)(a4 + 8);
            if ( !v39 )
              break;
          }
          ++v37;
          v36 += 5;
          if ( v37 >= 4 )
            goto LABEL_94;
        }
        v24 = &off_140376640 + 5 * v37;
        v48 = v24;
LABEL_94:
        if ( !v24 )
        {
          DatabaseNode = -1073741802;
          goto LABEL_126;
        }
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v47);
        if ( DatabaseNode < 0 )
          goto LABEL_126;
        v11 = v47;
        if ( ((__int64)v47[3].Buffer & 0x10) == 0 )
          goto LABEL_26;
LABEL_98:
        if ( a5 == *((_DWORD *)v24 + 2) || !a5 )
        {
          v40 = a3;
          if ( !a3 || v11 && ((__int64)v11[3].Buffer & 0x10) != 0 )
          {
            v41 = v11 && ((__int64)v11[3].Buffer & 0x10) != 0
                ? DrvDbOpenObjectRegKey((__int64 *)a1, *(__int64 **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL, 0LL)
                : DrvDbOpenDriverDatabaseRegKey((const UNICODE_STRING **)a1, a2, 2u, 0, (__int64)&Handle, 0LL);
            DatabaseNode = v41;
            if ( v41 < 0 )
              goto LABEL_126;
          }
          if ( Handle )
            v40 = Handle;
          DatabaseNode = DrvDbSetRegValueMappedProperty(v13, v40, v48, a5, SourceString, a7);
          if ( DatabaseNode < 0 || !v11 || ((__int64)v11[3].Buffer & 0x10) == 0 || *(_DWORD *)(a4 + 16) != 14 )
            goto LABEL_126;
          v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
            v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v42 || !a5 )
            goto LABEL_126;
          if ( a7 >= 2 && SourceString && !SourceString[((unsigned __int64)a7 >> 1) - 1] )
          {
            if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
            {
              DatabaseNode = -1073741670;
              goto LABEL_126;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v44 = v47;
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v47[9].Length, 1u);
            RtlFreeAnsiString((PUNICODE_STRING)&v44[2].Buffer);
            v45 = DestinationString;
            *(_DWORD *)&v44[2].Length = 0;
            *(UNICODE_STRING *)&v44[2].Buffer = v45;
            v32 = *(struct _ERESOURCE **)&v44[9].Length;
            goto LABEL_124;
          }
        }
        goto LABEL_125;
      }
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v47);
    if ( DatabaseNode < 0 )
      goto LABEL_126;
    v27 = *(_DWORD *)(a4 + 16);
    switch ( v27 )
    {
      case 5:
        v28 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v28 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v28 )
          goto LABEL_126;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( ((__int64)v47[3].Buffer & 1) != 0 )
            goto LABEL_26;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          v30 = v47;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v47[9].Length, 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v31 = DrvDbLoadDatabaseNode(a1, (__int64)v30);
          else
            v31 = DrvDbUnloadDatabaseNode(a1, (__int64)v30);
          v32 = *(struct _ERESOURCE **)&v30[9].Length;
          DatabaseNode = v31;
LABEL_124:
          ExReleaseResourceLite(v32);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_126;
        }
        goto LABEL_125;
      case 6:
        v33 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
          v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( !v33 )
        {
          if ( a5 != 17 || a7 != 1 || !SourceString )
            goto LABEL_125;
          if ( *(_BYTE *)SourceString == 0xFF )
          {
            *(_QWORD *)(a1 + 40) = v47;
          }
          else if ( v47 == *(const UNICODE_STRING **)(a1 + 40) || !v47 )
          {
            *(_QWORD *)(a1 + 40) = 0LL;
          }
        }
        goto LABEL_126;
      case 7:
        v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
          v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v34 )
          goto LABEL_126;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            LODWORD(v47[3].Buffer) |= 4u;
          else
            LODWORD(v47[3].Buffer) &= ~4u;
          goto LABEL_126;
        }
        goto LABEL_125;
    }
    if ( v27 != 11 )
      goto LABEL_126;
    v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v35 )
      goto LABEL_126;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_125;
    if ( v47 != *(const UNICODE_STRING **)(a1 + 32) )
      goto LABEL_26;
    v17 = *(_DWORD *)SourceString;
  }
  else
  {
    if ( v14 == 6 )
    {
      v15 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
        v15 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v15 )
      {
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_QWORD *)(a1 + 40) = 0LL;
          goto LABEL_126;
        }
LABEL_125:
        DatabaseNode = -1073741811;
        goto LABEL_126;
      }
LABEL_21:
      DatabaseNode = -1073741637;
      goto LABEL_126;
    }
    if ( v14 != 11 )
      goto LABEL_21;
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v16 )
      goto LABEL_21;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_125;
    v17 = *(_DWORD *)SourceString;
  }
  v18 = v17 & 0xD0000000;
  *(_DWORD *)(a1 + 12) = v18;
  if ( v18 == 0x10000000 )
    *(_DWORD *)(a1 + 12) = -805306368;
LABEL_126:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
