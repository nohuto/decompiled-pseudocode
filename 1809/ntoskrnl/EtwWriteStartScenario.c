/*
 * XREFs of EtwWriteStartScenario @ 0x1407178F0
 * Callers:
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019389C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     PopDiagTracePowerTransitionStart @ 0x1406DE3AC (PopDiagTracePowerTransitionStart.c)
 *     PerfDiagInitialize @ 0x1409D1A80 (PerfDiagInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14017386C (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x1401BBA70 (ZwTraceControl.c)
 *     WdipStartEndScenario @ 0x140718980 (WdipStartEndScenario.c)
 */

__int64 __fastcall EtwWriteStartScenario(
        PVOID *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        GUID *OutputBuffer,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int ProviderIdFromHandle; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF

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
          WdipStartEndScenario(&v12, OutputBuffer, EventDescriptor, 10LL);
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
