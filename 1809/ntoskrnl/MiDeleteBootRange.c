/*
 * XREFs of MiDeleteBootRange @ 0x140181240
 * Callers:
 *     MmFreeBootRegistry @ 0x1407378C8 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiDeleteBootRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  char *AnyMultiplexedVm; // r13
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // r8
  unsigned __int8 v12; // r15
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // r15
  LONG *v19; // rbx
  KIRQL v20; // al
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int8 v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned __int64 result; // rax
  __int64 v28; // r10
  __int64 v29; // rbx
  unsigned __int64 i; // r11
  __int16 v31; // ax
  int v32; // eax
  PVOID *v33; // rdx
  unsigned __int64 v34; // rbx
  LONG *v35; // rbx
  KIRQL v36; // al
  _QWORD v37[15]; // [rsp+30h] [rbp-78h] BYREF
  int v38; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp+10h]
  int v40; // [rsp+C0h] [rbp+18h] BYREF
  struct _KTHREAD *v41; // [rsp+C8h] [rbp+20h]

  v40 = a3;
  v39 = a2;
  v3 = a2;
  memset(v37, 0, 0x28uLL);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = (struct _KTHREAD *)v5;
  v6 = v5;
  v7 = (((a1 + 8 * (v3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v10;
  v13 = 0xFFFFFA8000000000uLL;
  if ( v5 <= v7 )
  {
    do
    {
      v14 = MI_READ_PTE_LOCK_FREE(v6);
      v40 = 0;
      v17 = v13 + 48 * (v16 & (v14 >> 12));
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v40, v15, v11);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
        v13 = 0xFFFFFA8000000000uLL;
      }
      *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    v5 = (unsigned __int64)v41;
    v3 = v39;
  }
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12, v11, v13);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, a1, v3, 1, v37);
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v19 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v20 = ExAcquireSpinLockExclusive(v19);
  v19[1] = 0;
  v23 = v20;
  if ( v5 <= v7 )
  {
    do
    {
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v38, v24, v21);
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v28 = 0LL;
        v29 = (__int64)(v5 << 25) >> 16;
        v22 = v29;
        for ( i = v29 + 4096; v22 < i; v22 += 8LL )
        {
          v31 = MI_READ_PTE_LOCK_FREE(v22);
          if ( (v31 & 0xC01) != 0 )
            break;
          v32 = v31 & 0x3E0;
          if ( v32 )
          {
            if ( v32 != 768LL )
              break;
          }
        }
        if ( v22 == i )
        {
          v33 = (PVOID *)PsLoadedModuleList;
          v22 = 0xFFFFF6FB40000000uLL;
          v34 = ((v29 << 25) - v28) >> 16;
          while ( 1 )
          {
            v21 = (unsigned __int64)v33[6];
            if ( v5 >= ((v21 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              && v5 <= (((v21 + *((unsigned int *)v33 + 16) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              break;
            }
            v33 = (PVOID *)*v33;
            if ( v33 == &PsLoadedModuleList )
              goto LABEL_20;
          }
          v33 = 0LL;
LABEL_20:
          if ( v33 )
          {
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23, v21, 0xFFFFF6FB40000000uLL);
            MiReturnSystemVa(v34, v34 + 0x200000, 12);
            v35 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v36 = ExAcquireSpinLockExclusive(v35);
            v35[1] = 0;
            v23 = v36;
          }
        }
      }
      v5 += 8LL;
    }
    while ( v5 <= v7 );
    v3 = v39;
    CurrentThread = v41;
  }
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23, v21, v22);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  MiReturnResidentAvailable(v3);
  v26 = v3 - v37[1];
  MiReturnCommit((__int64)&MiSystemPartition, v26);
  result = qword_14043C0D0 - v26;
  qword_14043C0D0 -= v26;
  return result;
}
