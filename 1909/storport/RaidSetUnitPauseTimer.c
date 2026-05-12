/*
 * XREFs of RaidSetUnitPauseTimer @ 0x1C0001C4C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AF0 (RaidAdapterDeferredRoutine.c)
 *     RaidStallDeviceQueue @ 0x1C001184C (RaidStallDeviceQueue.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002074 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 */

char __fastcall RaidSetUnitPauseTimer(__int64 a1, unsigned int a2)
{
  int v3; // eax

  LOBYTE(v3) = KeSetCoalescableTimer((PKTIMER)(a1 + 1080), (LARGE_INTEGER)(-10000LL * a2), 0, 0, (PKDPC)(a1 + 1144));
  if ( (_BYTE)v3 )
  {
    v3 = RaidResumeUnitQueue(a1);
    if ( v3 )
      LOBYTE(v3) = RaidRestartIoQueue(a1);
  }
  return v3;
}
