/*
 * XREFs of DrvDbGetDriverDatabaseMappedProperty @ 0x140756900
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406F1A00 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F2328 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     DrvDbFindDatabaseNode @ 0x1406F2DE0 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1406F2FB8 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140756E68 (DrvDbOpenDriverDatabaseRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int RegValueMappedProperty; // ebx
  const UNICODE_STRING *v12; // rsi
  __int64 Buffer_low; // rcx
  int v14; // r10d
  unsigned int v15; // r9d
  __int64 **v16; // rdx
  __int64 *v17; // r8
  _UNKNOWN **v18; // r12
  _UNKNOWN **v19; // r9
  unsigned int v20; // edx
  _QWORD *v21; // r8
  __int64 v22; // rdi
  void *v23; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // edx
  int DatabaseNode; // eax
  int v30; // eax
  __int64 v31; // rax
  _BYTE *v32; // rdx
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _UNKNOWN **v39; // r9
  unsigned int v40; // edx
  _QWORD *v41; // r8
  const UNICODE_STRING *v42; // [rsp+50h] [rbp-10h] BYREF
  void *v43; // [rsp+58h] [rbp-8h] BYREF

  v43 = 0LL;
  v42 = 0LL;
  *a5 = 0;
  *a8 = 0;
  RegValueMappedProperty = 0;
  v12 = 0LL;
  if ( !wcsicmp(a2, L"*") )
  {
    RegValueMappedProperty = -1073741637;
    goto LABEL_21;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 == 2 )
  {
    v25 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v25 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v25 )
    {
      *a5 = 18;
      v27 = -1LL;
      do
        ++v27;
      while ( a2[v27] );
      Buffer_low = (__int64)a6;
      v28 = 2 * v27 + 2;
      *a8 = v28;
      if ( a6 && a7 >= v28 )
      {
        memmove(a6, a2, v28);
        goto LABEL_21;
      }
      goto LABEL_41;
    }
  }
  v15 = 0;
  v16 = &off_140427060;
  do
  {
    v17 = *v16;
    if ( *((_DWORD *)*v16 + 4) == v14 )
    {
      Buffer_low = *v17 - *(_QWORD *)a4;
      if ( *v17 == *(_QWORD *)a4 )
        Buffer_low = v17[1] - *(_QWORD *)(a4 + 8);
      if ( !Buffer_low )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v42);
        RegValueMappedProperty = DatabaseNode;
        if ( DatabaseNode < 0 )
          goto LABEL_21;
        v30 = *(_DWORD *)(a4 + 16);
        switch ( v30 )
        {
          case 5:
            v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
              v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v31 )
              goto LABEL_21;
            v32 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              Buffer_low = -(__int64)v42[5].Buffer;
              v33 = v42[5].Buffer != 0LL;
LABEL_65:
              *v32 = -v33;
              goto LABEL_21;
            }
            goto LABEL_41;
          case 6:
            v34 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
              v34 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v34 )
              goto LABEL_21;
            Buffer_low = (__int64)a6;
            *a5 = 17;
            *a8 = 1;
            if ( a6 && a7 )
            {
              *a6 = (*(_QWORD *)(a1 + 40) != (_QWORD)v42) - 1;
              goto LABEL_21;
            }
            goto LABEL_41;
          case 7:
            v35 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
              v35 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v35 )
              goto LABEL_21;
            v32 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
              goto LABEL_41;
            Buffer_low = LODWORD(v42[3].Buffer);
            LOBYTE(Buffer_low) = Buffer_low & 4;
            break;
          case 11:
            v36 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
              v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v36 )
              goto LABEL_21;
            Buffer_low = (__int64)a6;
            *a5 = 7;
            *a8 = 4;
            if ( a6 && a7 >= 4 )
            {
              *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
              goto LABEL_21;
            }
            goto LABEL_41;
          case 15:
            v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
              v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v37 )
              goto LABEL_21;
            *a5 = 24;
            *a8 = 4;
            if ( a6 && a7 >= 4 )
            {
              Buffer_low = LODWORD(v42[9].Buffer);
              *(_DWORD *)a6 = Buffer_low;
              goto LABEL_21;
            }
            goto LABEL_41;
          case 23:
            v38 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Extended;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Extended )
              v38 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( v38 )
              goto LABEL_21;
            v32 = a6;
            *a5 = 17;
            *a8 = 1;
            if ( !a6 || !a7 )
            {
LABEL_41:
              RegValueMappedProperty = -1073741789;
              goto LABEL_21;
            }
            Buffer_low = LODWORD(v42[3].Buffer);
            LOBYTE(Buffer_low) = Buffer_low & 0x10;
            break;
          default:
            goto LABEL_21;
        }
        LOBYTE(Buffer_low) = -(char)Buffer_low;
        v33 = (_BYTE)Buffer_low != 0;
        goto LABEL_65;
      }
    }
    ++v15;
    ++v16;
  }
  while ( v15 < 7 );
  v18 = 0LL;
  v19 = &off_1403704D0;
  v20 = 0;
  while ( 1 )
  {
    v21 = *v19;
    if ( *((_DWORD *)*v19 + 4) == v14 )
    {
      Buffer_low = *v21 - *(_QWORD *)a4;
      if ( *v21 == *(_QWORD *)a4 )
        Buffer_low = v21[1] - *(_QWORD *)(a4 + 8);
      if ( !Buffer_low )
        break;
    }
    ++v20;
    v19 += 5;
    if ( v20 >= 0xC )
      goto LABEL_14;
  }
  Buffer_low = 5LL * v20;
  v18 = &off_1403704D0 + 5 * v20;
LABEL_14:
  if ( v18 )
  {
    v22 = a1;
LABEL_16:
    if ( a3 && (!v12 || ((__int64)v12[3].Buffer & 0x10) == 0)
      || (!v12 || ((__int64)v12[3].Buffer & 0x10) == 0
        ? (v26 = DrvDbOpenDriverDatabaseRegKey(v22, a2, 1LL, 0LL, &v43, 0LL))
        : (v26 = DrvDbOpenObjectRegKey((__int64 *)v22, *(__int64 **)(v22 + 32), 1u, a2, 1, 0, &v43, 0LL, 0LL)),
          RegValueMappedProperty = v26,
          v26 >= 0) )
    {
      v23 = a3;
      if ( v43 )
        v23 = v43;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(Buffer_low, v23, (__int64)v18, a5, a6, a7, a8);
    }
  }
  else
  {
    v18 = 0LL;
    v39 = &off_140376630;
    v40 = 0;
    while ( 1 )
    {
      v41 = *v39;
      if ( *((_DWORD *)*v39 + 4) == v14 )
      {
        Buffer_low = *v41 - *(_QWORD *)a4;
        if ( *v41 == *(_QWORD *)a4 )
          Buffer_low = v41[1] - *(_QWORD *)(a4 + 8);
        if ( !Buffer_low )
          break;
      }
      ++v40;
      v39 += 5;
      if ( v40 >= 4 )
        goto LABEL_94;
    }
    Buffer_low = 5LL * v40;
    v18 = &off_140376630 + 5 * v40;
LABEL_94:
    if ( v18 )
    {
      v22 = a1;
      RegValueMappedProperty = DrvDbFindDatabaseNode(a1, a2, &v42);
      if ( RegValueMappedProperty >= 0 )
      {
        v12 = v42;
        goto LABEL_16;
      }
    }
    else
    {
      RegValueMappedProperty = -1073741802;
    }
  }
LABEL_21:
  if ( v43 )
    PnpCtxRegCloseKey(Buffer_low, v43);
  return (unsigned int)RegValueMappedProperty;
}
