/*
 * XREFs of ndisScheduleD0CompleteSignalWorkItem @ 0x1C00A6D84
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     ndisSetPowerResumeComplete @ 0x1C00B9A00 (ndisSetPowerResumeComplete.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisScheduleD0CompleteSignalWorkItem(__int64 a1, int a2)
{
  KIRQL v4; // si
  bool v5; // zf

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_BYTE *)(a1 + 4564) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( v5 && (unsigned __int8)ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 4564) = 1;
    *(_DWORD *)(a1 + 4560) = a2;
    ndisScheduleWorkItemInternal(a1 + 4480);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
