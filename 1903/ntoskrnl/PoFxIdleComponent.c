/*
 * XREFs of PoFxIdleComponent @ 0x1400B1570
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1400B1298 (PopFxIdleWorkerTail.c)
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x140195540 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400B15C0 (PopFxIdleComponent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  _BYTE v5[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = BugCheckParameter3;
  memset(v5, 0, sizeof(v5));
  return PopFxIdleComponent(BugCheckParameter2, v2);
}
