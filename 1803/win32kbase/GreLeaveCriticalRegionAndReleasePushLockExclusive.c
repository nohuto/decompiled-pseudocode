/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00D8F90
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C9D30 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
