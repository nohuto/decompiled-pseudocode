/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C0069C5C
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     ndisSetPowerResumeComplete @ 0x1C0076040 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4604) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 1709405;
  if ( v5 && ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 4604) = 1;
    *(_DWORD *)(a1 + 4600) = a2;
    ndisScheduleWorkItemInternal(a1 + 4520);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
