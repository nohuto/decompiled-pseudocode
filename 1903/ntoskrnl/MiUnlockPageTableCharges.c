/*
 * XREFs of MiUnlockPageTableCharges @ 0x140020B28
 * Callers:
 *     MiUnlockWsle @ 0x14001FA84 (MiUnlockWsle.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTableRange @ 0x1401671A0 (MiUnlockPageTableRange.c)
 * Callees:
 *     MiIsLowestPageTablePage @ 0x14001FA04 (MiIsLowestPageTablePage.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  BOOL IsLowestPageTablePage; // eax
  int v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = BugCheckParameter2;
  result = 0x2FFFFFFFFD0LL;
  if ( (unsigned __int64)(BugCheckParameter2 + 0x28000000030LL) < 0x30 )
    return result;
  v4 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage(BugCheckParameter2);
    v6 = 3;
  }
  else
  {
    if ( !a2 )
    {
      v6 = 4;
      goto LABEL_5;
    }
    IsLowestPageTablePage = 1;
    v6 = 1;
  }
  if ( !IsLowestPageTablePage )
    goto LABEL_30;
LABEL_5:
  if ( (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_30:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      v2,
      *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v2 + 24) < 0 );
    }
    result = *(_QWORD *)(v2 + 24);
    v10 = result ^ (result ^ (result - 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 24) = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v11 >= 0x10000 )
      break;
    if ( !v4 )
    {
      result = qword_140466188;
      v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
    }
    ++v7;
    if ( !v11 )
    {
      result = MiPfnShareCountIsZero(v2);
      if ( (_DWORD)result != 3 )
        ++v8;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v6 )
      goto LABEL_11;
    v2 = 48 * v9 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_11:
  if ( v7 )
  {
    result = (__int64)&MiSystemPartition;
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      result = MiReturnResidentAvailable(v7);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 8128), v7);
  }
  if ( v8 )
    return MiReturnCommit(v4, v8);
  return result;
}
