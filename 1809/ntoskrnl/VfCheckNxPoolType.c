/*
 * XREFs of VfCheckNxPoolType @ 0x140309CF0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
