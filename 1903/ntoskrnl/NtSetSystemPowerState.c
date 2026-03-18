/*
 * XREFs of NtSetSystemPowerState @ 0x14059D920
 * Callers:
 *     NtShutdownSystem @ 0x14090B1A0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  _DWORD v7[100]; // [rsp+20h] [rbp-1B8h] BYREF

  memset(&v7[3], 0, 0x17CuLL);
  v7[0] = SystemAction;
  v7[1] = MinSystemState;
  v7[2] = Flags;
  return PopTransitionSystemPowerStateEx((__int64)v7);
}
