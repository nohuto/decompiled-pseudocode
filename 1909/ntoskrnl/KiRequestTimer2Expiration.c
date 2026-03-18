/*
 * XREFs of KiRequestTimer2Expiration @ 0x14012D1A0
 * Callers:
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140179D34 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetDpcRequestFlag @ 0x14012D204 (KiSetDpcRequestFlag.c)
 *     KiSendSoftwareInterrupt @ 0x14012D268 (KiSendSoftwareInterrupt.c)
 */

__int64 KiRequestTimer2Expiration()
{
  unsigned int v0; // edi
  struct _KPRCB *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx

  v0 = KiClockTimerOwner;
  v1 = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  result = KiSetDpcRequestFlag(&v1->11884, 8LL);
  if ( (result & 0x29) == 0 )
  {
    LOBYTE(v3) = 2;
    if ( KeGetCurrentPrcb() == v1 )
      return KiRequestSoftwareInterrupt(v1, 2);
    else
      return KiSendSoftwareInterrupt(v0, v3);
  }
  return result;
}
