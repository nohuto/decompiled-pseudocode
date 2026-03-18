/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C010FFF0
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01101B8 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0110E90 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C012DD18 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ApiSetGetUserHandedness @ 0x1C016417C (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int UserHandedness; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 492) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v3 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      UserHandedness = ApiSetGetUserHandedness();
      v11 = *(_QWORD *)(a1 + 496);
      v14 = *a2;
      v3 = RIMDeadzone::IsInDeadzone(v12, &v14, a3, v11, UserHandedness);
    }
    qword_1C01D0C28 = 0LL;
    ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
