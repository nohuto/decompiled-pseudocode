/*
 * XREFs of MiUnlockPageTableCharges @ 0x14001A320
 * Callers:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUnlockPageTableRange @ 0x140157DD8 (MiUnlockPageTableRange.c)
 * Callees:
 *     MiIsLowestPageTablePage @ 0x14001A4EC (MiIsLowestPageTablePage.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  __int64 result; // rax
  __int64 v4; // rsi
  int IsLowestPageTablePage; // eax
  int v6; // r14d
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = BugCheckParameter2;
  result = 0x2FFFFFFFFD0LL;
  if ( BugCheckParameter2 + 0x28000000030LL < 0x30 )
    return result;
  v4 = 0LL;
  if ( a2 == 2 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
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
      result = qword_14043B808;
      v4 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v2 + 40) >> 40) & 0x3FFLL));
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
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7360), v7);
  }
  if ( v8 )
    return MiReturnCommit(v4, v8);
  return result;
}
