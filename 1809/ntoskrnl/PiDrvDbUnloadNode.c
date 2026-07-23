/*
 * XREFs of PiDrvDbUnloadNode @ 0x1406AAEF8
 * Callers:
 *     PiDrvDbNodeActionCallback @ 0x1406AAD30 (PiDrvDbNodeActionCallback.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PiDrvDbUnloadNode(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v5 = *(_QWORD *)(a1 + 480);
    if ( v5 )
    {
      if ( v5 < 0 )
        KeSetCoalescableTimer((PKTIMER)(a1 + 264), *(LARGE_INTEGER *)(a1 + 480), 0, 0x3A98u, (PKDPC)(a1 + 328));
    }
    else
    {
      KiSetTimerEx(a1 + 264, 0LL, 0, 0, a1 + 328);
    }
    *(_BYTE *)(a1 + 488) = 1;
  }
  *a2 = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
