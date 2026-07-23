/*
 * XREFs of EtwWriteStartScenario @ 0x140747090
 * Callers:
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019DD2C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     PopDiagTracePowerTransitionStart @ 0x140724698 (PopDiagTracePowerTransitionStart.c)
 *     PerfDiagInitialize @ 0x140A15DA0 (PerfDiagInitialize.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x1401586DC (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1401C3870 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x140716438 (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        GUID *OutputBuffer,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF

  v12 = 0uLL;
  if ( EventDescriptor && OutputBuffer )
  {
    if ( EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    {
      ProviderIdFromHandle = EtwGetProviderIdFromHandle(RegHandle, 0, &v12);
      if ( ProviderIdFromHandle >= 0 )
      {
        if ( OutputBuffer->Data1
          || OutputBuffer->Data2
          || OutputBuffer->Data3
          || OutputBuffer->Data4[0]
          || OutputBuffer->Data4[1]
          || OutputBuffer->Data4[2]
          || OutputBuffer->Data4[3]
          || OutputBuffer->Data4[4]
          || OutputBuffer->Data4[5]
          || OutputBuffer->Data4[6]
          || OutputBuffer->Data4[7]
          || (ProviderIdFromHandle = ZwTraceControl(EtwActivityIdCreate, 0LL, 0, OutputBuffer, 0x10u, &ReturnLength),
              ProviderIdFromHandle >= 0) )
        {
          ProviderIdFromHandle = EtwWrite((REGHANDLE)RegHandle, EventDescriptor, OutputBuffer, UserDataCount, UserData);
          WdipStartEndScenario((__int64)&v12, (__int64)OutputBuffer, &EventDescriptor->Id, 10);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ProviderIdFromHandle;
}
