/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C0161B28
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS RequestModeSwitchOnPowerUp()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  if ( result >= 0 )
  {
    v3 = 1;
    if ( (unsigned int)IsPrecisionTouchPadEnabled(v2, v1) )
      v3 = 5;
    UserSessionSwitchLeaveCrit(5LL);
    RIMOnPowerNotification(Handle, v3);
    EnterCrit(0LL, 1LL);
    return ZwClose(Handle);
  }
  return result;
}
