/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C0159110
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS RequestModeSwitchOnPowerUp()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  if ( result >= 0 )
  {
    UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
    RIMOnPowerNotification(Handle, gPTPEnabled != 0 ? 5LL : 1LL);
    EnterCrit(0LL, 1LL);
    return ZwClose(Handle);
  }
  return result;
}
