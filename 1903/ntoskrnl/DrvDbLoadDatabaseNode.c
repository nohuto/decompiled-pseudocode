/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x1406F2328
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406F20A8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenContext @ 0x140755800 (DrvDbOpenContext.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140756E68 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940FC0 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406F25DC (DrvDbUnloadDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140756900 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14094250C (DrvDbInitializeDatabaseNodeVersion.c)
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
  int v15; // eax
  __int64 v16; // r8
  int *v17; // r12
  __int64 v18; // rdx
  int DriverDatabaseMappedProperty; // eax
  unsigned int *v20; // r14
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  void *SecurityDescriptor; // rax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  int v29; // [rsp+98h] [rbp+48h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 56);
  v31 = 0LL;
  P = 0LL;
  CachedContextBaseKey = 0;
  v27 = 0LL;
  v30 = 0;
  v29 = 1;
  v6 = 0LL;
  v7 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD))(a2 + 72);
    if ( v7 )
    {
      v27 = a2 + 88;
      v8 = v7(a1, *(_QWORD *)(a2 + 24), 1LL, 1LL, &v27, *(_QWORD *)(a2 + 80));
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
      v25 = *(_DWORD *)(a2 + 32);
      if ( v25 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v25, (__int64)&v31);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v6 = v31;
      }
      CachedContextBaseKey = PnpCtxRegOpenKey(*(_QWORD *)a1, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000u, a2 + 88);
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
        v11 = v7(a1, *(_QWORD *)(a2 + 24), 1LL, 2LL, &v27, *(_QWORD *)(a2 + 80));
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
      }
      goto LABEL_9;
    }
    v16 = *v9;
    v17 = (int *)(a2 + 60);
    v18 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 56) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v18,
                                     v16,
                                     &DEVPKEY_DriverDatabase_Version,
                                     &v29,
                                     a2 + 60,
                                     4,
                                     &v30);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v26 = *(_DWORD *)(a1 + 8);
      if ( (unsigned int)(v26 - 1) <= 0xFFFFFFFD )
      {
        *v17 = v26;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_26:
        v20 = (unsigned int *)(a2 + 64);
        CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                                 a1,
                                 *(_QWORD *)(a2 + 24),
                                 *v9,
                                 &DEVPKEY_DriverDatabase_SchemaVersion,
                                 &v29,
                                 a2 + 64,
                                 4,
                                 &v30);
        if ( CachedContextBaseKey < 0 )
        {
          *v20 = 0;
          CachedContextBaseKey = 0;
        }
        else if ( v29 != 7 || v30 != 4 )
        {
          *v20 = -1;
        }
        v21 = *v17;
        if ( *v17
          && (v21 == -1 || (v22 = v21 & 0xFFFF0000, v22 < 0x6020000) || v22 > (*(_DWORD *)(a1 + 8) & 0xFFFF0000))
          || (v23 = *v20, *v20 == -1)
          || v23 >= 0x10001 && HIWORD(v23) != 1 )
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
      if ( v29 != 7 || v30 != 4 )
        *v17 = -1;
      goto LABEL_26;
    }
    *v17 = 0;
    goto LABEL_26;
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
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v14, (__int64)&v31);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v6 = v31;
  }
  v15 = PnpCtxRegOpenKey(*(_QWORD *)a1, v6, *(_QWORD *)(a2 + 48), 0, 0x2000000u, (__int64)v9);
  CachedContextBaseKey = v15;
  if ( v15 != -1073741772 )
  {
    if ( v15 < 0 )
      goto LABEL_9;
    goto LABEL_21;
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
LABEL_21:
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
