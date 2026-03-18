/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x1408993A4
 * Callers:
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiRemovePlaceholderVad @ 0x1402DEDEC (MiRemovePlaceholderVad.c)
 *     PerfInfoLogVirtualFree @ 0x1408F5CE8 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiPreparePlaceholderVadReplacement(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(a1);
  MiRemovePlaceholderVad(v5);
  result = *(unsigned int *)(a1 + 28);
  *(_QWORD *)(a2 + 832) += (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                           - (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))) << 12)
                         - 4096;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    return PerfInfoLogVirtualFree(
             v7 << 12,
             ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v7 + 1) << 12,
             a2);
  }
  return result;
}
