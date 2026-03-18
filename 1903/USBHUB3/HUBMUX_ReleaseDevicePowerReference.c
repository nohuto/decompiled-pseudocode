/*
 * XREFs of HUBMUX_ReleaseDevicePowerReference @ 0x1C000FAB0
 * Callers:
 *     HUBDSM_FlushingHubPowerDownEventsForFailedDevice @ 0x1C001BE70 (HUBDSM_FlushingHubPowerDownEventsForFailedDevice.c)
 *     HUBDSM_FailedDeviceHubSuspended @ 0x1C001BF30 (HUBDSM_FailedDeviceHubSuspended.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReleaseDevicePowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rsi
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdi
  KIRQL v4; // al

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v3 = *(_QWORD *)a1 + 2320LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  _InterlockedAnd(v2 + 60, 0xFFFFFFFB);
  _InterlockedAnd(v2 + 60, 0xFFFFFFFD);
  _InterlockedOr(v2 + 60, 1u);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 28));
  LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF);
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v4);
  if ( (_DWORD)v2 == 1 )
    HUBSM_AddEvent(v1 + 1264, 2018);
}
