/*
 * XREFs of ExpFreeHeapSpecialPool @ 0x14031EE54
 * Callers:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107700 (ExpRemovePoolTrackerExpansion.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     VerifierFreeTrackedPool @ 0x1402BA60C (VerifierFreeTrackedPool.c)
 */

__int64 __fastcall ExpFreeHeapSpecialPool(__int128 *a1, unsigned __int64 a2)
{
  int v4; // eax
  __int16 v5; // bp
  ULONG_PTR v6; // rsi
  int v7; // r15d
  unsigned __int8 CurrentIrql; // dl
  _DWORD *v9; // r14
  unsigned __int64 v10; // rbx
  int v11; // edx
  char v12; // r9
  _BYTE *i; // r8
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // r11
  unsigned int v18; // edx
  __int64 v19; // rcx
  _DWORD *v20; // r8
  int v21; // eax
  int v22; // ecx

  v4 = MiDeterminePoolType(a2);
  v5 = 0;
  if ( v4 != 32 )
    v5 = v4;
  v6 = 4096 - (unsigned int)(a2 & 0xFFF);
  ExpFreePoolChecks(a2, v6, 0);
  v7 = v5 & 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v7 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v9 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v10 = *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF;
  if ( ((v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v6 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF, v6, 0x21uLL);
  v11 = *v9 & 0x4000;
  v12 = BYTE2(*v9);
  if ( v11 )
    v12 = BYTE2(*v9);
  for ( i = (char *)v9 + (v11 != 0 ? 24LL : 16LL); (unsigned __int64)i < a2; ++i )
  {
    if ( *i != v12 )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, (unsigned int)*v9, 0x23uLL);
  }
  if ( v11 )
    VerifierFreeTrackedPool(a2, *(_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL) & 0x1FFF);
  v14 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4);
  if ( (_DWORD)v14 == PoolHitTag )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v5, v14, a2, v10);
  if ( (v5 & 0x20) != 0 )
  {
    v17 = ExpSessionPoolTrackTable;
    v16 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v15) = KeGetPcr()->Prcb.Number;
    v16 = PoolTrackTableMask;
    v17 = (__int64)*(&ExPoolTagTables + v15);
  }
  v18 = v16 & ((40543 * v14) ^ ((unsigned __int64)(40543 * v14) >> 32));
  while ( 1 )
  {
    v19 = 56LL * v18;
    v20 = (_DWORD *)(v19 + v17);
    v21 = *(_DWORD *)(v19 + v17);
    if ( v21 == (_DWORD)v14 )
      break;
    if ( v21 || (v5 & 0x20) != 0 || (v22 = *(_DWORD *)(v19 + PoolTrackTable)) == 0 )
    {
      v18 = v16 & (v18 + 1);
      if ( v18 == (v16 & ((40543 * (int)v14) ^ ((unsigned __int64)(40543 * v14) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v14, v10, v5);
        return RtlpHpFreeHeap(a1, (__int64)v9, 0);
      }
    }
    else
    {
      *v20 = v22;
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)((char *)v20 + (v7 != 0 ? 0x18 : 0) + 24));
  _InterlockedExchangeAdd64((volatile signed __int64 *)((char *)v20 + (v7 != 0 ? 0x18 : 0) + 8), -(__int64)v10);
  return RtlpHpFreeHeap(a1, (__int64)v9, 0);
}
