/*
 * XREFs of DrvDbOpenDriverDatabaseRegKey @ 0x140754CAC
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406D3A20 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140754B2C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140902768 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D43F0 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406D46B0 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140904D70 (DrvDbDestroyDatabaseNode.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = v18[0];
  }
  if ( v13 < 0 && v10 )
    DrvDbDestroyDatabaseNode(a1, v15, v12);
  return (unsigned int)v13;
}
