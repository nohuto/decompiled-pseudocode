/*
 * XREFs of MmGetSessionSchedulingGroupByProcess @ 0x14064EA40
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x140193D84 (PsQueryCpuQuotaInformation.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PspEstablishDfssHierarchy @ 0x140889B30 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroupByProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL);
}
