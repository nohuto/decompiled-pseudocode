/*
 * XREFs of VfCheckNxPoolType @ 0x140309B00
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1409275EC (VfCheckPoolType.c)
 */

__int64 VfCheckNxPoolType()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPoolType();
  return result;
}
