/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x1400D3720
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D36AC (KiChargeSchedulingGroupCycleTime.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116904 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140117220 (KiResortScbQueue.c)
 */

unsigned __int64 __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 v3; // r9
  unsigned __int64 result; // rax
  char v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  char v11; // dl
  __int64 v12; // r10
  unsigned int v13; // ecx
  volatile signed __int32 *v14; // rax
  unsigned __int64 v15; // r10
  bool v16; // al

  v3 = *((_BYTE *)a3 + 112);
  result = v3;
  if ( (v3 & 0x12) != 0 )
    goto LABEL_2;
  v16 = KiChargeSchedulingGroupCycleTime((volatile signed __int64 *)a1, a3);
  v3 = *((_BYTE *)a3 + 112);
  if ( !v16 )
  {
    result = v3;
LABEL_2:
    v8 = 0;
    goto LABEL_3;
  }
  v3 |= 2u;
  v8 = 1;
  *((_BYTE *)a3 + 112) = v3;
  result = v3;
LABEL_3:
  v9 = *a3;
  v10 = a3[1];
  if ( (v3 & 0x10) != 0 && v9 >= v10
    || (v11 = result, (v3 & 0x10) == 0) && (v8 || (v11 = result, v10 != a3[2]) && v9 >= v10) )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v13 = a3[4] / ((unsigned __int64)(KiCycleDivisorLongTerm * v12) >> 7) + 1;
    v14 = (volatile signed __int32 *)a3[15];
    *((_DWORD *)a3 + 29) = v13;
    if ( v14 )
    {
      _InterlockedExchangeAdd(v14, v13);
      v10 = a3[1];
      v3 = *((_BYTE *)a3 + 112);
    }
    v15 = v10 + ((unsigned __int64)(KiCycleDivisorShortTerm * v12) >> 7);
    *((_BYTE *)a3 + 112) = v3 | 4;
    a3[3] = v15;
    result = KiCheckForEffectivePriorityChange(a2, a3);
    v11 = *((_BYTE *)a3 + 112);
  }
  if ( (v11 & 1) != 0 )
  {
    LOBYTE(v10) = 1;
    if ( (v11 & 2) != 0 )
      result = KiRemoveSchedulingGroupQueue(a2, a3, v10);
    else
      result = KiResortScbQueue(a2, a3, v10);
  }
  if ( (a3[14] & 4) != 0 && !*(_BYTE *)(a2 + 23449) )
  {
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_140404D58[result],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23449) = 1;
  }
  return result;
}
