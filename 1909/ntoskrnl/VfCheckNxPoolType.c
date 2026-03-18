/*
 * XREFs of VfCheckNxPoolType @ 0x140327130
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
