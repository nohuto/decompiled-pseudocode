/*
 * XREFs of ndisOidPrePMHaltOnSuspend @ 0x1C0074530
 * Callers:
 *     <none>
 * Callees:
 *     GetMiniportFromReqTracker @ 0x1C0035124 (GetMiniportFromReqTracker.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C00774F8 (ndisUpdateAndIndicatePMCapabilities.c)
 */

char __fastcall ndisOidPrePMHaltOnSuspend(__int64 *a1)
{
  __int64 MiniportFromReqTracker; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  KIRQL v4; // al

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v3 = MiniportFromReqTracker;
  if ( (*(_DWORD *)(MiniportFromReqTracker + 120) & 0x80u) == 0 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(MiniportFromReqTracker + 96));
    *(_DWORD *)(v3 + 4420) |= 0x10u;
    *(_QWORD *)(v3 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v4);
    *(_DWORD *)(v3 + 124) &= 0xFFFFFF9F;
    *(_DWORD *)(v3 + 3864) |= 0x10u;
    ndisUpdateAndIndicatePMCapabilities(v3);
  }
  else
  {
    *(_DWORD *)(v2 + 40) = -1073741637;
  }
  return 1;
}
