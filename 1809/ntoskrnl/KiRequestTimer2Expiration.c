/*
 * XREFs of KiRequestTimer2Expiration @ 0x140003A70
 * Callers:
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14016FF34 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 */

signed __int16 KiRequestTimer2Expiration()
{
  unsigned int v0; // r9d
  __int64 v1; // rdx
  struct _KPRCB *v2; // r8
  signed __int16 result; // ax
  signed __int16 v4; // tt

  v0 = KiClockTimerOwner;
  v1 = 8LL;
  v2 = (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
  _m_prefetchw(&v2->11884);
  result = v2->DpcRequestSlot[0];
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)&v2->11884, result | 8, result);
  }
  while ( v4 != result );
  if ( (result & 0x29) == 0 )
  {
    LOBYTE(v1) = 2;
    if ( KeGetCurrentPrcb() == v2 )
      return KiRequestSoftwareInterrupt(v2, v1);
    else
      return KiSendSoftwareInterrupt(v0, v1);
  }
  return result;
}
