/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1408520F0
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1402E9758 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
