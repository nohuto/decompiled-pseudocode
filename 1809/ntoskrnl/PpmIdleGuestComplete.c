/*
 * XREFs of PpmIdleGuestComplete @ 0x1402E74A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x1402771AC (HvlSetPlatformIdleState.c)
 */

struct _KPRCB *__fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, int a3)
{
  struct _KPRCB *result; // rax

  if ( a3 != -1 )
  {
    (*(void (__fastcall **)(__int64))(PpmPlatformStates + 32))(a1);
    result = KeGetCurrentPrcb();
    if ( result->PowerState.Hypervisor >= ProcHypervisorPower && a3 == PpmDripsStateIndex )
      return (struct _KPRCB *)HvlSetPlatformIdleState();
  }
  return result;
}
