/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1406F38E4
 * Callers:
 *     DrvDbOpenDriverInfFileRegKey @ 0x1406F3354 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406F389C (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F4560 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FCF04 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140757390 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F26C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14093FD64 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x14094044C (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbOpenDriverFileRegKey @ 0x140940494 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406F3AB0 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406F3B48 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406F3CC8 (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406F4160 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 *a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  __int64 *v8; // rdi
  int Tree; // ebx
  __int64 *i; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h]
  __int64 v24; // [rsp+A8h] [rbp+58h]
  __int64 v25; // [rsp+B0h] [rbp+60h]
  _DWORD *v26; // [rsp+B8h] [rbp+68h]
  __int64 **v27; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _DWORD *);
  v27 = va_arg(va1, __int64 **);
  v18 = 0LL;
  v19 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v21, (__int64 *)va, &v19);
  v8 = v19;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode < 0 )
    goto LABEL_14;
  if ( !v19 )
  {
    v8 = a2;
    if ( !a2 )
    {
      for ( i = (__int64 *)a1[2]; i != a1 + 2; i = (__int64 *)*i )
      {
        v8 = i;
        v11 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v18);
        Tree = v11;
        if ( v11 == -1073740697 )
        {
          Tree = -1073741772;
        }
        else
        {
          if ( v11 < 0 )
            break;
          if ( *a1 )
            v12 = *(_QWORD *)(*a1 + 224);
          else
            v12 = 0LL;
          Tree = SysCtxRegOpenKey(v12, v18, v21, 0, v23, v25);
          DrvDbReleaseDatabaseNodeBaseKey(a1, i, v13, v18);
          v18 = 0LL;
          if ( Tree != -1073741772 )
            goto LABEL_11;
        }
      }
      if ( Tree == -1073741772 )
      {
        if ( !(_BYTE)v24 )
          goto LABEL_14;
        v8 = (__int64 *)a1[4];
        v17 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v18);
        Tree = v17;
        if ( v17 < 0 )
        {
          if ( v17 == -1073740697 )
            Tree = -1073741662;
          goto LABEL_14;
        }
        Tree = PnpCtxRegCreateTree(*a1, v18, v21, 0, v23, 0LL, v25, 0LL);
        if ( Tree < 0 )
          goto LABEL_14;
      }
LABEL_11:
      if ( Tree >= 0 && v27 )
        *v27 = v8;
      goto LABEL_14;
    }
  }
  v15 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v18);
  Tree = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073740697 )
      Tree = -1073741772;
  }
  else
  {
    v16 = *a1;
    if ( (_BYTE)v24 )
    {
      Tree = PnpCtxRegCreateTree(v16, v18, v21, 0, v23, 0LL, v25, (__int64)v26);
      goto LABEL_11;
    }
    if ( v16 )
      v16 = *(_QWORD *)(v16 + 224);
    Tree = SysCtxRegOpenKey(v16, v18, v21, 0, v23, v25);
    if ( Tree >= 0 )
    {
      if ( v26 )
        *v26 = 2;
      goto LABEL_11;
    }
  }
LABEL_14:
  if ( v18 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v18);
  return (unsigned int)Tree;
}
