/*
 * XREFs of PopTriggerDiagTraceAoAcCapability @ 0x1409DF38C
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
