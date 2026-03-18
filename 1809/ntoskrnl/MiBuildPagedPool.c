/*
 * XREFs of MiBuildPagedPool @ 0x1409B6A44
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F71E0 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017E8C0 (MiBuildDynamicRegion.c)
 *     MiIssueNoPtesBugcheck @ 0x1402AD708 (MiIssueNoPtesBugcheck.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140715B68 (MiInitializeSystemWorkingSetList.c)
 *     InitializePagedPool @ 0x1409B7280 (InitializePagedPool.c)
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
    dword_140438AD0 = 0;
  }
  else if ( qword_14043E510 < 0x80000 )
  {
    if ( qword_14043E510 < 0x40000 )
      dword_140438AD0 = 8;
    else
      dword_140438AD0 *= 2;
  }
  else
  {
    dword_140438AD0 *= 8;
  }
  v0 = qword_14043BA60;
  v1 = MiSystemVaToDynamicBitmap(6);
  if ( !(unsigned int)MiBuildDynamicRegion(v1, v0, 0x100000000000uLL) )
    return 0LL;
  qword_14043AF70 = ((v0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  qword_14043AF98 = 0x100000000LL;
  MmSizeOfPagedPoolInBytes = 0x100000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 3, 0x108000000LL) )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_14043AFA0, (unsigned __int64 *)0x20000);
  if ( !v3 )
    MiIssueNoPtesBugcheck(0x20000uLL);
  MiInitializeDynamicBitmap(&qword_14043AF60, (__int64)(v3 << 25) >> 16, qword_14043AF98, 11);
  qword_14043AF60 = 0LL;
  qword_14043AF58 = 0LL;
  qword_14043AF78 = qword_14043AF98;
  InitializePagedPool();
  result = 1LL;
  qword_140438AC0 = 7680LL;
  qword_140438AC8 = 15360LL;
  return result;
}
