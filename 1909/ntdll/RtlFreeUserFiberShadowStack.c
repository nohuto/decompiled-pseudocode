/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E0BB0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D210 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
