/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406D3A20 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140905188 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     DrvDbOpenObjectRegKey @ 0x1406D3F18 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D43F0 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406D46B0 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x140904B78 (DrvDbSetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int DatabaseNode; // esi
  const UNICODE_STRING *v10; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  __int64 **v20; // rdx
  __int64 *v21; // r9
  _UNKNOWN **v22; // r13
  __int64 v23; // rdx
  _UNKNOWN **v24; // r8
  _QWORD *v25; // r9
  int v26; // eax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v29; // rbx
  int v30; // eax
  struct _ERESOURCE *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _UNKNOWN **v35; // r9
  __int64 v36; // rdx
  _QWORD *v37; // r8
  __int64 v38; // rcx
  HANDLE v39; // r13
  int v40; // eax
  __int64 v41; // rax
  struct _KTHREAD *v42; // rax
  const UNICODE_STRING *v43; // rdi
  const UNICODE_STRING *v45; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  DatabaseNode = 0;
  Handle = 0LL;
  v10 = 0LL;
  v45 = 0LL;
  v12 = wcsicmp(a2, L"*");
  v14 = *(_DWORD *)(a4 + 16);
  if ( !v12 )
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
          goto LABEL_122;
        }
        goto LABEL_121;
      }
LABEL_21:
      DatabaseNode = -1073741637;
      goto LABEL_122;
    }
    if ( v14 != 11 )
      goto LABEL_21;
    v16 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v16 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v16 )
      goto LABEL_21;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_121;
    v17 = *(_DWORD *)SourceString;
LABEL_19:
    v18 = v17 & 0xD0000000;
    *(_DWORD *)(a1 + 12) = v18;
    if ( v18 == 0x10000000 )
      *(_DWORD *)(a1 + 12) = -805306368;
    goto LABEL_122;
  }
  v19 = 0;
  v20 = &off_140401390;
  do
  {
    v21 = *v20;
    if ( *((_DWORD *)*v20 + 4) == v14 )
    {
      v13 = *v21 - *(_QWORD *)a4;
      if ( *v21 == *(_QWORD *)a4 )
        v13 = v21[1] - *(_QWORD *)(a4 + 8);
      if ( !v13 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v45);
        if ( DatabaseNode < 0 )
          goto LABEL_122;
        v26 = *(_DWORD *)(a4 + 16);
        switch ( v26 )
        {
          case 5:
            v27 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
              v27 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v27 )
              goto LABEL_122;
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( ((__int64)v45[3].Buffer & 1) != 0 )
                goto LABEL_44;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v29 = v45;
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v45[9].Length, 1u);
              if ( *(_BYTE *)SourceString == 0xFF )
                v30 = DrvDbLoadDatabaseNode(a1, (__int64)v29);
              else
                v30 = DrvDbUnloadDatabaseNode(a1, (__int64)v29);
              v31 = *(struct _ERESOURCE **)&v29[9].Length;
              DatabaseNode = v30;
LABEL_120:
              ExReleaseResourceLite(v31);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              goto LABEL_122;
            }
            break;
          case 6:
            v32 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v32 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v32 )
              goto LABEL_122;
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( *(_BYTE *)SourceString == 0xFF )
              {
                *(_QWORD *)(a1 + 40) = v45;
              }
              else if ( v45 == *(const UNICODE_STRING **)(a1 + 40) || !v45 )
              {
                *(_QWORD *)(a1 + 40) = 0LL;
              }
              goto LABEL_122;
            }
            break;
          case 7:
            v33 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v33 )
              goto LABEL_122;
            if ( a5 == 17 && a7 == 1 && SourceString )
            {
              if ( *(_BYTE *)SourceString == 0xFF )
                LODWORD(v45[3].Buffer) |= 4u;
              else
                LODWORD(v45[3].Buffer) &= ~4u;
              goto LABEL_122;
            }
            break;
          case 11:
            v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
              v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v34 )
              goto LABEL_122;
            if ( a5 == 7 && a7 == 4 && SourceString )
            {
              if ( v45 != *(const UNICODE_STRING **)(a1 + 32) )
                goto LABEL_44;
              v17 = *(_DWORD *)SourceString;
              goto LABEL_19;
            }
            break;
          default:
            goto LABEL_122;
        }
LABEL_121:
        DatabaseNode = -1073741811;
        goto LABEL_122;
      }
    }
    ++v19;
    ++v20;
  }
  while ( v19 < 5 );
  v22 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v23 = 0LL;
  v24 = &off_1403544A0;
  while ( 1 )
  {
    v25 = *v24;
    if ( *((_DWORD *)*v24 + 4) == v14 )
    {
      v13 = *v25 - *(_QWORD *)a4;
      if ( *v25 == *(_QWORD *)a4 )
        v13 = v25[1] - *(_QWORD *)(a4 + 8);
      if ( !v13 )
        break;
    }
    v23 = (unsigned int)(v23 + 1);
    v24 += 5;
    if ( (unsigned int)v23 >= 0xC )
      goto LABEL_81;
  }
  v13 = 5 * v23;
  v22 = &off_1403544A0 + 5 * v23;
  *(_QWORD *)&DestinationString.Length = v22;
LABEL_81:
  if ( v22 )
  {
LABEL_94:
    if ( a5 == *((_DWORD *)v22 + 2) || !a5 )
    {
      v39 = a3;
      if ( !a3 || v10 && ((__int64)v10[3].Buffer & 0x10) != 0 )
      {
        v40 = v10 && ((__int64)v10[3].Buffer & 0x10) != 0
            ? DrvDbOpenObjectRegKey((_QWORD *)a1, *(_QWORD **)(a1 + 32), 1u, a2, 2, 0, &Handle, 0LL)
            : DrvDbOpenDriverDatabaseRegKey((const UNICODE_STRING **)a1, a2, 2u, 0, (__int64)&Handle, 0LL);
        DatabaseNode = v40;
        if ( v40 < 0 )
          goto LABEL_122;
      }
      if ( Handle )
        v39 = Handle;
      DatabaseNode = DrvDbSetRegValueMappedProperty(
                       v13,
                       v39,
                       *(_QWORD *)&DestinationString.Length,
                       a5,
                       SourceString,
                       a7);
      if ( DatabaseNode < 0 || !v10 || ((__int64)v10[3].Buffer & 0x10) == 0 || *(_DWORD *)(a4 + 16) != 14 )
        goto LABEL_122;
      v41 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
        v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v41 || !a5 )
        goto LABEL_122;
      if ( a7 >= 2 && SourceString && !*((_BYTE *)SourceString + ((unsigned __int64)a7 >> 1) - 1) )
      {
        if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
        {
          DatabaseNode = -1073741670;
          goto LABEL_122;
        }
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        v43 = v45;
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v45[9].Length, 1u);
        RtlFreeAnsiString((PUNICODE_STRING)&v43[2].Buffer);
        *(_DWORD *)&v43[2].Length = 0;
        *(UNICODE_STRING *)&v43[2].Buffer = DestinationString;
        v31 = *(struct _ERESOURCE **)&v43[9].Length;
        goto LABEL_120;
      }
    }
    goto LABEL_121;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  v35 = &off_140357500;
  v36 = 0LL;
  while ( 1 )
  {
    v37 = *v35;
    if ( *((_DWORD *)*v35 + 4) == v14 )
    {
      v38 = *v37 - *(_QWORD *)a4;
      if ( *v37 == *(_QWORD *)a4 )
        v38 = v37[1] - *(_QWORD *)(a4 + 8);
      if ( !v38 )
        break;
    }
    v36 = (unsigned int)(v36 + 1);
    v35 += 5;
    if ( (unsigned int)v36 >= 2 )
      goto LABEL_90;
  }
  v22 = &off_140357500 + 5 * v36;
  *(_QWORD *)&DestinationString.Length = v22;
LABEL_90:
  if ( !v22 )
  {
    DatabaseNode = -1073741802;
    goto LABEL_122;
  }
  DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v45);
  if ( DatabaseNode >= 0 )
  {
    v10 = v45;
    if ( ((__int64)v45[3].Buffer & 0x10) != 0 )
      goto LABEL_94;
LABEL_44:
    DatabaseNode = -1073741790;
  }
LABEL_122:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
