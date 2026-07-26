/*
 * XREFs of ndisOidPrePMHaltOnSuspend @ 0x1C004B060
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     GetMiniportFromReqTracker @ 0x1C00BBDEC (GetMiniportFromReqTracker.c)
 */

char ndisOidPrePMHaltOnSuspend()
{
  __int64 MiniportFromReqTracker; // rax
  __int64 v1; // rcx
  __int64 v2; // rdi
  KIRQL v3; // al

  MiniportFromReqTracker = GetMiniportFromReqTracker();
  v2 = MiniportFromReqTracker;
  if ( (*(_DWORD *)(MiniportFromReqTracker + 120) & 0x80u) == 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(MiniportFromReqTracker + 96));
    *(_DWORD *)(v2 + 4460) |= 0x10u;
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
    *(_DWORD *)(v2 + 124) &= 0xFFFFFF9F;
    *(_DWORD *)(v2 + 3896) |= 0x10u;
    ndisUpdateAndIndicatePMCapabilities(v2);
  }
  else
  {
    *(_DWORD *)(v1 + 40) = -1073741637;
  }
  return 1;
}
