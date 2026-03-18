/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x14088BB80
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140306D38 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
