/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C01376A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1268LL) | (*(unsigned __int16 *)(gptiCurrent + 1272LL) << 16);
}
