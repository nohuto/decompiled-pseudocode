/*
 * XREFs of MmGetSessionSchedulingGroupByProcess @ 0x14064FBE0
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x140193EE4 (PsQueryCpuQuotaInformation.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PspEstablishDfssHierarchy @ 0x14088AD70 (PspEstablishDfssHierarchy.c)
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
