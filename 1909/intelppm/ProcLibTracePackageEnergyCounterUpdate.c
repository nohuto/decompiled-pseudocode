/*
 * XREFs of ProcLibTracePackageEnergyCounterUpdate @ 0x1C0007E50
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0005C80 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePackageEnergyCounterUpdate(int a1, __int64 a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE);
  if ( result )
  {
    UserData.Reserved = 0;
    v6 = 0;
    UserData.Ptr = (unsigned __int64)&v7;
    UserData.Size = 4;
    v4 = &v8;
    v5 = 8;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
             &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
