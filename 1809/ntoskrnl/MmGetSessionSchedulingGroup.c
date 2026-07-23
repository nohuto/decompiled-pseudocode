/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x140853350
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1402E9948 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
