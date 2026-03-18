/*
 * XREFs of DrvDbOpenContext @ 0x140756290
 * Callers:
 *     PiDrvDbInit @ 0x140756B78 (PiDrvDbInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F3DC8 (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x1407563D0 (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140941B54 (DrvDbDestroyDatabaseNode.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  char *PoolWithTag; // rax
  PVOID *v4; // rbx
  _QWORD *v5; // rax
  struct _ERESOURCE *v6; // rax
  __int64 v7; // r8
  int DatabaseNode; // edi
  int v9; // eax
  PVOID v11; // rsi
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v12 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x42444450u);
  v4 = (PVOID *)PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    *(_QWORD *)PoolWithTag = v0;
    *((_DWORD *)PoolWithTag + 2) = v2;
    *((_DWORD *)PoolWithTag + 3) = -805306368;
    v5 = PoolWithTag + 16;
    v5[1] = v5;
    *v5 = v5;
    v6 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    v4[6] = v6;
    if ( v6 )
    {
      DatabaseNode = ExInitializeResourceLite(v6);
      if ( DatabaseNode < 0 )
      {
        ExFreePoolWithTag(v4[6], 0);
        v4[6] = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( DatabaseNode >= 0 )
    {
      v9 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v12);
      v1 = v12;
      DatabaseNode = v9;
      if ( v9 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((__int64)v4, v12);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = (__int64)v4;
            v4 = 0LL;
          }
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        DrvDbDestroyDatabaseNode(v4, v1, v7);
      v11 = v4[6];
      if ( v11 )
      {
        ExDeleteResourceLite((PERESOURCE)v4[6]);
        ExFreePoolWithTag(v11, 0);
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
