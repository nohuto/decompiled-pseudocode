/*
 * XREFs of MiBuildPagedPool @ 0x1409B7A44
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7280 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017EA20 (MiBuildDynamicRegion.c)
 *     MiIssueNoPtesBugcheck @ 0x1402AD9F8 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140716DE8 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  __int64 *v1; // rax
  char *AnyMultiplexedVm; // rax
  ULONG_PTR v3; // rdx
  __int64 result; // rax

  if ( (MiFlags & 1) != 0 || MmSpecialPoolTag || MmProtectFreedNonPagedPool == 1 )
  {
    dword_140439B90 = 0;
  }
  else if ( qword_14043F5D0 < 0x80000 )
  {
    if ( qword_14043F5D0 < 0x40000 )
      dword_140439B90 = 8;
    else
      dword_140439B90 *= 2;
  }
  else
  {
    dword_140439B90 *= 8;
  }
  v0 = qword_14043CB20;
  v1 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v1, v0, 0x100000000000uLL) )
    return 0LL;
  qword_14043C030 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_14043C058 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x108000000LL) )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)0x20000);
  if ( !v3 )
    MiIssueNoPtesBugcheck(0x20000uLL);
  MiInitializeDynamicBitmap(&qword_14043C020, (__int64)(v3 << 25) >> 16, qword_14043C058, 11);
  qword_14043C020 = 0LL;
  qword_14043C018 = 0LL;
  qword_14043C038 = qword_14043C058;
  InitializePagedPool();
  result = 1LL;
  qword_140439B80 = 7680LL;
  qword_140439B88 = 15360LL;
  return result;
}
