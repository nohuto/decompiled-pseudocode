/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x14088B3A0
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1403067E8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
