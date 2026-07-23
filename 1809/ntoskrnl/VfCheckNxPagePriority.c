/*
 * XREFs of VfCheckNxPagePriority @ 0x140309CB0
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPagePriority @ 0x1409284A0 (VfCheckPagePriority.c)
 */

__int64 VfCheckNxPagePriority()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return VfCheckPagePriority();
  return result;
}
