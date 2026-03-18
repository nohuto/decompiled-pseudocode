/*
 * XREFs of PpmIdleGuestComplete @ 0x1402E71B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     HvlSetPlatformIdleState @ 0x140276EBC (HvlSetPlatformIdleState.c)
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
