/*
 * XREFs of EtwWriteEndScenario @ 0x1407165A0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14018B1D4 (PnpCompleteSystemStartProcess.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1406DDA94 (PopDiagTracePowerTransitionEnd.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAD20 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14017376C (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x1407176E0 (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        PVOID *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario(&v10, ActivityId, EventDescriptor, 11LL);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
