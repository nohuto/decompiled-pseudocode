/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x1C000DDFC
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000F840 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000F8A0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C000F8D0 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1C000F9B0 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C000FAF0 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C00106E0 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2328), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1264, 2046);
}
