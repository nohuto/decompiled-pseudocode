/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C00D8E60
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C9D30 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
