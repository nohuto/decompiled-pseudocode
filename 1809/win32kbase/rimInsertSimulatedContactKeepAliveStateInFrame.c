/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0114C5C (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0123694 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0127D0C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     rimSetContactKeepAliveState @ 0x1C012C21C (rimSetContactKeepAliveState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a2 + 480);
  v13 = 0LL;
  v12 = 0;
  if ( !*(_QWORD *)(v3 + 728) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_DWORD *)(a3 + 32);
  if ( (v7 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v7 = *(_DWORD *)(a3 + 32);
  }
  if ( (v7 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_DWORD *)(a3 + 2340) |= 1u;
  rimSetContactKeepAliveState(v3, a3);
  InputTraceLogging::RIM::PopulateContact(a2, *(unsigned int *)(v3 + 24), *(_WORD *)(a3 + 2400), a3 + 2408, 1);
  v9 = RIMAddSimulatedPointerDeviceData(v8, v3, a3, a3 + 2400, &v13, &v12);
  v10 = v13;
  if ( v9 < 0 )
  {
    LODWORD(v11) = v9;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x2Fu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v11);
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, v13, v12, (_DWORD *)(a3 + 2392));
  }
  if ( v10 )
    Win32FreePool(v10);
}
