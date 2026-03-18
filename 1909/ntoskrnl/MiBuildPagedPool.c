/*
 * XREFs of MiBuildPagedPool @ 0x1409EE4E0
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400E84A4 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140187624 (MiBuildDynamicRegion.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x1409EEC50 (InitializePagedPool.c)
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
  qword_1404666B8 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x100000000LL) )
    return 0LL;
  BugCheckParameter2 = 0LL;
  qword_1404666A0 = qword_1404666B8;
  InitializePagedPool();
  result = 1LL;
  qword_1404641E0 = 7680LL;
  qword_1404641E8 = 15360LL;
  return result;
}
