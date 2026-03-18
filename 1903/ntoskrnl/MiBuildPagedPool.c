/*
 * XREFs of MiBuildPagedPool @ 0x1409EE5C8
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400ACF94 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140187074 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407400C8 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x1409EED38 (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  __int64 *v0; // rax
  __int64 v1; // rdx
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax

  v0 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v0, v1, 0x100000000000uLL) )
    return 0LL;
  qword_1404669B8 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x100000000LL) )
    return 0LL;
  BugCheckParameter2 = 0LL;
  qword_1404669A0 = qword_1404669B8;
  InitializePagedPool();
  result = 1LL;
  qword_1404644E0 = 7680LL;
  qword_1404644E8 = 15360LL;
  return result;
}
