/*
 * XREFs of MiDeleteBootRange @ 0x14018B138
 * Callers:
 *     MmFreeBootRegistry @ 0x14075C5E8 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // r15
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // r15
  LONG *v19; // rbx
  KIRQL v20; // al
  PVOID *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  KIRQL v24; // r14
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rbp
  unsigned __int64 result; // rax
  __int64 v28; // r10
  __int64 v29; // rbx
  unsigned __int64 i; // r11
  __int16 v31; // ax
  int v32; // eax
  unsigned __int64 v33; // rbx
  LONG *v34; // rbx
  KIRQL v35; // al
  _QWORD v36[15]; // [rsp+30h] [rbp-78h] BYREF
  int v37; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp+10h]
  int v39; // [rsp+C0h] [rbp+18h] BYREF
  struct _KTHREAD *v40; // [rsp+C8h] [rbp+20h]

  v39 = a3;
  v38 = a2;
  v3 = a2;
  memset(v36, 0, 0x30uLL);
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = (struct _KTHREAD *)v5;
  v6 = v5;
  v7 = (((a1 + 8 * (v3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v10;
  v14 = 0xFFFFFA8000000000uLL;
  if ( v5 <= v7 )
  {
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v6);
      v39 = 0;
      v17 = v14 + 48 * (v16 & (v15 >> 12));
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
        v14 = 0xFFFFFA8000000000uLL;
      }
      *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    v5 = (unsigned __int64)v40;
    v3 = v38;
  }
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11, v12, v14);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, a1, v3, 1, v36);
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v19 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v20 = ExAcquireSpinLockExclusive(v19);
  v19[1] = 0;
  v24 = v20;
  if ( v5 <= v7 )
  {
    do
    {
      v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v5) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v28 = 0LL;
        v29 = (__int64)(v5 << 25) >> 16;
        v23 = v29;
        for ( i = v29 + 4096; v23 < i; v23 += 8LL )
        {
          v31 = MI_READ_PTE_LOCK_FREE(v23);
          if ( (v31 & 0xC01) != 0 )
            break;
          v32 = v31 & 0x3E0;
          if ( v32 )
          {
            if ( v32 != 768LL )
              break;
          }
        }
        if ( v23 == i )
        {
          v21 = (PVOID *)PsLoadedModuleList;
          v23 = 0xFFFFF6FB40000000uLL;
          v33 = ((v29 << 25) - v28) >> 16;
          while ( 1 )
          {
            v22 = (unsigned __int64)v21[6];
            if ( v5 >= ((v22 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              && v5 <= (((v22 + *((unsigned int *)v21 + 16) - 1LL) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
            {
              break;
            }
            v21 = (PVOID *)*v21;
            if ( v21 == &PsLoadedModuleList )
              goto LABEL_20;
          }
          v21 = 0LL;
LABEL_20:
          if ( v21 )
          {
            LOBYTE(v21) = v24;
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v21, v22, 0xFFFFF6FB40000000uLL);
            MiReturnSystemVa(v33, v33 + 0x200000, 12);
            v34 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v35 = ExAcquireSpinLockExclusive(v34);
            v34[1] = 0;
            v24 = v35;
          }
        }
      }
      v5 += 8LL;
    }
    while ( v5 <= v7 );
    v3 = v38;
    CurrentThread = v40;
  }
  LOBYTE(v21) = v24;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v21, v22, v23);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  MiReturnResidentAvailable(v3);
  v26 = v3 - v36[1];
  MiReturnCommit((__int64)&MiSystemPartition, v26);
  result = qword_140466730 - v26;
  qword_140466730 -= v26;
  return result;
}
