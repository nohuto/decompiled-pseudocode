/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return ZwSetInformationProcess();
}
