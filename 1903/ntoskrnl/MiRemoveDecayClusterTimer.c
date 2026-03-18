/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14011A5FC
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x14000E780 (MiEmptyDecayClusterTimers.c)
 *     MiDecayPfnFullyInitialized @ 0x14011A440 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14011A568 (MiDeleteParentDecayNode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r10
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r11

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6;
  v2 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  result = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)result >> 1;
  v5 = result >> 33;
  if ( v4 == 0x7FFFFFFF )
    *(_QWORD *)(v2 + 8 * v1 + 4728) = result ^ (result ^ *(_QWORD *)(v2 + 8 * v1 + 4728)) & 0x1FFFFFFFFLL;
  else
    *(_QWORD *)(48 * (qword_1404664E0 + v4) - 0x58000000000LL + 8) = result ^ (*(_QWORD *)(48 * (qword_1404664E0 + v4)
                                                                                         - 0x58000000000LL
                                                                                         + 8) ^ result) & 0x1FFFFFFFFLL;
  if ( v5 == 0x7FFFFFFF )
  {
    result = (*(_DWORD *)(v2 + 8 * v1 + 4728) ^ (unsigned int)result) & 0xFFFFFFFE;
    *(_QWORD *)(v2 + 8 * v1 + 4728) ^= result;
  }
  else
  {
    *(_QWORD *)(48 * (v5 + qword_1404664E0) - 0x58000000000LL + 8) ^= (result ^ *(_QWORD *)(48 * (v5 + qword_1404664E0)
                                                                                          - 0x58000000000LL
                                                                                          + 8)) & 0xFFFFFFFE;
  }
  return result;
}
