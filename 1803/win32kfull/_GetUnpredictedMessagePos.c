/*
 * XREFs of _GetUnpredictedMessagePos @ 0x1C0114810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetUnpredictedMessagePos()
{
  return *(unsigned __int16 *)(gptiCurrent + 1260LL) | (*(unsigned __int16 *)(gptiCurrent + 1264LL) << 16);
}
