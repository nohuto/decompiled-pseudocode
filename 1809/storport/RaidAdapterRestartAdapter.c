/*
 * XREFs of RaidAdapterRestartAdapter @ 0x1C0012D80
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportAdapterControl @ 0x1C0016D38 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterRestartAdapter(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // si
  int v4; // edi

  v1 = a1 + 312;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 4LL) )
    RaCallMiniportAdapterControl(v1, 4LL, 0LL);
  v3 = RaidAdapterAcquireInterruptLock(a1);
  v4 = RaCallMiniportAdapterControl(v1, 2LL, 0LL);
  if ( v4 >= 0 )
    *(_BYTE *)(a1 + 104) |= 1u;
  RaidAdapterReleaseInterruptLock(a1, v3);
  return (unsigned int)v4;
}
