/*
 * XREFs of NtShutdownSystem @ 0x14090AC00
 * Callers:
 *     <none>
 * Callees:
 *     NtSetSystemPowerState @ 0x14059D1A0 (NtSetSystemPowerState.c)
 */

NTSTATUS __stdcall NtShutdownSystem(SHUTDOWN_ACTION Action)
{
  __int32 v1; // ecx
  POWER_ACTION v3; // ecx

  if ( Action )
  {
    v1 = Action - 1;
    if ( v1 )
    {
      if ( v1 != 1 )
        return -1073741811;
      v3 = PowerActionShutdownOff;
    }
    else
    {
      v3 = PowerActionShutdownReset;
    }
  }
  else
  {
    v3 = PowerActionShutdown;
  }
  return NtSetSystemPowerState(v3, PowerSystemSleeping3, 0xC0000004);
}
