/*
 * XREFs of RtlpInitWaitOnAddress @ 0x1800FF1A0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitWaitOnAddress(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)RtlpWaitOnAddressSpinCount;
  if ( *(_DWORD *)(a1 + 184) == 1 )
    result = 0LL;
  RtlpWaitOnAddressSpinCount = result;
  return result;
}
