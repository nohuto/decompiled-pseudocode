/*
 * XREFs of MiDecommitLargePoolVa @ 0x140146B90
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140116770 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     MiFreeLargePageMemory @ 0x140146DD8 (MiFreeLargePageMemory.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C08C0 (MiLogPerfMemoryRangeEvent.c)
 */

void __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  ULONG_PTR v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rbx
  unsigned __int64 ContainingPageTable; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-158h] BYREF
  __int64 v20; // [rsp+28h] [rbp-150h] BYREF
  ULONG_PTR v21; // [rsp+30h] [rbp-148h]
  unsigned __int64 v22[7]; // [rsp+38h] [rbp-140h] BYREF
  int v23; // [rsp+70h] [rbp-108h] BYREF
  __int16 v24; // [rsp+74h] [rbp-104h]
  __int16 v25; // [rsp+76h] [rbp-102h]
  __int64 v26; // [rsp+78h] [rbp-100h]
  __int64 v27; // [rsp+80h] [rbp-F8h]
  __int64 v28; // [rsp+88h] [rbp-F0h]
  _BYTE v29[152]; // [rsp+90h] [rbp-E8h] BYREF

  v25 = 0;
  memset(v29, 0, sizeof(v29));
  memset(v22, 0, 0x30uLL);
  v6 = 0;
  v26 = 20LL;
  v23 = 0;
  v24 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v20 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
  v21 = v7;
  v8 = 48 * v7 - 0x58000000000LL;
  v9 = 0;
  if ( a3 )
  {
    v10 = v8 + 24;
    do
    {
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)v10 < 0 );
      }
      *(_BYTE *)(v10 + 10) = *(_BYTE *)(v10 + 10) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      ++v9;
      v8 += 48LL;
      v10 += 48LL;
    }
    while ( v9 < a3 );
    v7 = v21;
  }
  *(_QWORD *)(v8 - 48LL * v9) = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a2);
  MiLockAndDecrementShareCount(v12 + 48 * ContainingPageTable, 0);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  if ( !MiPteInShadowRange(a2) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v13 & 1) != 0 )
    {
      v13 |= 0x8000000000000000uLL;
    }
LABEL_9:
    *(_QWORD *)a2 = v13;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_1404658EC) && (v13 & 1) != 0 )
    v13 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v13;
  MiWritePteShadow(a2);
LABEL_10:
  MiInsertLargeTbFlushEntry((__int64)&v23, 1u, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v18 = 3LL;
    do
    {
      a2 = (__int64)(a2 << 25) >> 16;
      --v18;
    }
    while ( v18 );
    MiReplicatePteChange(a2, a2);
  }
  MiFlushTbList(&v23, v14, v15, v16);
  v17 = MiLargePageSizes;
  do
  {
    if ( *v17 == a3 )
      break;
    ++v6;
    ++v17;
  }
  while ( v6 < 3 );
  MiFreeLargePageMemory(v7);
  v22[0] = a3;
  v22[3] = a3;
  MiReturnPoolCharges(v22, 0);
}
