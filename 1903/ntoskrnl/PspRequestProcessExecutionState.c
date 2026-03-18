/*
 * XREFs of PspRequestProcessExecutionState @ 0x14069473C
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x1400E6090 (PspSetProcessFreezeStateCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140693F78 (PspApplyJobChainLimitsToProcess.c)
 *     PsSwapProcessWorkingSet @ 0x1408C673C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionState(__int64 a1, int a2, char a3)
{
  int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  int v6; // r8d
  int v7; // edx
  bool v8; // zf

  if ( (*(_DWORD *)(a1 + 1788) & 1) == 0 || (v8 = (a3 & 1) == 0, v3 = 0x10000000, !v8) )
    v3 = 805306368;
  LODWORD(result) = *(_DWORD *)(a1 + 776);
  v5 = v3 & (a2 << 28);
  v6 = ~v3;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 776), v5 | result & v6, result);
  }
  while ( (_DWORD)result != v7 );
  return result;
}
