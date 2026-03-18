/*
 * XREFs of EtwWriteEndScenario @ 0x140747A50
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401947F4 (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140725184 (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x1401586DC (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x140716438 (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0uLL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario((__int64)&v10, (__int64)ActivityId, &EventDescriptor->Id, 11);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
