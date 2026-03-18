/*
 * XREFs of HvlGetQpcBias @ 0x14013E760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *((_QWORD *)HvlpReferenceTscPage + 3);
}
