/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x1409EF614
 * Callers:
 *     MiInitializeDriverImages @ 0x1409EE68C (MiInitializeDriverImages.c)
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MiProcessLoadConfigForDriver @ 0x14070EB4C (MiProcessLoadConfigForDriver.c)
 *     VslReserveProtectedPages @ 0x140852D74 (VslReserveProtectedPages.c)
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x1409F0400 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyRetpolineToBootDrivers @ 0x1409F0BB8 (MiApplyRetpolineToBootDrivers.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rdi
  __int64 i; // rbx
  _QWORD *j; // rbx
  _QWORD v9[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v9, 0, 0xB8uLL);
  v9[3] = 0LL;
  LODWORD(v9[1]) = 20;
  MmAcquireLoadLock();
  v5 = (_QWORD *)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 16); (_QWORD *)i != v5; i = *(_QWORD *)i )
  {
    if ( PsNtosImageBase != *(PVOID *)(i + 48) )
      MiProcessLoadConfigForDriver(i);
    MiHandleBootImage(a1, i, v9);
  }
  MiFlushTbList((int *)v9, v2, v3, v4);
  MiApplyRetpolineToBootDrivers(a1);
  MiApplyImportOptimizationToBootDrivers(a1);
  if ( (MiFlags & 0x8000) != 0 )
  {
    for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*j )
      VslReserveProtectedPages(0LL, j[6], 0, 2u);
  }
  MmReleaseLoadLock((__int64)KeGetCurrentThread());
  return 1LL;
}
