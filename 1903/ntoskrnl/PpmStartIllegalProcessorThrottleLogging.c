/*
 * XREFs of PpmStartIllegalProcessorThrottleLogging @ 0x14013E490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 24048) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 24056) = 0;
  return result;
}
