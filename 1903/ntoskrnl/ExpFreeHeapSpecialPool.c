/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x14033F270
 * Callers:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     MiDeterminePoolType @ 0x140061A60 (MiDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x140117AE8 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140126754 (ExpRemovePoolTrackerExpansion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1403289B0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x14032DF54 (EtwTracePool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int128 *a1, unsigned __int64 a2)
{
  int v4; // eax
  __int16 v5; // dx
  __int16 v6; // r14
  ULONG_PTR v7; // rbp
  int v8; // r15d
  unsigned __int8 CurrentIrql; // dl
  _DWORD *v10; // rsi
  unsigned __int64 v11; // rbx
  _BYTE *i; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // r11
  unsigned int v17; // edx
  __int64 v18; // rcx
  _DWORD *v19; // r8
  int v20; // eax
  int v21; // ecx

  v4 = MiDeterminePoolType(a2);
  v6 = 0;
  if ( v4 != 32 )
    v6 = v4;
  v7 = 4096 - (v5 & 0xFFFu);
  ExpFreePoolChecks(a2, v7, 0);
  v8 = v6 & 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v8 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v10 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v11 = *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF;
  if ( ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v7 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF, v7, 0x21uLL);
  for ( i = (char *)v10 + ((*v10 & 0x4000) != 0 ? 24LL : 16LL); (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *(_BYTE *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, (unsigned int)*v10, 0x23uLL);
  }
  if ( (*v10 & 0x4000) != 0 )
    VerifierFreeTrackedPool(a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF);
  v13 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4);
  if ( (_DWORD)v13 == PoolHitTag )
    __debugbreak();
  v14 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v6, v13, a2, v11);
  if ( (v6 & 0x20) != 0 )
  {
    v16 = ExpSessionPoolTrackTable;
    v15 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    v15 = PoolTrackTableMask;
    v16 = (__int64)*(&ExPoolTagTables + v14);
  }
  v17 = v15 & ((40543 * v13) ^ ((unsigned __int64)(40543 * v13) >> 32));
  while ( 1 )
  {
    v18 = 56LL * v17;
    v19 = (_DWORD *)(v18 + v16);
    v20 = *(_DWORD *)(v18 + v16);
    if ( v20 == (_DWORD)v13 )
      break;
    if ( v20 || (v6 & 0x20) != 0 || (v21 = *(_DWORD *)(v18 + PoolTrackTable)) == 0 )
    {
      v17 = v15 & (v17 + 1);
      if ( v17 == (v15 & ((40543 * (int)v13) ^ ((unsigned __int64)(40543 * v13) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v13, v11, v6);
        return RtlpHpFreeHeap(a1, (__int64)v10, 0);
      }
    }
    else
    {
      *v19 = v21;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v19 + (v8 != 0 ? 0x18 : 0) + 24));
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v19 + (v8 != 0 ? 0x18 : 0) + 8), -(__int64)v11);
  return RtlpHpFreeHeap(a1, (__int64)v10, 0);
}
