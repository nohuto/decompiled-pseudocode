/*
 * XREFs of ndisSetIdleTimer @ 0x1C0075F7C
 * Callers:
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072530 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0075888 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0075A74 (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetIdleTimer(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx
  __int64 v6; // kr00_8

  v1 = *(_QWORD *)(a1 + 4488);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  if ( !*(_DWORD *)(v1 + 508) )
  {
    v3 = *(_DWORD *)(v1 + 504);
    if ( (v3 & 1) == 0 )
    {
      *(_DWORD *)(v1 + 144) = 0;
      v4 = ndisConnectedStandby == 0;
      *(_DWORD *)(v1 + 504) = v3 | 1;
      if ( v4 || (v5 = *(_DWORD *)(v1 + 12)) == 0 )
        v6 = 2863311531LL * *(unsigned int *)(v1 + 8);
      else
        v6 = 2863311531LL * v5;
      KeSetCoalescableTimer(
        (PKTIMER)(v1 + 16),
        (LARGE_INTEGER)(-10000LL * (HIDWORD(v6) >> 1)),
        HIDWORD(v6) >> 1,
        (HIDWORD(v6) >> 1) / 5,
        (PKDPC)(v1 + 80));
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v2);
}
