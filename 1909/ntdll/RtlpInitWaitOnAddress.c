/*
 * XREFs of RtlpInitWaitOnAddress @ 0x1800FC770
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitWaitOnAddress(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 184) > 1u )
    result = 10240LL;
  RtlpWaitOnAddressSpinCycleCount = result;
  return result;
}
