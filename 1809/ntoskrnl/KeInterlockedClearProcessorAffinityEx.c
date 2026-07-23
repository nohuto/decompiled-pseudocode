/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x140177F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  char v4; // cl

  v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2];
  v4 = v3 & 0x3F;
  v3 >>= 6;
  _m_prefetchw((const void *)(a1 + 8 * v3 + 8));
  return ((1LL << v4) & _InterlockedAnd64((volatile signed __int64 *)(a1 + 8 * v3 + 8), ~(1LL << v4))) != 0;
}
