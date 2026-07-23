/*
 * XREFs of MiDecommitLargePoolVa @ 0x14015B3E0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140111620 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 */

void __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  ULONG_PTR v9; // r12
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rdx
  int v21; // [rsp+20h] [rbp-148h] BYREF
  __int64 v22; // [rsp+28h] [rbp-140h] BYREF
  ULONG_PTR v23; // [rsp+30h] [rbp-138h]
  unsigned __int64 v24[5]; // [rsp+38h] [rbp-130h] BYREF
  int v25; // [rsp+60h] [rbp-108h] BYREF
  __int16 v26; // [rsp+64h] [rbp-104h]
  __int64 v27; // [rsp+68h] [rbp-100h]
  __int64 v28; // [rsp+70h] [rbp-F8h]
  __int64 v29; // [rsp+78h] [rbp-F0h]

  memset(v24, 0, sizeof(v24));
  v6 = 0;
  v27 = 20LL;
  v25 = 0;
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v22 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL;
  v23 = v9;
  v10 = 48 * v9 - 0x58000000000LL;
  v11 = 0;
  if ( a3 )
  {
    v12 = v10 + 24;
    do
    {
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, v7, v8);
        while ( *(__int64 *)v12 < 0 );
      }
      *(_BYTE *)(v12 + 10) = *(_BYTE *)(v12 + 10) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v12, 0x7FFFFFFFFFFFFFFFuLL);
      ++v11;
      v10 += 48LL;
      v12 += 48LL;
    }
    while ( v11 < a3 );
    v9 = v23;
  }
  *(_QWORD *)(v10 - 48LL * v11) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(v14 + 48 * ContainingPageTable, 0);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v15 & 1) != 0 )
    {
      v15 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *(_QWORD *)a2 = v15;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_14043B26C) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v15;
  MiWritePteShadow(a2, v15);
LABEL_10:
  MiInsertLargeTbFlushEntry((__int64)&v25, 1u, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v20 = 3LL;
    do
    {
      a2 = (__int64)(a2 << 25) >> 16;
      --v20;
    }
    while ( v20 );
    MiReplicatePteChange(a2, a2);
  }
  MiFlushTbList(&v25, v16, v17, v18);
  v19 = MiLargePageSizes;
  do
  {
    if ( *v19 == a3 )
      break;
    ++v6;
    ++v19;
  }
  while ( v6 < 3 );
  MiFreeLargePageMemory(v9, v6, 0);
  v24[0] = a3;
  v24[3] = a3;
  MiReturnPoolCharges(v24, 0);
}
