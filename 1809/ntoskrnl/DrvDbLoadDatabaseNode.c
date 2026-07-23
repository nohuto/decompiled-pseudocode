/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x1406D43F0
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D40D8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406D46B0 (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140905188 (DrvDbInitializeDatabaseNodeVersion.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD); // r13
  int v8; // eax
  _QWORD *v9; // r15
  int v10; // eax
  int v11; // eax
  PVOID v12; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  int *v18; // r12
  __int64 v19; // rdx
  int DriverDatabaseMappedProperty; // eax
  unsigned int *v21; // r14
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  void *SecurityDescriptor; // rax
  int v26; // edx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 56);
  v33 = 0LL;
  P = 0LL;
  CachedContextBaseKey = 0;
  v32 = 0;
  v6 = 0LL;
  v31 = 1;
  v7 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD))(a2 + 72);
    if ( v7 )
    {
      v29 = a2 + 88;
      v8 = v7(a1, *(_QWORD *)(a2 + 24), 1LL, 1LL, &v29, *(_QWORD *)(a2 + 80));
      if ( v8 == -1073741822 )
      {
        v7 = 0LL;
      }
      else if ( v8 < 0 )
      {
        CachedContextBaseKey = v8;
        goto LABEL_7;
      }
    }
    v9 = (_QWORD *)(a2 + 88);
    if ( !*(_QWORD *)(a2 + 88) )
    {
      v26 = *(_DWORD *)(a2 + 32);
      if ( v26 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v26, (__int64)&v33);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v6 = v33;
      }
      v27 = 0LL;
      if ( *(_QWORD *)a1 )
        v27 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
      CachedContextBaseKey = SysCtxRegOpenKey(v27, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000u, a2 + 88);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_7;
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 56);
    if ( (v10 & 8) != 0 )
    {
LABEL_7:
      if ( v7 )
      {
        v11 = v7(a1, *(_QWORD *)(a2 + 24), 1LL, 2LL, &v29, *(_QWORD *)(a2 + 80));
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
      }
      goto LABEL_9;
    }
    v17 = *v9;
    v18 = (int *)(a2 + 60);
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 56) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v19,
                                     v17,
                                     &DEVPKEY_DriverDatabase_Version,
                                     &v31,
                                     a2 + 60,
                                     4,
                                     &v32);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v28 = *(_DWORD *)(a1 + 8);
      if ( (unsigned int)(v28 - 1) <= 0xFFFFFFFD )
      {
        *v18 = v28;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_28:
        v21 = (unsigned int *)(a2 + 64);
        CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                                 a1,
                                 *(_QWORD *)(a2 + 24),
                                 *v9,
                                 &DEVPKEY_DriverDatabase_SchemaVersion,
                                 &v31,
                                 a2 + 64,
                                 4,
                                 &v32);
        if ( CachedContextBaseKey < 0 )
        {
          *v21 = 0;
          CachedContextBaseKey = 0;
        }
        else if ( v31 != 7 || v32 != 4 )
        {
          *v21 = -1;
        }
        v22 = *v18;
        if ( *v18
          && (v22 == -1 || (v23 = v22 & 0xFFFF0000, v23 < 0x6020000) || v23 > (*(_DWORD *)(a1 + 8) & 0xFFFF0000))
          || (v24 = *v21, *v21 == -1)
          || v24 >= 0x10001 && HIWORD(v24) != 1 )
        {
          DrvDbUnloadDatabaseNode(a1, a2);
          *(_DWORD *)(a2 + 56) |= 4u;
          CachedContextBaseKey = -1073740697;
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v31 != 7 || v32 != 4 )
        *v18 = -1;
      goto LABEL_28;
    }
    *v18 = 0;
    goto LABEL_28;
  }
  v9 = (_QWORD *)(a2 + 88);
  if ( *(_QWORD *)(a2 + 88) )
    goto LABEL_9;
  if ( *(_QWORD *)(a1 + 32) )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(a2 + 32);
  if ( v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v14, (__int64)&v33);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v6 = v33;
  }
  v15 = 0LL;
  if ( *(_QWORD *)a1 )
    v15 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  v16 = SysCtxRegOpenKey(v15, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000u, (__int64)v9);
  CachedContextBaseKey = v16;
  if ( v16 != -1073741772 )
  {
    if ( v16 < 0 )
      goto LABEL_9;
    goto LABEL_23;
  }
  SecurityDescriptor = (void *)DrvDbGetSecurityDescriptor();
  P = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(
                           *(_QWORD *)a1,
                           v6,
                           *(_QWORD *)(a2 + 48),
                           0,
                           0x2000000,
                           (__int64)SecurityDescriptor,
                           (__int64)v9,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_23:
    *(_QWORD *)(a1 + 32) = a2;
    goto LABEL_6;
  }
LABEL_9:
  v12 = P;
  *(_DWORD *)(a2 + 152) = CachedContextBaseKey;
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)CachedContextBaseKey;
}
