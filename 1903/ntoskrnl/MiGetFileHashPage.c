/*
 * XREFs of MiGetFileHashPage @ 0x140169168
 * Callers:
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
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
  Page = MiGetPage(v2, a2, 512LL);
  v5 = Page;
  if ( Page == -1 )
  {
    if ( (ULONG_PTR *)v2 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8128), 1uLL);
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
    LOBYTE(v8) = v10;
    MiUnmapPageInHyperSpaceWorker(v6, v8, 0x80000000LL);
    _InterlockedAdd64(&qword_1404672A8, 1uLL);
  }
  return v5;
}
