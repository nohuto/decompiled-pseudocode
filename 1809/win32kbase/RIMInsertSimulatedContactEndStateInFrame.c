/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C011913C (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01296D4 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0114C5C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0123694 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0127D0C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     RIMSetContactEndState @ 0x1C0128468 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // [rsp+28h] [rbp-20h]
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v18 = 0LL;
  v17 = 0;
  if ( !*(_QWORD *)(v6 + 728) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  RIMSetContactEndState(v6, a3, a4, v12, v11);
  InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v6 + 24), *(_WORD *)(a3 + 2400), a3 + 2408, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v14 = RIMAddSimulatedPointerDeviceData(v13, v6, a3, a3 + 2400, &v18, &v17);
    v15 = v18;
    if ( v14 < 0 )
    {
      LODWORD(v16) = v14;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x30u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v16);
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, v18, v17, (_DWORD *)(a3 + 2392));
    }
    if ( v15 )
      Win32FreePool(v15);
  }
}
