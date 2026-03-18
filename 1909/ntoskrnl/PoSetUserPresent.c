/*
 * XREFs of PoSetUserPresent @ 0x140181970
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopSetSystemState @ 0x1401819B4 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoSetUserPresent(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    PopAcquirePolicyLock(a1, a2);
  result = PopSetSystemState(4LL, v2);
  if ( CurrentIrql < 2u )
    return PopReleasePolicyLock(v6, v5);
  return result;
}
