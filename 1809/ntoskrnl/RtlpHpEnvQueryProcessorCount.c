/*
 * XREFs of RtlpHpEnvQueryProcessorCount @ 0x1401B64AC
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 * Callees:
 *     <none>
 */

__int64 RtlpHpEnvQueryProcessorCount()
{
  __int64 result; // rax

  result = HalQueryMaximumProcessorCount();
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
