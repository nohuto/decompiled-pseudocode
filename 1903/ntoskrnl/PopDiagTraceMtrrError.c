/*
 * XREFs of PopDiagTraceMtrrError @ 0x1405ADDD8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void PopDiagTraceMtrrError()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_14044306C;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_MTRR_CHANGED, 0LL, 1u, &UserData);
    }
  }
}
