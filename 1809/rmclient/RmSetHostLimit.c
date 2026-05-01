/*
 * XREFs of RmSetHostLimit @ 0x18000E410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 RmSetHostLimit()
{
  return RmpClientSetHostLimits();
}
