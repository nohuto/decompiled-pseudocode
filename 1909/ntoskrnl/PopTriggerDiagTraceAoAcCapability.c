/*
 * XREFs of PopTriggerDiagTraceAoAcCapability @ 0x140A21B38
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void PopTriggerDiagTraceAoAcCapability()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PopTriggerDiagHandleRegistered )
  {
    v0 = PopTriggerDiagHandle;
    if ( EtwEventEnabled(PopTriggerDiagHandle, &POP_TRIGGER_ETW_AOAC_CAPABILITY) )
    {
      UserData.Reserved = 0;
      v1 = (unsigned __int8)PopPlatformAoAc;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v1;
      EtwWriteEx(v0, &POP_TRIGGER_ETW_AOAC_CAPABILITY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
