/*
 * XREFs of MiUpdateAwePageTable @ 0x1402B2338
 * Callers:
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiDeleteEnclavePage @ 0x1402BDD44 (MiDeleteEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F27C (MiDecreaseUsedPtesCount.c)
 */

__int64 __fastcall MiUpdateAwePageTable(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 UsedPtesHandle; // rcx
  __int64 v12; // r8
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (__int64)(a1 << 25) >> 16 << 25 >> 16;
  if ( a2 )
  {
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14, v8, v10);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL || !a3 )
    return 0LL;
  UsedPtesHandle = MiGetUsedPtesHandle(v7);
  if ( a3 <= 0 )
  {
    if ( !(unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)-a3, v12) )
      return 1;
  }
  else
  {
    MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)a3, v12);
  }
  return v6;
}
