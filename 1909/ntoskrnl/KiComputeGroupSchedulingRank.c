/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x140015AB0
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 * Callees:
 *     KiCheckMaxOverQuotaTransition @ 0x140015B38 (KiCheckMaxOverQuotaTransition.c)
 *     KiCheckForEffectivePriorityChange @ 0x14011561C (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140115A2C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140115CE4 (KiResortScbQueue.c)
 */

char __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 *a3)
{
  char v6; // al
  __int64 v7; // r8
  char v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // ecx
  volatile signed __int32 *v14; // rax
  unsigned __int64 v15; // r9

  v6 = KiCheckMaxOverQuotaTransition(a3, a1);
  LOBYTE(v7) = *((_BYTE *)a3 + 112);
  v8 = v6;
  v9 = *a3;
  v10 = a3[1];
  if ( (v7 & 0x10) != 0 && v9 >= v10
    || (LOBYTE(v11) = *((_BYTE *)a3 + 112), (v11 & 0x10) == 0)
    && (v8 || (LOBYTE(v11) = *((_BYTE *)a3 + 112), v10 != a3[2]) && v9 >= v10) )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v13 = a3[4] / ((unsigned __int64)(KiCycleDivisorLongTerm * v12) >> 7) + 1;
    v14 = (volatile signed __int32 *)a3[15];
    *((_DWORD *)a3 + 29) = v13;
    if ( v14 )
    {
      _InterlockedExchangeAdd(v14, v13);
      v10 = a3[1];
      LOBYTE(v7) = *((_BYTE *)a3 + 112);
    }
    v15 = v10 + ((unsigned __int64)(KiCycleDivisorShortTerm * v12) >> 7);
    *((_BYTE *)a3 + 112) = v7 | 4;
    a3[3] = v15;
    KiCheckForEffectivePriorityChange(a2, a3);
    LOBYTE(v11) = *((_BYTE *)a3 + 112);
  }
  if ( (v11 & 1) != 0 )
  {
    LOBYTE(v7) = 1;
    if ( (v11 & 2) != 0 )
      LOBYTE(v11) = KiRemoveSchedulingGroupQueue(a2, a3, v7);
    else
      LOBYTE(v11) = KiResortScbQueue(a2, a3, v7);
  }
  if ( (a3[14] & 4) != 0 && !*(_BYTE *)(a2 + 23449) )
  {
    v11 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_14042A1B8[v11],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23449) = 1;
  }
  return v11;
}
