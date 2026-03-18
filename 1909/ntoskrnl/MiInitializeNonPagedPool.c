/*
 * XREFs of MiInitializeNonPagedPool @ 0x1409F17C4
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiBuildDynamicRegion @ 0x140187624 (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140188B58 (MiInitializeNonPagedPoolThresholds.c)
 *     MiAddExpansionNonPagedPool @ 0x140188CD4 (MiAddExpansionNonPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  PSLIST_HEADER v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v4 = ExGenRandom(0);
  v5 = qword_140467240[0];
  v6 = v3 | v4;
  v7 = 0;
  v8 = v6 ^ v2;
  if ( !v8 )
    v8 = 1LL;
  qword_140466640 = v8;
  v9 = MmPfnDatabase + (MxPfnAllocation << 12);
  v10 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  qword_1404666B0 = 0x100000000LL;
  v11 = (0x200000 - v10) & -(__int64)(v10 != 0);
  v12 = (0x800000uLL / (unsigned __int16)KeNumberNodes) << 21;
  if ( KeNumberNodes )
  {
    do
    {
      v13 = qword_140465758;
      v14 = 11LL * v7;
      v15 = v12 * v7 + v5;
      qword_140465758[v14 + 10].Alignment = v15;
      v13[v14 + 10].Region = v15 + v12;
      if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)&qword_140465758[v14 + 4], v15, v12) )
        return 0LL;
    }
    while ( ++v7 < (unsigned __int16)KeNumberNodes );
  }
  if ( v11 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    if ( (v18 & 0x80u) != 0LL )
    {
      v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18);
      MiAddExpansionNonPagedPool((v10 >> 12) + ((v16 >> 12) & 0xFFFFFFFFFLL), v11 >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
