/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C0106DD0
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00FD980 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
