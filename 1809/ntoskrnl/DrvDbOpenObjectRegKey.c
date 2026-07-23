/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1406D3F18
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406D37CC (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406D3910 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverPackage @ 0x1406D3B40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1406F62C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F639C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140902684 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140902768 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140902A7C (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140902BAC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140902D18 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140902E84 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140903BA4 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140904364 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140904484 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140905270 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406D40D8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406D4264 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D42FC (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(_QWORD *a1, _QWORD *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  _QWORD *v7; // rsi
  int v8; // ebx
  _QWORD *i; // r14
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int Tree; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h]
  __int64 v24; // [rsp+A8h] [rbp+58h]
  __int64 v25; // [rsp+B0h] [rbp+60h]
  _DWORD *v26; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _DWORD *);
  v18 = 0LL;
  v19 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v21, (__int64 *)va, &v19);
  v7 = v19;
  v8 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v19 || (v7 = a2) != 0LL )
    {
      v13 = DrvDbAcquireDatabaseNodeBaseKey(a1, v7, a3, &v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073740697 )
          v8 = -1073741772;
        goto LABEL_17;
      }
      v14 = *a1;
      if ( !(_BYTE)v24 )
      {
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 224);
        else
          v15 = 0LL;
        v8 = SysCtxRegOpenKey(v15, v18, v21, 0, v23, v25);
        if ( v8 >= 0 && v26 )
          *v26 = 2;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree(v14, v18, v21, 0, v23, 0LL, v25, (__int64)v26);
LABEL_34:
      v8 = Tree;
      goto LABEL_17;
    }
    for ( i = (_QWORD *)a1[2]; i != a1 + 2; i = (_QWORD *)*i )
    {
      v7 = i;
      v10 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v18);
      v8 = v10;
      if ( v10 == -1073740697 )
      {
        v8 = -1073741772;
      }
      else
      {
        if ( v10 < 0 )
          break;
        if ( *a1 )
          v11 = *(_QWORD *)(*a1 + 224LL);
        else
          v11 = 0LL;
        v8 = SysCtxRegOpenKey(v11, v18, v21, 0, v23, v25);
        DrvDbReleaseDatabaseNodeBaseKey(a1, i);
        v18 = 0LL;
        if ( v8 != -1073741772 )
          return (unsigned int)v8;
      }
    }
    if ( v8 == -1073741772 && (_BYTE)v24 )
    {
      v7 = (_QWORD *)a1[4];
      v16 = DrvDbAcquireDatabaseNodeBaseKey(a1, v7, a3, &v18);
      v8 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073740697 )
          v8 = -1073741662;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree(*a1, v18, v21, 0, v23, 0LL, v25, 0LL);
      goto LABEL_34;
    }
  }
LABEL_17:
  if ( v18 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v7);
  return (unsigned int)v8;
}
