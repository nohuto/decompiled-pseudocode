/*
 * XREFs of StorProbeAndLockPages @ 0x1C0021D3C
 * Callers:
 *     StorBuildSynchronousScsiRequest @ 0x1C0021C18 (StorBuildSynchronousScsiRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
