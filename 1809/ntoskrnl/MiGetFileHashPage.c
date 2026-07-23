/*
 * XREFs of MiGetFileHashPage @ 0x14015183C
 * Callers:
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 Page; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  void *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  if ( !(unsigned int)MiChargeCommit(v2, 1uLL, 1u) )
    return -1LL;
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v2, 1uLL, 128LL) )
  {
    MiReturnCommit(v2, 1uLL);
    return -1LL;
  }
  Page = MiGetPage(v2, a2, 0x200u);
  v5 = Page;
  if ( Page == -1 )
  {
    if ( (ULONG_PTR *)v2 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 7360), 1uLL);
    MiReturnCommit(v2, 1uLL);
  }
  else
  {
    v6 = MiMapPageInHyperSpaceWorker(Page, &v10, 0x80000000);
    v7 = (void *)v6;
    v8 = 1024LL;
    if ( (v6 & 4) != 0 )
    {
      *(_DWORD *)v6 = 0;
      v7 = (void *)(v6 + 4);
      v8 = 1023LL;
    }
    memset(v7, 0, 8 * (v8 >> 1));
    if ( (v8 & 1) != 0 )
      *((_DWORD *)v7 + v8 - 1) = 0;
    MiUnmapPageInHyperSpaceWorker(v6, v10, 0x80000000LL);
    _InterlockedAdd64(&qword_14043C868, 1uLL);
  }
  return v5;
}
