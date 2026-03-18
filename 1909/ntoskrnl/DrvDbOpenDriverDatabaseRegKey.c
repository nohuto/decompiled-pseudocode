/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x1407578F8
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406F34A0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140757390 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F26C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940A30 (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F3DC8 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406F407C (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406F4880 (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140941B54 (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbOpenDriverDatabaseRegKey(
        const UNICODE_STRING **a1,
        const wchar_t *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  char v10; // bp
  int DatabaseNode; // eax
  __int64 v12; // r8
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v15; // rbx
  __int64 v16; // rcx
  const UNICODE_STRING *v18[2]; // [rsp+40h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v10 = 0;
  if ( !wcsicmp(a2, L"*") )
  {
    v18[0] = a1[4];
    goto LABEL_4;
  }
  DatabaseNode = DrvDbFindDatabaseNode((__int64)a1, a2, v18);
  v13 = DatabaseNode;
  if ( DatabaseNode == -1073741772 )
  {
    if ( a4 )
    {
      v13 = DrvDbCreateDatabaseNode((__int64)a1, a2, 0, 0LL, 16, 0LL, 0LL, v18);
      if ( v13 >= 0 )
      {
        v10 = 1;
        goto LABEL_4;
      }
    }
LABEL_23:
    v15 = v18[0];
    goto LABEL_12;
  }
  if ( DatabaseNode < 0 )
    goto LABEL_23;
LABEL_4:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = v18[0];
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)&v18[0][9].Length, 1u);
  if ( ((__int64)v15[3].Buffer & 1) != 0 || (v13 = DrvDbLoadDatabaseNode((__int64)a1, (__int64)v15), v13 >= 0) )
  {
    if ( *a1 )
      v16 = *(_QWORD *)&(*a1)[14].Length;
    else
      v16 = 0LL;
    v13 = SysCtxRegOpenKey(v16, (__int64)v15[5].Buffer, 0LL, 0, a3, a5);
    if ( ((__int64)v15[3].Buffer & 1) == 0 )
      DrvDbUnloadDatabaseNode((__int64)a1, (__int64)v15);
    if ( v13 >= 0 && a6 )
      *a6 = 2;
  }
LABEL_12:
  if ( v15 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)&v15[9].Length);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = v18[0];
  }
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15, v12);
  return (unsigned int)v13;
}
